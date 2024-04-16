 

大二下开学接触[ACM](https://so.csdn.net/so/search?q=ACM&spm=1001.2101.3001.7020)（准确来说是2020的寒假，由于疫情只能在家，就接触了ACM），逃了一年课，终于在2020ICPC济南站（162名）拿了一个铜（大三上），也算在退役前拿了个奖（由于大一结束当了两年兵，导致今年就是icpc大限的第五年，这场也是我可以打的最后一场了，上一场南京站216名差6名遗憾打铁），开心特将自己的模板总结了一下，也看看着自己这一年来学了什么。  

#### 个人ACM模板总结——AC\_Jobim

- [一、图论](#一图论)
  - [（一）链式前向星](#一链式前向星)
  - [（二）最短路](#二最短路)
    - [1.Dijkstra算法：O(mlogn)](#1dijkstra算法omlogn)
    - [2.bellman\_ford:O(nm)](#2bellman_fordonm)
    - [3.Floyed算法：O(n^3)](#3floyed算法on3)
    - [4.Spfa求最短路：边权可能是负值，但不存在负权回路](#4spfa求最短路边权可能是负值但不存在负权回路)
    - [5.Spfa判断负环:O(m),最坏O(nm)](#5spfa判断负环om最坏onm)
    - [6.Dijkstra算法：朴素版](#6dijkstra算法朴素版)
  - [（三）最小生成树](#三最小生成树)
    - [1.Prim算法：O(n^2)，用于稠密图，邻接矩阵](#1prim算法on2用于稠密图邻接矩阵)
    - [2.Prim算法：O(n^2)，邻接表](#2prim算法on2邻接表)
    - [3.Kruskal算法：O(mlogm)](#3kruskal算法omlogm)
  - [（四）二分图](#四二分图)
    - [1.匈牙利算法：O(nm)](#1匈牙利算法onm)
    - [2.KM()算法,求二分图的带权最大匹配，O(n^3)](#2km算法求二分图的带权最大匹配on3)
  - [（五）差分约束](#五差分约束)
  - [（六）Lca算法](#六lca算法)
    - [1.树上倍增法O(nlogn)](#1树上倍增法onlogn)
    - [2.LCA的Tarjan算法0(n+m)](#2lca的tarjan算法0nm)
  - [（七）连通性](#七连通性)
    - [1.有向图的强连通分量（SCC）：Tarjan算法O(n+m)](#1有向图的强连通分量scctarjan算法onm)
    - [2.无向图的边双连通分量：E-DCC](#2无向图的边双连通分量e-dcc)
    - [3.求删除割点之后连通块的数目](#3求删除割点之后连通块的数目)
    - [4.无向图的点双连通分量：V-DCC](#4无向图的点双连通分量v-dcc)
  - [（八）网络流](#八网络流)
    - [1.最大流EK()算法](#1最大流ek算法)
    - [2.最大流Dinic()](#2最大流dinic)
    - [3.最小费用流EK()](#3最小费用流ek)
  - [（九）其他](#九其他)
    - [1.拓扑排序：可以用来判断是否存在环](#1拓扑排序可以用来判断是否存在环)
    - [2.求树的重心](#2求树的重心)
    - [3.欧拉回路](#3欧拉回路)
- [二、数论](#二数论)
  - [（一）质数](#一质数)
    - [1.质数的判定](#1质数的判定)
    - [2.埃氏筛选](#2埃氏筛选)
    - [3.线性筛选](#3线性筛选)
    - [4.分解质因数](#4分解质因数)
    - [5.用素数分解质因数](#5用素数分解质因数)
  - [（二）约数](#二约数)
    - [1.算数基本定理](#1算数基本定理)
    - [2.试除法求约数](#2试除法求约数)
    - [3.求约数的个数](#3求约数的个数)
    - [4.求所有约数的和](#4求所有约数的和)
    - [5.欧几里得算法：求最大公约数](#5欧几里得算法求最大公约数)
    - [6.欧拉函数](#6欧拉函数)
    - [7.线性筛欧拉函数](#7线性筛欧拉函数)
    - [8.欧拉定理：若a与n互质，则：aφ（n）≡1(mod n)](#8欧拉定理若a与n互质则aφn1mod-n)
    - [9.费马小定理：an-1≡ 1 (mod n)](#9费马小定理an-1-1-mod-n)
    - [10.扩展欧几里得算法](#10扩展欧几里得算法)
  - [（三）高斯消元](#三高斯消元)
  - [（四）求组合数](#四求组合数)
    - [1.Lucas定理求组合数](#1lucas定理求组合数)
    - [2.预处理求组合数](#2预处理求组合数)
    - [3.不取模求组合数（高精度）](#3不取模求组合数高精度)
  - [（四）SG函数](#四sg函数)
  - [（五）矩阵快速幂：求斐波那契数列的第n项](#五矩阵快速幂求斐波那契数列的第n项)
  - [（六）常见公式](#六常见公式)
    - [1.卡特兰数](#1卡特兰数)
    - [2.错排公式](#2错排公式)
    - [3.常用前n项和公式](#3常用前n项和公式)
- [三、数据结构](#三数据结构)
  - [（一）堆](#一堆)
  - [（二）并查集](#二并查集)
  - [（三）树状数组](#三树状数组)
    - [1.单点更改，区间查询](#1单点更改区间查询)
    - [2.区间更改，单点查询](#2区间更改单点查询)
    - [3.区间更改，区间查询](#3区间更改区间查询)
    - [4.二维树状数组](#4二维树状数组)
  - [（四）线段树](#四线段树)
    - [1.单点更改，区间查询](#1单点更改区间查询-1)
    - [2.区间更改，区间查询](#2区间更改区间查询)
  - [（五）主席树（区间第k小数模板）](#五主席树区间第k小数模板)
  - [（六）树链剖分](#六树链剖分)
  - [（七）单调栈和单调队列](#七单调栈和单调队列)
  - [（八）基础莫队](#八基础莫队)
  - [（九）点分治](#九点分治)
- [四、字符串](#四字符串)
  - [（一）Kmp算法](#一kmp算法)
  - [（二）字典树](#二字典树)
  - [（三）字符串hash](#三字符串hash)
- [五、STL](#五stl)
  - [1.vector](#1vector)
  - [2.priority\_queue优先队列（默认为大根堆）](#2priority_queue优先队列默认为大根堆)
  - [3.set（二叉搜索树）](#3set二叉搜索树)
  - [4.map](#4map)
  - [5.pair](#5pair)
  - [6.Algorithm中常用算法：](#6algorithm中常用算法)
- [六、动态规划](#六动态规划)
  - [单调队列优化的背包：](#单调队列优化的背包)
- [七、其他](#七其他)
  - [（一）排序](#一排序)
    - [1.快速排序](#1快速排序)
    - [2.归并排序](#2归并排序)
    - [3.归并排序求逆序对](#3归并排序求逆序对)
  - [（二）二分](#二二分)
    - [1.整数二分](#1整数二分)
    - [2.浮点数二分](#2浮点数二分)
  - [（三）快速幂和龟速乘](#三快速幂和龟速乘)
  - [（四）快读](#四快读)
  - [（五）高精度](#五高精度)
    - [1.大数相加：](#1大数相加)
    - [2.高精度减：](#2高精度减)
    - [3.高精度除低精度：](#3高精度除低精度)
    - [4.高精度乘低精度](#4高精度乘低精度)
    - [5.高精度乘高精度](#5高精度乘高精度)
- [八、Java高精度](#八java高精度)
  - [（一）java参考代码：](#一java参考代码)
  - [（二）Java快速读入输出模板](#二java快速读入输出模板)
- [九、计算几何](#九计算几何)
  - [（一）基本模板：](#一基本模板)
  - [（二）求半平面交](#二求半平面交)
    - [1.点向式求半平面交](#1点向式求半平面交)
    - [2.两点式求半平面交一](#2两点式求半平面交一)
    - [3.两点式求半平面交模板二](#3两点式求半平面交模板二)
  - [（三）模拟退火求最小球覆盖](#三模拟退火求最小球覆盖)

## 一、图论

### （一）链式前向星

```cpp
1.对于存在点权的，可以创建虚拟原点。
struct edge{
	int ne,v,w;
}e[N];
int h[N],idx;
//存边
void add(int a,int b,int w){
	e[idx].v = b;
	e[idx].ne = h[a];
	e[idx].w = w;
	h[a] = idx++;
}
注意初始化：memset(h,-1,sizeof(h));
12345678910111213
```

### （二）最短路

#### 1.[Dijkstra算法](https://so.csdn.net/so/search?q=Dijkstra%E7%AE%97%E6%B3%95&spm=1001.2101.3001.7020)：O(mlogn)

```cpp
void dij(int x){
    memset(d,0x3f,sizeof d);
    d[x] = 0;
    int i;
    priority_queue<PII,vector<PII>,greater<PII> > q;
    q.push({d[x],x});
    while(!q.empty()){
        PII t = q.top();q.pop();
//取出队列中当前距离最小的点
        int x = t.second;
        if(vis[x])  continue;
        vis[x] = 1;
        for(i = h[x];i!=-1;i = e[i].ne){
            int v = e[i].v;
            int w = e[i].w;
//通过该点来更新距离
            if(d[v] > d[x]+w){
                d[v] = d[x] + w;
                q.push({d[v],v});
            }
        }
    }
}
1234567891011121314151617181920212223
```

#### 2.bellman\_ford:O(nm)

```cpp
struct Node{
    int a,b,w;
}e[N];//存图方式
//求从x号点到n号点最多经过k条边的最短距离
void bellman_ford(int x,int k){
    int i,j;
    memset(d,0x3f,sizeof d);
    d[x] = 0;
    for(i = 1;i<=k;i++){
        //利用上一次更新的距离求 
        memcpy(lastd,d,sizeof d);
        for(j = 1;j<=m;j++){
            int a = e[j].a;
            int b = e[j].b;
            int w = e[j].w;
        //    cout<<a<<" "<<b<<" "<<w<<endl;
            if(lastd[a]+w<d[b]){
                d[b] = lastd[a] + w;
            }
        }
    }
    if(d[n] > inf/2){//由于存在负边
        cout<<"impossible"<<endl;
    }else{
        cout<<d[n]<<endl;
    }
}
123456789101112131415161718192021222324252627
```

#### 3.Floyed算法：O(n^3)

```cpp
//可以处理负权，但不能有负权回路
int d[N][N];//d[i][j]表示从点i到点j的最短路
int n,m;
void floyd(){
    int i,j,k;
    for(k = 1;k<=n;k++)
		for(i = 1;i<=n;i++)
			for(j = 1;j<=n;j++)
				d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
}
int main(){
    int i,j,k; cin>>n>>m>>k;
    memset(d,0x3f,sizeof d);
    for(i = 1;i<=n;i++) d[i][i] = 0;
    for(i = 1;i<=m;i++){
        int a,b,c; cin>>a>>b>>c;
        d[a][b] = min(d[a][b],c);//防止有重边
    }
    floyd();
    for(i = 1;i<=k;i++){
        int a,b;
        cin>>a>>b;
        if(d[a][b] > inf/2){
            cout<<"impossible"<<endl;
        }else
            cout<<d[a][b]<<endl;
    }
    return 0;
}
 
123456789101112131415161718192021222324252627282930
```

#### 4.Spfa求最短路：边权可能是负值，但不存在负权回路

1.  队首x出队
2.  遍历所有以队首为起点的有向边(x,i)，  
    若d\[x\]+w(x,i)<d\[i\]，则更新d\[i\]
3.  如果点i不在队列中，则i入队
4.  若队列为空，跳出循环；否则执行1

```cpp
void spfa(int x){
    int i,j;
    memset(d,0x3f,sizeof d);
    d[x] = 0;
    queue<int> q;
    q.push(x);vis[x] = 1;//在队列中标记为1
    while(!q.empty()){
        int x = q.front();
        q.pop();
        vis[x] = 0;//出队列标记为0
        for(i = h[x];i!=-1;i = e[i].ne){
            int v = e[i].v;
            int w = e[i].w;
            if(d[x] + w < d[v]){
                d[v] = d[x]+w;
                if(vis[v] == 0){
                    //如果不在队列中加入队列
                    q.push(v);
					vis[v] = 1;
                }
            }
        }
    }
}
123456789101112131415161718192021222324
```

#### 5.Spfa判断负环:O(m),最坏O(nm)

```cpp
1.跟负环有关的题最好加虚拟原点，而且不要忘了多开数组
2.spfa判负环的玄学优化：①将队列改成栈②虚拟原点逆顺序建边(针对数据)③提前结束判断条件，比如：更新的次数超过一半点数就算有负环。
//cnt[]记录当前更新的次数
int cnt[N],d[N],vis[N];
//存在负环返回true
bool spfa(){
    int i,j;
    queue<int> q;
    //构建一个顶点到其余各顶点的距离为0 
    for(i = 1;i<=n;i++)
        add(0,i,0);
    memset(d,0x3f,sizeof d);memset(vis,0,sizeof vis);
    memset(cnt,0,sizeof cnt);
    d[0] = 0;
    q.push(0);vis[0] = 1;
    while(q.size()){
        int x = q.front();    q.pop();
        vis[x] = 0;//出队列标记为0
        for(i = h[x];i!=-1;i = e[i].ne){
            int v = e[i].v;
            int w = e[i].w;
            if(d[x] + w < d[v]){
                d[v] = d[x]+w; cnt[v] ++ ;
                //如果更新次数超过n次则存在负环
				//
                if(cnt[v]>n+1)    return true;
                if(vis[v] == 0){
                    //如果不在队列中加入队列
                    q.push(v);
                    vis[v] = 1;
                }
            }
        }
    }
    return false;
}
 
12345678910111213141516171819202122232425262728293031323334353637
```

#### 6.Dijkstra算法：朴素版

```cpp
int dij(int x){
    int i,j;
    memset(d,0x3f,sizeof d);
    d[x] = 0;
    for(j = 1;j<=n;j++){
        int t = 0;
        for(i = 1;i<=n;i++)
            //找到当前距离最小的点
            if(d[i]<d[t] && vis[i] == 0)
                t = i;
        vis[t] = 1;
        for(i = 1;i<=n;i++)
            if(g[t][i] + d[t] < d[i])
                d[i] = g[t][i] + d[t];
    }
    return d[n];
} 
1234567891011121314151617
```

### （三）[最小生成树](https://so.csdn.net/so/search?q=%E6%9C%80%E5%B0%8F%E7%94%9F%E6%88%90%E6%A0%91&spm=1001.2101.3001.7020)

#### 1.Prim算法：O(n^2)，用于稠密图，邻接矩阵

```cpp
bool prim(int x){
    int i,j;
    //初始化距离
    memset(d,0x3f,sizeof d);
    for(i = 1;i<=n;i++)
        d[i] = min(d[i],g[x][i]);//防止重边
    d[x] = 0;vis[x] = 1;//加入集合
    for(i = 1;i<n;i++){
        //执行n-1次循环
        //选出当前最小的边
        int t = -1;
        for(j = 1;j<=n;j++)
            if((t == -1 || d[j]<d[t] ) && vis[j] == 0)
                t = j;
        if(d[t] == inf) return false;
        vis[t] = 1;//加入集合
        ans+=d[t];//求最小生成树
        //更新操作
        for(j = 1;j<=n;j++)
            d[j] = min(d[j],g[t][j]);
    }
    return true;
}
1234567891011121314151617181920212223
```

#### 2.Prim算法：O(n^2)，[邻接表](https://so.csdn.net/so/search?q=%E9%82%BB%E6%8E%A5%E8%A1%A8&spm=1001.2101.3001.7020)

```cpp
bool prim(int x){
	int i,j; 
	memset(d,0x3f,sizeof(d));
	for(i = h[x];i!=-1;i = e[i].ne){
		int v = e[i].v,w = e[i].w;
		d[v] = min(d[v],w);//防止有重边的存在 
	}
	vis[x] = 1;//将x顶点加入集合 
	//进行n-1次循环，找到其余的n-1个点 
	for(i = 1;i<N;i++){
		//找到当前里集合最近的边
		int minv = -1,minw = inf;
		for(j = 1;j<=N;j++)
			if(vis[j] == 0 && d[j]<minw){
				minw = d[j];	minv = j;
			}
		//如果没有距离最小的边，则返回false 
		if(minv==-1)	return false;
		vis[minv] = 1;//加入集合 	ans += minw;
		//进行距离的更新
		for(j  = h[minv];j!=-1;j = e[j].ne){
			int v = e[j].v,w = e[j].w;
			d[v] = min(w,d[v]);
		}
	}
	return true; 
}
123456789101112131415161718192021222324252627
```

#### 3.Kruskal算法：O(mlogm)

```cpp
存储方式：
struct edge{
	int a,b,w;
}e[NN];
bool cmp(edge a,edge b){
	return a.w<b.w;
}
bool kruskal(){
	int i,num =1;
	//初始化并查集 
	for(i =1;i<=N;i++)
		f[i] = i;
	//对边进行排序 
	sort(e+1,e+M+1,cmp);
	for(i = 1;i<=M;i++){
		int a = e[i].a,b =e[i].b;
		if(find(a)!=find(b)){
			unio(a,b);
			//得到最小生成树的总权值 
			ans+=e[i].w;
			num++;
		}
		//如果找到N个点，则退出程序 
		if(num == N)
			return true;
	}
	return false;
} 
12345678910111213141516171819202122232425262728
```

### （四）二分图

#### 1.[匈牙利算法](https://so.csdn.net/so/search?q=%E5%8C%88%E7%89%99%E5%88%A9%E7%AE%97%E6%B3%95&spm=1001.2101.3001.7020)：O(nm)

```cpp
int main(){
	for(i = 1;i<=n1;i++){
		memset(vis,0,sizeof vis);
		//如果匹配成功，则匹配总数+1 
		if(find(i))ans++;
	}
	printf("%d",ans);
	return 0;
}

//对于第x个，能够匹配返回true，不能匹配返回false 
bool find(int x){
	for(int i = h[x];i!=-1;i = e[i].ne){
		int v = e[i].v;
		//如果曾经查找过第v个点，但是没有成功 
		if(vis[v] == 0){
			vis[v] = 1;
			//第v个没有匹配或者第v个的匹配对象可以匹配成功 
			if(match[v] == 0 || find(match[v])){
				match[v] = x;	return true;
			}
		}
	}
	return false;
} 
12345678910111213141516171819202122232425
```

#### 2.KM()算法,求二分图的带权最大匹配，O(n^3)

```cpp
using namespace std;
typedef long long ll;
typedef pair<ll,ll> PII;
const int N = 605;
const int inf = 0x3f3f3f3f;
PII a[N];
ll n,b[N],c[N];
ll w[N][N], lx[N],ly[N];
ll linker[N], slack[N];
bool visy[N];
ll pre[N];
void bfs(ll k){
	int i,j;
    ll x,y = 0,yy = 0,delta;
    memset(pre,0,sizeof(pre));
    for(i =1;i<=n;i++) slack[i] = inf;
    linker[y] = k;
    while(1){
        x = linker[y];delta = inf;visy[y] = true;
        for(i=1;i<=n;i++){
            if(!visy[i]){
                if(slack[i] > lx[x] + ly[i] - w[x][i] ){
                    slack[i] = lx[x] + ly[i] - w[x][i];
                    pre[i] = y;
                }
                if(slack[i] < delta) delta = slack[i], yy = i;
            }
        }
        for(i = 0;i <= n;i++){
            if(visy[i]) lx[linker[i]] -= delta , ly[i] += delta;
            else slack[i] -= delta;
        }
        y = yy ;
        if(linker[y] == -1) break;
    }
    while(y) linker[y] = linker[pre[y]], y = pre[y];
}
ll KM(){
	int i,j;
    memset(lx,0,sizeof(lx));
    memset(ly,0,sizeof(ly));
    memset(linker,-1,sizeof(linker));
    for(i = 1;i<=n;i++){
        memset(visy,false, sizeof(visy));
        bfs(i);
    }
    ll res = 0 ;
    for(i = 1;i<=n;i++){
        if(linker[i]!=-1){
            res += w[linker[i]][i];
        }
    }
    return res;
}
int main(){
	int i,j;
	while(cin>>n){
		for(i = 1;i<=n;i++){
			for(j = 1;j<=n;j++){
				scanf("%d",&w[i][j]);
			}
		}
		cout<<KM()<<endl;
	}
	return 0;
}
123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566
```

### （五）差分约束

解题步骤：

1.  先将每个不等式xi<=xj+ck，转化成一条从点j到点i，长度为ck的一条边。
2.  找一个超级源点，使得该源点一定可以遍历到所有边。
3.  从源点求一遍单源最短路  
    结果一：如果存在负环，则原不等式组一定无解  
    结果二：如果没有负环，则d\[i\]就是原不等式组的一个可行解  
    对于解得最大值和最小值如何求解：

+   当求解得最大值得时候，则应该将所有条件转化为：xi<=xj+ck，然后求最短路就是解得最大值。
+   当求解得最小值得时候，则应该将所有条件转化为：xi>=xj+ck，然后求最长路就是解得最小值。

### （六）Lca算法

#### 1.树上倍增法O(nlogn)

```cpp
const int N = 40005;
const int M = 2*N;
int f[N][20];//f[i][k]表示节点i向上走2^k步的节点
//注意数组一定要比depth多开一点 
int n,m;
int root; 
struct edge{
    int v,w,ne;
}e[M];
int h[N],idx,vis[N];
int d[N];//每个节点的深度
int depth = (int)log(N)/log(2) + 1;
void add(int a,int b){
    e[idx].v = b;   e[idx].ne = h[a];   h[a] = idx++;
}
//如果从i开始跳2^k步会跳出根节点，则f[i][k] = 0,d[0] = 0;
//预处理每个f[i][j]和d[i];
void bfs(int root){
    int i,j;
    queue<int> q;q.push(root);
    vis[root] = 1; d[root] = 1;//根节点深度为1
    while(!q.empty()){
        int x = q.front();q.pop();
        for(i = h[x];i!=-1;i=e[i].ne){
            int v = e[i].v;
            if(vis[v])  continue;
            vis[v] = 1;q.push(v);
            d[v] = d[x] + 1;f[v][0] = x;//向上走一步
            //更新数组f
            for(j = 1;j<=depth;j++)
                f[v][j] = f[f[v][j-1]][j-1];
        }
    }
}
//返回x和y的最近公共祖先
int lca(int x,int y){
    int i,j;
    //a的深度>b的深度
    if(d[y]>d[x])   swap(x,y);
    //先将两个节点调整到同一深度
    for(i = depth;i>=0;i--){
        //如果跳出的情况，d[0]=0肯定不成立
        if(d[f[x][i]] >= d[y])  x = f[x][i];
    }
    //如果相等直接跳出
    if(x == y)  return x;
    //将x和y一起跳
    for(i = depth;i>=0;i--){
        if(f[x][i] != f[y][i]){
            x = f[x][i];
            y = f[y][i];
        }
    }
    //则此时x,y只差一步就汇合了
    return f[x][0];
}
int main(){
    int i,j;
    memset(h,-1,sizeof h);
    cin>>n;
    for(i = 1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        if(b == -1) root = a;
        else add(a,b),add(b,a);
    }
    //bfs()一遍，进行预处理f[][],求depth[];
    bfs(root);
    cin>>m;
    for(i = 1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        cout<<lca(a,b);
    }
    return 0;
}
12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970717273747576
```

#### 2.LCA的Tarjan算法0(n+m)

```cpp
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
const int N = 10005;
const int M = 40005;
int n,m;
struct Node{
    int v,ne,w;
}e[M];
int h[N],idx,d[N],vis[N],f[N];
//记录点的三种状态
//访问完毕并且已经回溯的标记2，访问完为回溯的标记为1
int st[N];
int dis[M],lca[M];//dis[i]表示第i次查询两点之间的最短距离
//lca[i]表示第i次查询两点的最近公共祖先
vector<PII> que[N];

void add(int a,int b,int c){
    e[idx].v = b;
    e[idx].ne = h[a];
    e[idx].w =c ;
    h[a] = idx++;
}
int find(int x){
    if(f[x] != x)   f[x] = find(f[x]);
    return f[x];
}
void merge(int x,int y){
    x = find(x);
    y = find(y);
    f[y] = x;
}
void tarjan(int x){
    int i,j;
    st[x] = 1;
    for(i = h[x];i!=-1;i = e[i].ne){
        int v = e[i].v;
        if(st[v]!=0)    continue;
        d[v] = d[x] + e[i].w;
        tarjan(v);
        //v回溯后将v合并到x中
        merge(x,v);
    }
    //处理每个与x相关的查询
    for(i = 0;i<que[x].size();i++){
        int y = que[x][i].first;
        int id = que[x][i].second;
        //如果y已经回溯结束
        if(st[y] == 2){
            //记录第i个查询的最近公共祖先
            lca[id] = find(y);
            //记录第i个查询两点之间的最近距离
            dis[id] = d[x]+d[y]-2*d[lca[id]];
        }
    }
    //开始回溯将状态标记为2
    st[x] = 2;
}
int main(){
    int i,j;
    cin>>n>>m;//点数和询问
    memset(h,-1,sizeof h);
    for(i = 1;i<=n;i++) f[i] = i;
    for(i = 1;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        add(a,b,c);
        add(b,a,c);
    }
    for(i = 1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        que[a].push_back({b,i});
        que[b].push_back({a,i});
    }
    tarjan(1);
    for(i = 1;i<=m;i++){
        cout<<lca[i]<<" "<<dis[i]<<endl;
    }
    return 0;
}
123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081
```

### （七）连通性

#### 1.有向图的强连通分量（SCC）：Tarjan算法O(n+m)

```cpp
int stamp;//时间戳
int scc_cnt;//强连通分量的个数
int dfn[N],low[N];
//dfn[i]表示点i的时间戳，low[i]表示点i所在的强连通分量中时间戳的最小值
int stk[N],in_s[N];//stk[i]表示栈，in_s[N]表示是否在栈中
int top;
int id[N];//点i所位于的强连通分量的编号
int siz[N];//size[i]强连通分量编号为i的点的个数
void add(int a,int b){
    e[idx].v = b;
    e[idx].ne = h[a];
    h[a] = idx++;
}
void add2(int a,int b){
    e2[idx2].v = b;
    e2[idx2].ne = h2[a];
    h2[a] = idx2++;
}
void tarjan(int u){
    int i,j;
    dfn[u] = low[u] = ++stamp;
    stk[++top] = u;
    in_s[u] = 1;
    for(i = h[u];i!=-1;i = e[i].ne){
        int v = e[i].v;
        //如果之前没有访问过
        if(dfn[v] == 0){
            tarjan(v);
            low[u] = min(low[u],low[v]);
        }else if(in_s[v]){
            //如果点v在栈中
            low[u] = min(low[u],dfn[v]);
        }
    }
    if(dfn[u] == low[u]){
        ++ scc_cnt;//强连通分量的个数加1
        int y;
        do{
            y = stk[top--];//出栈
            in_s[y] = 0;
            id[y] = scc_cnt;
            siz[scc_cnt]++;
        }while(y != u);
    }
}
int main(){
    int i,j;
    cin>>n>>m;
    memset(h,-1,sizeof h);
    for(i = 1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        add(a,b);
    }
    for(i = 1;i<=n;i++){
        if(dfn[i] == 0){
            tarjan(i);
        }
    }
    unordered_set<ll> set;
    //进行缩点,缩点的过程要给边判重
    for(i = 1;i<=n;i++){
        for(j = h[i];j !=-1;j = e[j].ne){
            int v = e[j].v;
            if(id[i] != id[v]){
                ll hash = (ll)id[v]*100000+id[i];
                if(set.find(hash) != set.end())   continue;
                set.insert(hash);
                add2(id[i],id[v]);
            }
        }
    }
    return 0;
}
1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374
```

#### 2.无向图的边双连通分量：E-DCC

```cpp
int dfn[N],low[N],timestamp;
bool bridge[N];//如果是桥，边的下标标记为true
int id[N],dcc_cnt;
int stk[N],top;//栈
//求E-DCC边双连通分量
//last为父边
void tarjan(int x,int last){
    int i,j;
    dfn[x] = low[x] = ++timestamp;
    stk[++top] = x;
    for(i = h[x];i!=-1;i = e[i].ne){
        int v = e[i].v;
        if(dfn[v] == 0){
            tarjan(v,i);
            low[x] = min(low[x],low[v]);
            if(dfn[x] < low[v]) //判断这条边是否是桥
                bridge[i] = bridge[i ^ 1] = true;
        }else if(i != (last^1)){ //如果不是反向边
            low[x] = min(low[x],dfn[v]);
        }
    }
    if(dfn[x] == low[x]){
        dcc_cnt++; int v;
        do{
            v = stk[top--];
            id[v] = dcc_cnt;
        }while(v != x);
    }
}
int main(){
    int i,j; cin>>n>>m; memset(h,-1,sizeof h);
    for(i = 1;i<=m;i++){
        int a,b; cin>>a>>b; add(a,b);    add(b,a);
    }
    //对于连通图不用循环遍历
    tarjan(1,-1);
    //缩点重新建边
    for(i = 1;i<=n;i++){
        for(j = h[i];j!=-1;j=e[j].ne){
            int v = e[j].v;
            if(bridge[j]) //如果边j是桥
                add1(id[i],id[v]); //建边
        }
    }
    return 0;
}
12345678910111213141516171819202122232425262728293031323334353637383940414243444546
```

#### 3.求删除割点之后连通块的数目

```cpp
int dfn[N],timestamp,low[N];
int cut[N];//记录是否是割点
int ans= 0;int root;
void tarjan(int x){
    int i,j; int cnt = 0;//记录x下有几个连通块
    low[x] = dfn[x] = ++timestamp;
    for(i = h[x];i!=-1;i = e[i].ne){
        int v = e[i].v;
        if(dfn[v] == 0){
            tarjan(v);
            low[x] = min(low[x],low[v]);
            if(low[v] >= dfn[x]){ //割点判断条件
                cnt++;
      //1.根节点是割点，且子节点数大于等于2； 
      //2.非根节点是割点，且子节点中没有返祖边；
                if(x != root || cnt>1)  cut[x] = true;
            }
        }else		low[x] = min(low[x],dfn[v]);
    }
  // 如果u不是根节点 再把u的父节点的连通块加上
    if(x != root)    cnt++;
    ans = max(cnt,ans);//取最大值
}
int main(){
    int i,j;
    while(cin>>n>>m,n!=0 || m!=0){
        memset(h,-1,sizeof h);
        idx=0;timestamp = 0;ans = 0;
        for(i = 1;i<=m;i++){
            int a,b;cin>>a>>b; add(a,b);    add(b,a);
   	     }
        memset(dfn,0,sizeof dfn);
        int res = 0;
        for(root = 1;root<=n;root++){
            if(dfn[root] == 0){
                res++; tarjan(root);
            }
        }
        //求删除图中的一个点使得图中的连通块数目最大，并求出这个最大值
        cout<<res+ans-1<<endl;
    }
    return 0;
}
12345678910111213141516171819202122232425262728293031323334353637383940414243
```

#### 4.无向图的点双连通分量：V-DCC

```cpp
int low[N],dfn[N],timestamp;
int stk[N],top;int dcc_cnt,root;
bool cut[N];//记录是不是割点
vector<int> dcc[N];//dcc[i]存放编号为i的v-DCC中的所有节点
void tarjan(int x){
    int i,j;
    dfn[x] = low[x] = ++timestamp; stk[++top] = x;
    //孤立点
    if(x == root && h[x] == -1){
        dcc[++dcc_cnt].push_back(x);
        return;
    }
    //满足条件的子节点的数量
    int cnt = 0;
    for(i = h[x];i!=-1;i = e[i].ne){
        int v = e[i].v;
        if(dfn[v] == 0){
            tarjan(v);
            low[x] = min(low[x],low[v]);
            if(low[v] >= dfn[x]){
                cnt++;
                if(x != root || cnt > 1)    cut[x] = true;
                dcc_cnt++;//双连通分量个数+1
                int y;
                do{
                    y = stk[top--];
                    dcc[dcc_cnt].push_back(y);
                }while(y!=v);//注意y!=v
                //割点也要放进去
                dcc[dcc_cnt].push_back(x);
            }
        }else
            low[x] = min(low[x],dfn[v]);
    }
}
int main(){
    int i,j;
    while(cin>>n>>m){
        for(i = 1;i<=dcc_cnt;i++)   dcc[i].clear();
        memset(h,-1,sizeof h);
        memset(dfn,0,sizeof dfn);
        memset(cut,false,sizeof cut);
        idx = top = dcc_cnt = timestamp =  0;
//进行建边省略
        for(root = 1;root<=n;root++){
            if(dfn[root] == 0)
                tarjan(root);
        }
  //进行缩点建边,把每一个dcc和割点都看做一个点
        for(i = 1;i<=dcc_cnt;i++){
//cnt代表割点的数量 有多少个割点那么这dcc就有多少度
            int cnt = 0;
            for(j = 0;j<dcc[i].size();j++)
                if(cut[dcc[i][j]])  cnt++;
        }
    }    
    return 0;
} 
12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758
```

### （八）网络流

#### 1.最大流EK()算法

```cpp
int n,m,s,t;
struct Node{
    int v,ne,f;//f表示流量
}e[N];
int h[N],idx,vis[N],d[N];//d[i]表示
int pre[N];//pre[i]记录点i是从哪一条边转移过来的

//下标为i的边的反向边为i^1
void add(int a,int b,int c){
    //正向边的容量为c，反向边的容量为0
    e[idx].v = b,e[idx].f = c,e[idx].ne = h[a],h[a] = idx++;
    e[idx].v = a,e[idx].f = 0,e[idx].ne = h[b],h[b] = idx++;
}

//寻找增广路径
bool bfs(){
    int i,j;
    memset(vis,0,sizeof vis);
    queue<int> q;
    q.push(s);
    d[s] = inf;vis[s] = 1;
    while(!q.empty()){
        int x = q.front();q.pop();
        for(i = h[x];i != -1;i = e[i].ne){
            int v = e[i].v;
            //如果该点没有访问过，并且该边的容量大于0
            if(vis[v] == 0 && e[i].f>0){
                vis[v] = 1;
                //记录到达点v的最小边权
                d[v] = min(e[i].f,d[x]);
                //记录从哪条边过来的
                pre[v] = i;
                q.push(v);
                if(v == t)  return true;
            }
        }
    }
    return false;
}

//EK算法
int EK(){
    int i,j;
    int ans = 0;
    while(bfs()){
        //当存在增广路径的时候
        //正向边-=d[t],反向边+=d[t];
        ans+=d[t];
        for(i=t;i!=s;i=e[pre[i]^1].v){
            e[pre[i]].f -= d[t];
            e[pre[i]^1].f += d[t];
        }
    }
    return ans;
}

int main(){
    int i,j;
    memset(h,-1,sizeof h);
    cin>>n>>m>>s>>t;
    for(i = 1;i<=m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        add(a,b,c);
    }
    //求最大流
    cout<<EK()<<endl;
    return 0;
} 
123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869
```

#### 2.最大流Dinic()

```cpp
int n,m,s,t;
struct Node{
    int v,ne,f;
}e[N];
int h[N],idx;
int dis[N],vis[N];
//dis[i]表示点i到源点的距离，用于记录分层图信息
int cur[N];
// cur[a]表示节点a在dfs搜索中第一次开始搜索的边的下标，也称当前弧，用于优化dfs速度
//构建残留网络,正向边为源网络的容量-流量，反向边为原网络的流量
void add(int a,int b,int c){
    e[idx].v = b,e[idx].ne = h[a],e[idx].f = c,h[a] = idx++;
    e[idx].v = a,e[idx].ne = h[b],e[idx].f = 0,h[b] = idx++;
}
//构建分层图
bool bfs(){
    int i,j;
    //每个节点的层数初始化为-1
    memset(dis,-1,sizeof dis);
    queue<int> q;
    cur[s] = h[s];
    q.push(s);dis[s] = 0;//初始节点的深度为0
    while(!q.empty()){
        int x = q.front();q.pop();
        for(i = h[x];i!=-1;i = e[i].ne){
            int v = e[i].v;
            if(dis[v] == -1 && e[i].f>0){
                dis[v] = dis[x] + 1;
                //记录当前弧
                cur[v] = h[v];
                if(v == t)  return true;
                q.push(v);
            }
        }
    }    
    return false;
}
//当从原点流向x的最大流量为limit的时候，到达汇点的最大增量
int dfs(int x,int limit){
    int i,j;
    if(x == t)  return limit;//如果当前是汇，
    int flow = 0;//记录改点允许流过的流量
    for(i = cur[x];i!=-1 && flow<limit;i = e[i].ne){
        int v = e[i].v;
        cur[x] = i;//当前弧优化
        if(dis[v] == dis[x]+1 && e[i].f>0){
            int t = dfs(v,min(limit-flow,e[i].f));
            //如果从点v出发，允许流过的流量为0，则删除该点
            if(t == 0)  dis[v] = -1;
            flow += t;
            //处理边
            e[i].f -= t,e[i^1].f += t;
        }
    }
    return flow;
}
int dinic(){
    int ans = 0;
    //bfs()返回有没有增广路，如果有增广路则建立出分层图。
    while(bfs()){
        int res;
        while(res = dfs(s,inf))//搜索当前分层图中的增广路
            ans+=res;
    }
    return ans;
}

int main(){
    int i,j;
    cin>>n>>m>>s>>t;
    memset(h,-1,sizeof h);
    for(i = 1;i<=m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        add(a,b,c);
    }
    cout<<dinic()<<endl;
    return 0;
}
12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970717273747576777879
```

#### 3.最小费用流EK()

```cpp
int n,m,s,t;//s表示源点，t表示汇点
struct Node{
    int v,ne,f,w;
}e[N];
int h[M],idx,pre[M],incf[M],cost[M],vis[M];
//pre[i]表示从点i转移过来的边
//incf[i]表示从源点是到i路径中的最小容量
void add(int a,int b,int c,int d){
    e[idx].v = b,e[idx].ne = h[a],e[idx].f = c,e[idx].w = d,h[a] = idx++;
    e[idx].v = a,e[idx].ne = h[b],e[idx].f = 0,e[idx].w = -d,h[b] = idx++;
}
bool bfs(){
    int i,j;
    memset(vis,0,sizeof vis);
    memset(incf,0,sizeof incf);
    memset(cost,0x3f,sizeof cost);
    cost[s]=0,incf[s] = inf,vis[s] = 1;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int x = q.front();q.pop();
        vis[x] = 0;
        for(i = h[x];i!=-1;i = e[i].ne){
            int v = e[i].v;
            int w = e[i].w;
            if(cost[v] > cost[x]+w && e[i].f){
                cost[v] = cost[x] + w;
                pre[v] = i;
                incf[v] = min(e[i].f,incf[x]);
                if(vis[v] == 0){
                    vis[v] = 1;
                    q.push(v);
                }
            }
        }
    }
    return incf[t]>0;
}
int EK(){
    int i,j;
    int ans = 0;//返回最小费用
    while(bfs()){
        ans += cost[t]*incf[t];
        for(i=t;i!=s;i=e[pre[i]^1].v){
            e[pre[i]].f -= incf[t];
            e[pre[i]^1].f += incf[t];
        }
    }
    return ans;
}
int main(){
    int i,j;
    cin>>n>>m>>s>>t;
    memset(h,-1,sizeof h);
    for(i = 1;i<=m;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        add(a,b,c,d);
    }
    
    cout<<EK()<<endl;
    
    return 0;
}
12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364
```

### （九）其他

#### 1.拓扑排序：可以用来判断是否存在环

```cpp
queue<int> ans;//用于存放拓扑序
void topo(){
    int i,j;
    queue<int> q;
    for(i = 1;i<=n;i++)
        if(in[i] == 0)
            q.push(i);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        ans.push(x);
        for(i = h[x];i!=-1;i = e[i].ne){
            int v = e[i].v;
            in[v]--;
            if(in[v] ==0)
                q.push(v);
        }
    }
}
12345678910111213141516171819
```

#### 2.求树的重心

```cpp
int ans = inf;
//ans表示将重心删除后，剩余各个连通块中点数的最大值
//返回以u为跟的子树中点的数量
方法一：
int dfs(int u){
	vis[u] = 1;
	int size = 1,sum = 1; 
	for(int i = h[u];i!=-1;i = e[i].ne){
	    int v = e[i].v;
		if(vis[v] == 0){
			int a = dfs(e[i].v);
			size = max(a,size);
			sum +=a;
		}
	}
	size = max(size,n-sum);
	ans = min(ans,size);
	return sum;
}
//方法二：
int dfs(int x,int last){
    int i,j;
    int size = 0,sum = 1;//以该点为跟的连通块的最大值
    for(i = h[x];i!=-1;i = e[i].ne){
        int v = e[i].v;
        if(v == last)   continue;
        int t = dfs(v,x);
        size = max(size,t);
        sum+=t;
    }
    size = max(size,n-sum);
    ans = min(ans,size);
    return sum;
}
12345678910111213141516171819202122232425262728293031323334
```

#### 3.欧拉回路

```cpp
//找出欧拉回路，并将欧拉回路的每条边存入栈中
//type==1,为无向图，type==2为有向图
void dfs(int u){
    int &i = h[u],j;
    for(;i!=-1;){
        int v = e[i].v;
        if(vis[i]){
            i = e[i].ne;
            continue;
        }
        vis[i] = 1;//标记为走过
        int t = i;
        if(type == 1){
            //偶数边为正，奇数边为负
            vis[i^1] = 1;
            t = (t+2)/2;
            if(i%2 == 1)    t = -t;
        }else{
            t = t+1;
        }
        i = e[i].ne;
        dfs(v);
        stac.push(t);
    }
}
12345678910111213141516171819202122232425
```

## 二、数论

### （一）质数

#### 1.质数的判定

```cpp
bool is_prime(int n){
	if(n < 2)	return false;
	for(int i = 2;i<=n/i;i++)
		if(n%i==0)
			return false;
	return true;
}
1234567
```

#### 2.埃氏筛选

```cpp
void is_primes(int n){
judge[0] = 1,judge[1] = 1; 
	for(int i = 2;i<=n;i++){
		if(judge[i]==0){
			//如果i为质数，则进行筛选 
			cnt++;
			for(int j = i+i;j<=n;j+=i)
				judge[j] = 1;//如果是合数标记为1 
		}
	}
}
1234567891011
```

#### 3.线性筛选

```cpp
int cnt,judge[N],prime[N];
//judge[i]如果i是合数标记为1
void is_primes(int n){
	judge[0] = 1,judge[1] = 1; 
	for(int i = 2;i<=n;i++){
		if(judge[i]==0)prime[++cnt] = i; 
		for(int j = 1;j<=cnt&&prime[j]<=n/i;j++){
			judge[prime[j]*i] = 1;//如果是合数标记为1 
			if(i%prime[j] == 0)break;
		}
	}
}
123456789101112
```

#### 4.分解质因数

```cpp
void divide(int n){
	for(int i = 2;i<=n/i;i++){
		if(n%i==0){
			int t = 0;
			while(n % i == 0){
				n/=i;
				t++;
			}
			//输出分解出的因数和个数 
			printf("%d %d\n",i,t);
		}
	}
	//如果n大于1，则n为质数 
	if(n>1)	printf("%d 1\n",n);
}
123456789101112131415
```

#### 5.用素数分解质因数

```cpp
void div(int n){
    int i,j;
    for(i = 1;i<=n/prime[i];i++){
        int t = prime[i];
        if(n%t == 0){
            int num = 0;
            while(n%t == 0){
                n/=t;
                num++;
            }
            res[fcnt++] ={t,num};
        }
    }
    if(n>1)
        res[fcnt++] = {n,1};
}
12345678910111213141516
```

### （二）约数

#### 1.算数基本定理

**N=P1a1 P2a2 P3a3…Pnan**  
这里P1<P2<P3…<Pn均为质数，其中指数ai是正整数

#### 2.试除法求约数

```cpp
void divisors(int n){
	vector<int> v;
	for(int i = 1;i<=n/i;i++){
		if(n%i == 0){
			v.push_back(i);
			if(i*i != n)
				v.push_back(n/i);
		}
	}
	//按照从小到大的顺序输出它的所有约数 
	sort(v.begin(),v.end());
	for(int i = 0;i<v.size();i++)
		printf("%d ",v[i]);
}
1234567891011121314
```

#### 3.求约数的个数

N = （a1+1） \* （a2+1） \* （a3+1）…\* （an+1）

#### 4.求所有约数的和

N = (p10 + p11 +p12…+p1a1 ) \* (p20 +p21 +p22 +…+p2a2 ) \* … \* (pn0 +pn1 +…+pnan )

#### 5.欧几里得算法：求最大公约数

```cpp
int gcd(int a,int b){
	return b?gcd(b,a%b):a;
}
123
```

#### 6.欧拉函数

公式：φ(N) = N \* (1 - 1/p1) \* (1 - 1/p2) \* (1 - 1/p3) \* … \* (1 - 1/pn)

```cpp
//求1-n中与n互质的数的个数
int get_eular(int n){
	int ans = n;
	for(int i = 2;i<=n/i;i++){
		if(n%i == 0){
			while(n%i==0)
				n/=i;
			ans = ans/i*(i-1);
		}
	}
	if(n>1)
		ans = ans/n*(n-1);
	return ans;
}
1234567891011121314
```

#### 7.线性筛欧拉函数

```cpp
1.	如果i为质数，则φ(i) = i -1
2.	如果i%prime[j] ==0,则φ( i * prime[j] ) = φ(i) * prime[j]
3.	如果i%prime[j] != 0,则φ( i * prime[j] ) = (prime[j] - 1) * φ(i)
void get_euler(int x){
    int i,j;
    euler[1] = 1;
    for(i = 2;i<=x;i++){
        if(!judge[i]){
            prime[++cnt] = i;
            euler[i] = i-1;
        }
        
        for(j = 1;j<=cnt && prime[j]*i<=x;j++){
            judge[prime[j]*i] = true;
            if(i%prime[j] == 0){
                euler[i*prime[j]] = euler[i]*prime[j];
                break;
            }
            euler[i*prime[j]] = euler[i]*(prime[j]-1);
        }
    }
}
12345678910111213141516171819202122
```

#### 8.欧拉定理：若a与n互质，则：aφ（n）≡1(mod n)

#### 9.费马小定理：an-1≡ 1 (mod n)

#### 10.扩展欧几里得算法

```cpp
a*x+b*y=gcd(a,b)，求x和y：
ll exgcd(ll a,ll b,ll &x,ll &y){
    if(b == 0){
        x = 1,y = 0;
        return a;
    }
    ll d = exgcd(b,a%b,x,y);
    ll z = x;
    x = y;
    y = z-(a/b)*y;
    return d;
}
123456789101112
```

### （三）高斯消元

```cpp
const double eps = 1e-6;
int n;
double a[N][N];

int gauss(){
    int c, r;//c代表列col ，r代表row
    for (c = 0, r = 0; c < n; c ++ ){
        int t = r;
        // 先找到当前这一列，绝对值最大的一个数字所在的行号
        for (int i = r; i < n; i ++ )
            if (fabs(a[i][c]) > fabs(a[t][c]))
                t = i;
        if (fabs(a[t][c]) < eps) continue;
        // 如果当前这一列的最大数都是 0 ，那么所有数都是 0，就没必要去算了

        for (int i = c; i < n + 1; i ++ ) swap(a[t][i], a[r][i]);
        // 把当前第r行，换到最上面）去
        for (int i = n; i >= c; i -- ) a[r][i] /= a[r][c];
        for (int i = r + 1; i < n; i ++ )
            if (fabs(a[i][c]) > eps)
                for (int j = n; j >= c; j -- )
                // 从后往前，当前行的每个数字，都减去对应列 * 行首非0的数字
                    a[i][j] -= a[r][j] * a[i][c];
        r ++ ;//换下一行
    }
    //判断是无解还是无穷多解
    if (r < n){// 因为已经是阶梯型，所以 r ~ n-1 的值应该都为 0
        for (int i = r; i < n; i ++ )
            if (fabs(a[i][n]) > eps)//无解。
                return 2;
        return 1;// 否则， 0 = 0，就是r ~ n-1的方程都是多余方程
    }
    // 唯一解 
    for (int i = n-1;i>=0;i--)
        for (int j =i+1;j<n;j++)
            a[i][n] -= a[j][n] * a[i][j];

    return 0;
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i ++ )
        for (int j = 0; j < n + 1; j ++ )
            cin >> a[i][j];
    int t = gauss();
    if (t == 0)
        for (int i = 0; i < n; i ++ ) printf("%.2lf\n", a[i][n]);
    else if (t == 1) puts("无穷多组解");
    else puts("唯一解");
    return 0;
} 
12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152
```

### （四）求组合数

#### 1.Lucas定理求组合数

```cpp
int power(int a,int b,int mod){
    int res = 1;
    while(b){
        if(b%2 == 1)    res = (ll)res*a%mod;
        a = (ll)a*a%mod;
        b = b/2;
    }
    return res;
}
int C(int a,int b,int p){
    int i,j;
    if(b>a) return 0;
    int up = 1;
    int down = 1;
    for(i = 1,j=a;i<=b;i++,j--){
        up = (ll)up*j%p;//计算a*..*(a-b+1)
        down = (ll)down*i%p;//计算a！
    }
    return (ll)up*power(down,p-2,p)%p;
}
int Lucas(ll a,ll b,int p){
    if(a<p && b<p) return C(a,b,p);
    return (ll)C(a%p,b%p,p)*Lucas(a/p,b/p,p)%p;
}

int main(){
    int i,j;
    int T;
    cin>>T;
    while(T--){
        ll a,b;
        cin>>a>>b>>p;//Ca,b mod p
        cout<<Lucas(a,b,p)<<endl;
    }
    return 0;
}
123456789101112131415161718192021222324252627282930313233343536
```

#### 2.预处理求组合数

```cpp
#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
typedef long long ll;
const int mod = 1e9+7;
int n,m;
int fac[N];//fac[i]表示i的阶乘
int infac[N];//infac[i]表示i的阶乘的逆元

int power(int a,int b,int mod){
    int res = 1;
    while(b){
        if(b%2 == 1)    res = (ll)res*a%mod;
        a = (ll)a*a%mod;
        b = b/2;
    }
    return res;
}

//求Cn,m
int C(int n,int m,int mod){
    return (ll)fac[n]*infac[m]%mod*infac[n-m]%mod;
}

int main(){
    int i,j;
    int T;
    fac[0] = 1;
    infac[0] = 1;
    for(i = 1;i<=N-1;i++){
        fac[i] = (ll)fac[i-1]*i%mod;
        infac[i] = power(fac[i],mod-2,mod);
    }
    cin>>T;
    int ans;
    for(i = 1;i<=T;i++){
        cin>>n>>m;
        cout<<C(n,m,mod)<<endl;
    }
    return 0;
}
1234567891011121314151617181920212223242526272829303132333435363738394041
```

#### 3.不取模求组合数（高精度）

```cpp
int n,m;
int num[N];
int cnt,judge[N],prime[N];
//judge[i]如果i是合数标记为1
void is_primes(int n){
	judge[0] = 1,judge[1] = 1; 
	for(int i = 2;i<=n;i++){
		if(judge[i]==0)prime[++cnt] = i; 
		for(int j = 1;j<=cnt&&prime[j]<=n/i;j++){
			judge[prime[j]*i] = 1;//如果是合数标记为1 
			if(i%prime[j] == 0)break;
		}
	}
}
//对n!进行分解质因数
void sovle(int n,int flag){
    int i,j;
    for(i = 1;i<=cnt;i++){
        int t  = prime[i];
        int cn = 0;
        int res = t;
        while(res<=n){
            cn += n/res;
            res = res*t;
        }
        num[i] += cn*flag;
    }
}
vector<int> mul(vector<int> &A,int a){
	vector<int> C;
	int i,t = 0;//t表示进位
	for(i = 0;i<A.size();i++){
		t+=A[i]*a;
		C.push_back(t%10);
		t/=10;
	}
	while(t){
		C.push_back(t%10);
		t/=10;
	}
	while(C.back()==0 && C.size()>1){
	    C.pop_back();//去掉前导0  
	}
	return C;
}
//获得n!分解质因数后p的指数
int get(int n,int p){
    int res = 0;
    ll t = p;
    while(t<=n){
        res += n/t;
        t = t*p;
    }
    return res;
}
int main(){
    int i,j;
    int a,b;
    //输出组合数Ca,b
    cin>>a>>b;
    is_primes(N-1);
    //筛一遍素数
 //   sovle(a,1);
 //   sovle(b,-1);
//    sovle(a-b,-1);
    for(i = 1;i<=cnt;i++){
        num[i] = get(a,prime[i])-get(b,prime[i])-get(a-b,prime[i]);
    }
    vector<int> A;
    A.push_back(1);
    for(i = 1;i<=cnt;i++){
        int t = prime[i];
        for(j = 1;j<=num[i];j++){
        //    cout<<t<<" ";
            A = mul(A,t);
        }
    }
    for(i = A.size()-1;i>=0;i--)
		printf("%d",A[i]);
    return 0;
}
123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081
```

### （四）SG函数

题目大意：给定nn堆石子，两位玩家轮流操作，每次操作可以取走其中的一堆石子，然后放入两堆规模更小的石子（新堆规模可以为0，且两个新堆的石子总数可以大于取走的那堆石子数），最后无法进行操作的人视为失败。  
问如果两人都采用最优策略，先手是否必胜

```cpp
#include<bits/stdc++.h>
using namespace std;
const int N = 105;
int f[N];
int n,a[N];
int sg(int x){
    int i,j;
    if(f[x] != -1)  return f[x];
    unordered_set<int> se;
    //每一堆可以变成不大于原来那堆的任意大小的两堆
    for(i = 0;i<x;i++){
        for(j = 0;j<x;j++){
            //SG函数理论，多个独立局面的SG值，等于这些局面SG值的异或和。
            se.insert(sg(i)^sg(j));
        }
    }
    //找到最小的不能到达的数
    for(i = 0;;i++){
        if(se.count(i) == 0)    return f[x] = i;
    }
}
int main(){
    int i,j;
    cin>>n;
    int ans = 0;
    memset(f,-1,sizeof f);
    for(i = 1;i<=n;i++){
        cin>>a[i];
        ans = ans ^ sg(a[i]);
    }
    //如果ans不为0则先手必胜
    if(ans == 0)    cout<<"No"<<endl;
    else    cout<<"Yes"<<endl;
    return 0;
} 
1234567891011121314151617181920212223242526272829303132333435
```

### （五）矩阵快速幂：求斐波那契数列的第n项

```cpp
//矩阵乘法
void mul(int c[2][2],int a[2][2]){
    int i,j,k;
    int temp[2][2] = {0};
    for(i = 0;i<n;i++){
        for(j = 0;j<n;j++){
            for(k = 0;k<n;k++){
                temp[i][j] = (temp[i][j]+c[i][k]*a[k][j])%mod;
            }
        }
    }
    memcpy(c,temp,sizeof temp);
}
int powm(int b){
    int i,j,k;
    int res[2][2] = {{1,0},{0,1}};//单位矩阵
    int c[2] = {0};
    int x[2] = {0,1};
    int a[2][2] = {{0,1},{1,1}};
    while(b){
        if(b%2 == 1)    mul(res,a);
        mul(a,a);
        b/=2;
    }
    //x*res
    for(j=0;j<n;j++){
        for(k = 0;k<n;k++){
            c[j] = (c[j]+x[k]*res[k][j])%mod;
        }
    }
    return c[0];
}
int main(){
    int i,j;
    while(cin>>m,m!=-1){
        n = 2;
        cout<<powm(m)<<endl;
    }
    return 0;
123456789101112131415161718192021222324252627282930313233343536373839
```

### （六）常见公式

#### 1.卡特兰数

![在这里插入图片描述](https://img-blog.csdnimg.cn/20201227184401434.png)  
![在这里插入图片描述](https://img-blog.csdnimg.cn/20201227184419972.png)  
![在这里插入图片描述](https://img-blog.csdnimg.cn/20201227184454100.png)

#### 2.错排公式

假设有n个元素，n个位置，每个元素都有自己唯一的正确位置，问，所有元素都处在错误位置有多少可能？  
D(n)=(n-1)\*( D(n-1) + D(n-2) )，易得 D(1)=0 , D(2)=1。

#### 3.常用前n项和公式

![在这里插入图片描述](https://img-blog.csdnimg.cn/20201227181905245.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80NDYzMDY1Ng==,size_16,color_FFFFFF,t_70)

## 三、数据结构

### （一）堆

```cpp
void up(int k){ //up操作
	int a = k;
	while(a!=1 && h[a/2]>h[a]){
		swap(h[a/2],h[a]);
		a = a/2;
	}
}
void push(int x){
	h[++index] = x;
	up(index);
}
void down(int k){//down操作非递归
	int a = k;
	while(a*2<=index){
		int b;
		if(2*a+1<=index)
			b = h[2*a]<h[2*a+1]?2*a:2*a+1;
		else		b = 2*a;
		if(h[a]>h[b]){
			swap(h[a],h[b]);
			a = b;
		}
		Else		break;
	}
}
void down(int k){//down递归操作
	int a=k;
	if(2*k<=index && h[k]>h[2*k])	a = 2*k;
	if(2*k+1<=index && h[a]>h[2*k+1])	a = 2*k+1; 
	if(a!=k){
		swap(h[a],h[k]);
		down(a);
	}
}
void pop(int k){ //删除下标为k的元素 
	swap(h[1],h[index]);
	index--;
	down(k);
}
int top(){//获得堆顶元素	
	return h[1];	
} 
123456789101112131415161718192021222324252627282930313233343536373839404142
```

### （二）并查集

```cpp
const int N = 100005;
int f[N];
int cnt[N];//维护连通块中点的数量
int find(int x){
    if(f[x] != x)   f[x] = find(f[x]);
    return f[x];
}
void merge(int x,int y){
    x = find(x);
    y = find(y);
    if(x!=y){
        cnt[x] += cnt[y];
    }
    f[y]=x;//将y合并到x上
}
int main(){
    int i,j,n,m;
    cin>>n>>m;
    for(i = 1;i<=n;i++){
        f[i] = i;
        cnt[i] = 1;
    }
    for(i = 1;i<=m;i++){
        char c[4];int a,b;
        scanf("%s %d",c,&a);
        if(c[0] == 'C'){
            cin>>b;
            merge(a,b); //合并
        }else if(c[1] == '1'){
            cin>>b; //查询是否连通
            if(find(a) == find(b)) cout<<"Yes"<<endl;
            else    cout<<"No"<<endl;
        }else{
            //查询连通块的个数
            cout<<cnt[find(a)]<<endl;
        }
    }
    return 0;
}
123456789101112131415161718192021222324252627282930313233343536373839
```

### （三）树状数组

#### 1.单点更改，区间查询

```cpp
int n,m;
int c[N],a[N];
int lowbit(int x){
	return x & (-x);
}
void add(int x,int y){
	for(int i = x;i<=n;i+=lowbit(i))
		c[i] += y;
}
int ask(int x){
	int res = 0;
	for(int i = x;i>0;i -= lowbit(i))
		res += c[i];
	return res;
}
int main(){
	int i,j;
	cin>>n>>m;
	for(i = 1;i<=n;i++){
		scanf("%d ",&a[i]);
		add(i,a[i]);
	} 
	for(i = 1;i<=m;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		if(a == 1){	//更新操作
			add(b,c); 
		}else{	//区间查询操作 
			int t = ask(c) - ask(b-1);
			printf("%d\n",t);
		}
	}
	return 0;
} 
12345678910111213141516171819202122232425262728293031323334
```

#### 2.区间更改，单点查询

```cpp
int a[N];
int b[N],c[N];
int n,m;
int lowbit(int x){
    return x&(-x);
}
void add(int x,int y){
    int i,j;
    for(i = x;i<=n;i+=lowbit(i))
        c[i] += y;
}
int sum(int x){
    int i,res = 0;
    for(i = x;i>0;i-=lowbit(i))
        res += c[i];
    return res;
}
int main(){
    int i,j;
    ios::sync_with_stdio(0);
    cin>>n>>m;
    for(i = 1;i<=n;i++){
        cin>>a[i];
        b[i] = a[i]-a[i-1];
        add(i,b[i]);
    }
    for(i = 1;i<=m;i++){
        string s;
        cin>>s;
        if(s[0] == 'C'){
            int l,r,d;
            cin>>l>>r>>d;
            add(l,d);add(r+1,-d);
        }else{
            int t;
            cin>>t;
            cout<<sum(t)<<endl;
        }
    }
    return 0;
}
1234567891011121314151617181920212223242526272829303132333435363738394041
```

#### 3.区间更改，区间查询

```cpp
int n,m;
ll b[N],a[N],c1[N],c2[N];
int lowbit(int x){
    return x & (-x);
}
void add(ll x,ll y){
    for(int i = x;i<=n;i+=lowbit(i)){
        c1[i] += y;
        c2[i] += y*x;
    }
}
ll ask(ll x){
    ll i,res = 0;
    for(i = x;i>0;i-=lowbit(i))
        res += (x+1)*c1[i] - c2[i];
    return res;
}
int main(){
    int i,j;
    ios::sync_with_stdio(0);
    cin>>n>>m;
    for(i = 1;i<=n;i++){
        cin>>a[i];
        b[i] = a[i]-a[i-1];
        add(i,b[i]);
    }
    for(i = 1;i<=m;i++){
        string s;ll l,r,d;
        cin>>s;
        if(s[0] == 'C'){//区间修改
            cin>>l>>r>>d;
            add(l,d);
            add(r+1,-d);
        }else{//区间查询
            cin>>l>>r;
            cout<<ask(r)-ask(l-1)<<endl;
        }
    }
    return 0;
}
12345678910111213141516171819202122232425262728293031323334353637383940
```

#### 4.二维树状数组

```cpp
int lowbit(int x){
	return x&(-x);
}
void update(int x,int y,int v){
	int i,j;
	for(i = x;i<=n;i+=lowbit(i)){
		for(j = y;j<=n;j+=lowbit(j)){
			tr[i][j] += v;
		}
	}
}
int query(int x,int y){
	int i,j;
	int res = 0;
	for(i = x;i>0;i-=lowbit(i)){
		for(j = y;j>0;j-=lowbit(j)){
			res+=tr[i][j];
		}
	}
	return res;
}
123456789101112131415161718192021
```

### （四）线段树

#### 1.单点更改，区间查询

```cpp
struct Node{
	int l,r;//节点的左右区间 
	int sum;//区间的和 
}tr[4*N];
int n,m;
int a[N];
//利用子节点信息更新父节点信息 
void pushup(int u){
	tr[u].sum = tr[2*u+1].sum + tr[2*u].sum; 
}
//递归方式建树 
void build(int u,int l,int r){
	//u表示当前需要建立的结点，l为当前建立区间的左端点，r为右端点
	tr[u].l = l,tr[u].r = r;
	if(l == r){	//叶子节点 
		tr[u].sum = a[l];
	}else{
		int mid = l+r>>1;
		//左节点的区间是[l,mid],右节点的区间是[mid+1,r]; 
		build(u<<1,l,mid);	//递归构造左节点 
		build(u<<1|1,mid+1,r);	//递归构造右节点 
		pushup(u);	//更新父节点 
	} 
}
//u为结点下标，x为下标，v为要加上的值 
void update(int u,int x,int v){
	if(tr[u].l == tr[u].r){
		//找到叶子节点,更新原数组和线段树数组 
		tr[u].sum += v,a[l] += v;
	}else{
		int mid = tr[u].l + tr[u].r >> 1;
		if(x <= mid){
			//如果需要更新的节点在左子树区间 
			update(2*u,x,v);
		}else{
			update(2*u+1,x,v);
		}
		pushup(u);	//更新父节点的值 
	}
}
int query(int u,int l,int r){
	//[l,r]为待查询区间 
	if(tr[u].l >= l && tr[u].r <= r){
		return tr[u].sum;
	}else{
		int res = 0;
		int mid = tr[u].l + tr[u].r >>1;
		if(l<=mid){
			//如果左节点的区间和待查询区间有交集
			res += query(2*u,l,r); 
		}
		if(r>mid){
			//如果右节点区间和待查询区间有交集
			res += query(2*u+1,l,r); 
		}
		return res;
	}
}
int main(){
	int i,j;
	ios::sync_with_stdio(0);
	cin>>n>>m;
	for(i = 1;i<=n;i++)
		cin>>a[i];
	//建树
	build(1,1,n);
	for(i = 1;i<=m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		if(a == 1){
			//更新操作 
			update(1,b,c);
		}else{
			//查询操作
			cout<<query(1,b,c)<<endl;
		}
	}
	return 0;
 }
12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970717273747576777879
```

#### 2.区间更改，区间查询

```cpp
struct Node{
	int l,r;
	ll sum,add;
}tr[4*N];
ll a[N];
int n,m;

void pushup(int u){
	tr[u].sum = tr[u*2].sum + tr[2*u+1].sum; 
}

void build(int u,int l,int r){
	tr[u].l = l;tr[u].r = r;
	if(l == r){
		tr[u].sum = a[l];
		tr[u].add = 0;
	}else{
		int mid = l+r>>1; 
		build(2*u,l,mid);
		build(2*u+1,mid+1,r);
		pushup(u); 
	}
}

void pushdown(int u){
	tr[u*2].sum += tr[u].add*(tr[2*u].r-tr[2*u].l+1);
	tr[u*2+1].sum += tr[u].add*(tr[2*u+1].r-tr[2*u+1].l+1);
	tr[2*u].add += tr[u].add;
	tr[2*u+1].add += tr[u].add;
	tr[u].add = 0;//注意归0 
}

void update(int u,int l,int r,ll v){
	if(l<=tr[u].l &&tr[u].r<=r){
		tr[u].sum +=  v*(tr[u].r-tr[u].l + 1);
		tr[u].add += v;//懒惰标记 
	}else{
		pushdown(u);//每次区间分裂需要pushdown 
		int mid = tr[u].l + tr[u].r >> 1;
		if(l<=mid)
			update(u*2,l,r,v);
		if(r>mid)
			update(u*2+1,l,r,v);
		pushup(u);
	}
}

ll query(int u,int l,int r){
	if(l<=tr[u].l && tr[u].r<=r){
		return tr[u].sum;
	}else{
		pushdown(u);
		ll res = 0;
		int mid = tr[u].l + tr[u].r >> 1;
		if(l<=mid)
			res += query(u*2,l,r);
		if(r>mid)
			res += query(2*u+1,l,r);
		return res;
	} 
}


int main(){
	int i,j;
	ios::sync_with_stdio(0);
	cin>>n>>m;
	for(i=1;i<=n;i++)
		cin>>a[i];
	build(1,1,n);
	for(i = 1;i<=m;i++){
		int o,l,r;
		cin>>o>>l>>r;
		if(o == 1){
			ll d;
			cin>>d;
			update(1,l,r,d);
		}else{
			cout<<query(1,l,r)<<endl;
		}
	}
	return 0;
}
1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374757677787980818283
```

### （五）主席树（区间第k小数模板）

```cpp
#include<bits/stdc++.h>
using namespace std;

const int N = 200005;
const int M = 200005;
int n,m;
int a[N],idx;
vector<int> nums;//去重数组 
struct Node{
    int l,r;//左右子节点编号 
    int cnt; 
}tr[N*4+N*18];//开N*4+N*lgN个空间 
int root[N];//一共需要保存N个历史记录

int find(int x){
    int l = 0,r = nums.size()-1;
    while(l!=r){
        int mid = (l+r)/2;
        if(nums[mid] >= x)  r = mid;
        else    l = mid+1;
    }
    return l;
}

int build(int l,int r){//建树，cnt都为0
    int q = ++idx;
    if(l == r)  return q;
    int mid = (l+r)/2;
    tr[q].l = build(l,mid);
    tr[q].r = build(mid+1,r);
    return q;
}
int insert(int p,int l,int r,int x){
    int q = ++idx;
    tr[q] = tr[p];
    if(l == r){
        tr[q].cnt++;
        return q;
    }
    int mid = (l+r)/2;
    //应该更新哪一个值域区间
    if(x<=mid)
        tr[q].l = insert(tr[p].l,l,mid,x);
    else
        tr[q].r = insert(tr[p].r,mid+1,r,x);
    tr[q].cnt = tr[tr[q].l].cnt + tr[tr[q].r].cnt;
    return q;
}

int query(int q,int p,int l,int r,int k){
    if(l == r)  return r;
    //有多少个数落在值域为[l,mid]中 
    int cnt = tr[tr[q].l].cnt - tr[tr[p].l].cnt;
    int mid = (l+r)/2;
    if(k<=cnt)
        return query(tr[q].l,tr[p].l,l,mid,k);
    else
        return query(tr[q].r,tr[p].r,mid+1,r,k-cnt);
}

int main(){
    int i,j;
    cin>>n>>m;
    for(i = 1;i<=n;i++){
        cin>>a[i];
        nums.push_back(a[i]);
    }
    sort(nums.begin(),nums.end());
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    root[0] = build(0,nums.size()-1);//下标从0开始
    for(i = 1;i<=n;i++){
        root[i] = insert(root[i-1],0,nums.size()-1,find(a[i]));
        //建立可持久话线段树
    }
    for(i = 1;i<=m;i++){
        int l,r,k;
        cin>>l>>r>>k;
        cout<<nums[query(root[r],root[l-1],0,nums.size()-1,k)]<<endl;
    }
    
    return 0;
}
12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970717273747576777879808182
```

### （六）树链剖分

```cpp
int n,m;
int w[N];//节点的权值
struct Node{
    int v,ne;
}e[N*2];
int h[N],idx;
int siz[N],son[N],de[N],fa[N];
//siz[i]表示以i为跟的子树节点数
//son[i]表示点i的总儿子的节点
//de[i]表示节点i的深度
int id[N],top[N],cnt,pre[N];
//pre[i]表示dfs为i的对应节点的编号
//top[i]表示节点i的重链的定点
//id[i]表示节点i的dfs序，及在线段树中的标号
struct Nod{
    int l,r;
    ll add,sum;
}tr[N*4];
void add(int a,int b){
    e[idx].ne = h[a],e[idx].v = b,h[a] = idx++;
}
//预处理fa,siz,son
void dfs1(int u,int last,int deep){
    int i,j;
    fa[u] = last,de[u] = deep;
    siz[u] = 1;
    int t = -1;
    for(i = h[u];i!=-1;i = e[i].ne){
        int v = e[i].v;
        if(v == last)  continue;
        dfs1(v,u,deep+1);
        siz[u] += siz[v];
        //记录重儿子
        if(t == -1 || siz[t]<siz[v]){
            t = v;
        }
    }
    son[u] = t;
}
//将每个节点标号,t表示u的顶点
void dfs2(int u,int t){
    int i,j;
    id[u] = ++cnt;
    top[u] = t;
    pre[cnt] = u;
    if(son[u] == -1)    return;
    //先遍历重儿子
    dfs2(son[u],t);
    for(i = h[u];i!=-1;i = e[i].ne){
        int v = e[i].v;
        if(v == fa[u] || v == son[u])   continue;
        dfs2(v,v);
    }
}
//线段树
void pushup(int u){
    tr[u].sum = tr[u*2].sum + tr[u*2+1].sum;
}
void build(int u,int l,int r){
    tr[u].l = l,tr[u].r = r;
    if(l == r){
        tr[u].sum = w[pre[l]];
    }else{
        int mid = (l+r)/2;
        build(u*2,l,mid);
        build(u*2+1,mid+1,r);
        pushup(u);
    }
}
void pushdown(int u){
    int d = tr[u].add;
    tr[u*2].sum += (tr[u*2].r-tr[u*2].l+1)*d;
    tr[u*2+1].sum += (tr[u*2+1].r-tr[u*2+1].l+1)*d;
    tr[u*2].add += d;
    tr[u*2+1].add += d;
    tr[u].add = 0;
}
void update(int u,int l,int r,int d){
    if(l<=tr[u].l && tr[u].r<=r){
        tr[u].sum += (tr[u].r-tr[u].l+1)*d;
        tr[u].add += d;
    }else{
        pushdown(u);
        int mid = (tr[u].l+tr[u].r)/2;
        if(l<=mid)  update(u*2,l,r,d);
        if(r>mid)   update(u*2+1,l,r,d);
        pushup(u);
    }
}
ll query(int u,int l,int r){
    if(l<=tr[u].l && tr[u].r<=r){
        return tr[u].sum;
    }else{
        pushdown(u);
        int mid = (tr[u].l+tr[u].r)/2;
        ll res = 0;
        if(l<=mid)  res += query(u*2,l,r);
        if(r>mid)   res += query(u*2+1,l,r);
        return res;
    }
}
void update_path(int u,int v,int d){
    while(top[u] != top[v]){
        //跳顶部深度高的
        if(de[top[u]]<de[top[v]]) swap(u,v);
        update(1,id[top[u]],id[u],d);
        u = fa[top[u]];
    }
    if(de[u]>de[v]) swap(u,v);
    update(1,id[u],id[v],d);
}
ll query_path(int u,int v){
    ll res = 0;
    while(top[u] != top[v]){
        if(de[top[u]] < de[top[v]]) swap(u,v);
        res += query(1,id[top[u]],id[u]);
        u = fa[top[u]];
    }
    if(de[u]>de[v]) swap(u,v);
    res += query(1,id[u],id[v]);
    return res;
}
int main(){
    int i,j;
    cin>>n;
    for(i = 1;i<=n;i++){
        cin>>w[i];
    }
    memset(h,-1,sizeof h);
    for(i = 1;i<n;i++){
        int a,b;
        cin>>a>>b;
        add(a,b);
        add(b,a);
    }
    //进行两次dfs
    int root = 1;//1为根节点
    dfs1(root,-1,1);
    dfs2(root,root);
    cin>>m;//m次操作
    build(1,1,n);
    for(i = 1;i<=m;i++){
        //每一次的操作
        int op;
        cin>>op;
        int u,v,d;
        if(op == 1){
            //修改路径
            cin>>u>>v>>d;
            update_path(u,v,d);
        }else if(op == 2){
            //修改子树
            cin>>u>>d;
            update(1,id[u],siz[u]+id[u]-1,d);
        }else if(op == 3){
            //查询路径
            cin>>u>>v;
            cout<<query_path(u,v)<<endl;
        }else{
            //查询子树
            cin>>u;
            cout<<query(1,id[u],siz[u]+id[u]-1)<<endl;
        }
    }
    return 0;
}
123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125126127128129130131132133134135136137138139140141142143144145146147148149150151152153154155156157158159160161162163164165166
```

### （七）单调栈和单调队列

```cpp
//单调栈：输出左边第一个比它小的数，如果没有输出-1
int s[N];
int top;
int main(){
int n,i,j,a;
cin>>n;
    for(i = 1;i<=n;i++){
        cin>>a;
        while(top > 0 && s[top] >= a)
            top--;
        if(top == 0)    cout<<"-1 ";
        else    cout<<s[top]<<" ";
        s[++top] = a;
    }
    return 0;
}
12345678910111213141516
```

```cpp
//滑动窗口维护区间的最小值
int q[N];
int l,r;
int main(){
    int i,j;
    int k;//滑动窗口大小
    cin>>n>>k;
    for(i =1;i<=n;i++)    cin>>a[i];
    for(i = 1;i<=n;i++){
        if(l<r && i-q[l+1] >= k) l++;
        while(l<r && a[q[r]]>a[i])    r--;
        q[++r]=i;
        if(i>=k)    
            cout<<a[q[l+1]]<<" ";
    }
    return 0;
}
1234567891011121314151617
```

### （八）基础莫队

```cpp
#include<bits/stdc++.h>
using namespace std;
const int N = 1000005;
int len;//每一块的长度
int get(int i){
    return i/len;
}
struct Node{
    int l,r;
    int id;
}q[N];//记录每一个询问
bool cmp1(const Node & A,const Node &B){
    if(get(A.l) == get(B.l)){
        //块内按照右端点排序//块外按照块的升序排序
        return A.r<B.r;
    }else{
        //块外按照块的升序排序
        return get(A.l)<get(B.l);
    }
}
//最好初始化为1
int l = 1,r;
int a[N],cnt[N],res,ans[N];
void add(int x){
    if(cnt[x] == 0) cnt[x]++,res++;
    else cnt[x] ++;
}
void del(int x){
    if(cnt[x] == 1) cnt[x]--,res--;
    else cnt[x]--;
}
int main(){
    int i,j;
    int n,m;
    cin>>n;
    for(i = 1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    cin>>m;
    for(i = 1;i<=m;i++){
        scanf("%d %d",&q[i].l,&q[i].r);
        q[i].id = i;
    }
    len = sqrt(n);
    sort(q+1,q+1+m,cmp1);
    for(i = 1;i<=m;i++){
        while(r<q[i].r) add(a[++r]);
        while(r>q[i].r) del(a[r--]);
        while(l<q[i].l) del(a[l++]);
        while(l>q[i].l) add(a[--l]);
        ans[q[i].id] = res;
    }
    for(i = 1;i<=m;i++) printf("%d\n",ans[i]);
    return 0;
}
12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455
```

### （九）点分治

```cpp
#include<bits/stdc++.h>
using namespace std;
const int N = 10005;
int n,m;
struct Node{
    int v,ne,w;
}e[N*2];
int h[N],idx,d[N];//d[i]记录每个点到重心的距离
int st[N];//标记改点是否被删除
vector<int> p,q;//p记录每个子树到重心的距离，
//q记录所有子树到重心的距离
void add(int a,int b,int c){
    e[idx].v = b,e[idx].ne = h[a],e[idx].w = c,h[a] = idx++;
}
int get_size(int u,int fa){
    if(st[u])   return 0;
    int i,j;
    int cnt = 1;
    for(i = h[u];i!=-1;i = e[i].ne){
        int v = e[i].v;
        if(v == fa) continue;
        cnt+=get_size(v,u);
    }
    return cnt;
}
//求以该点为跟的最大子树下雨tot/2的点
//返回以改点为跟的节点数
int get_wc(int u,int fa,int tot,int &wc){
    int i,j;
    if(st[u])   return 0;
    int sum = 1;
    int res = 0;
    for(i = h[u];i!=-1;i = e[i].ne){
        int v = e[i].v;
        if(v == fa) continue;
        int t = get_wc(v,u,tot,wc);
        res = max(res,t);
        sum += t;
    }
    res = max(tot-sum,res);
    if(res<=tot/2)  wc = u;
    return sum;
}
void get_dis(int u,int fa,int dis){
    if(st[u]) return;
    int i,j;
    d[u] = dis;
    p.push_back(dis);
    for(i = h[u];i!=-1;i = e[i].ne){
        int v = e[i].v;
        int w = e[i].w;
        if(v == fa) continue;
        get_dis(v,u,dis+w);
    }
}

//返回两点距离之和小于m的个数
//双指针算法
int get(vector<int> &p){
    int i,j;
    sort(p.begin(),p.end());
    i = 0,j = p.size()-1;
    int res = 0;
    while(i<j){
        if(p[i] + p[j]<=m){
            res += j-i;
            i++;
        }else{
            j--;
        }
    }
    return res;
}
int calc(int u){
    int i,j;
    if(st[u])   return 0;
    int sum = 0;//记录u所连通的点的答案
    q.clear();
    //获取u连通的点的数量
    //求重心
    get_wc(u,-1,get_size(u,-1),u);
    st[u] = 1;//将重心删除
    for(i = h[u];i!=-1;i = e[i].ne){
        int v = e[i].v;
        int w = e[i].w;
        if(st[v])   continue;
        p.clear();
        get_dis(v,-1,w);//求距离
        sum -= get(p);//利用容斥原理
        for(j = 0;j<p.size();j++){
            if(p[j] <= m)   sum++;
            q.push_back(p[j]);
        }
    }
    sum += get(q);
    for(i = h[u];i!=-1;i = e[i].ne){
        int v = e[i].v;
        sum += calc(v);
    }
    return sum;
}
//点分治，求树上两节点间小于等于m的路径数量
int main(){
    int i,j;
    while(cin>>n>>m,n||m){
        //编号0-n-1
        memset(h,-1,sizeof h);
        idx = 0;
        memset(st,0,sizeof st);
        for(i = 1;i<n;i++){
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            add(a,b,c);
            add(b,a,c);
        }
        cout<<calc(0)<<endl;
    }
    return 0;
}
123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119
```

## 四、字符串

### （一）Kmp算法

```cpp
int nex[100005];
char s1[1000005]; //文本串 
char s2[100005]; //模式串 
int n,m;//文本串和模式串的长度 
//下标从1开始
void getnex(){
	nex[1] = 0;
	int i,j = 0; 
	for(i = 2;i<=m;i++){
		while(j>0 && s2[j+1]!=s2[i])j = nex[j];
		//如果回跳到第一个字符就不 用再回跳了
		if(s2[j+1] == s2[i])j++;
		nex[i] = j;
	}
} 
int kmp(){
	int i,j=0;
	getnex();
	for(i = 1;i<=n;i++){
		while(s1[i]!=s2[j+1] && j>0)j = nex[j];
		//如果失配 ，那么就不断向回跳，直到可以继续匹配
		if(s1[i] == s2[j+1])j++;
		//如果匹配成功，那么对应的模式串位置++ 
		if(j == m){
		    //输出所有出现位置的起始下标
			printf("%d ",i-m+1);
			//注意下标，是从0还是1
			j = nex[j];//继续匹配 
		} 
	}
} 
12345678910111213141516171819202122232425262728293031
```

### （二）字典树

```cpp
int son[N][26], cnt[N], idx;
// 0号点既是根节点，又是空节点
// son[][]存储树中每个节点的子节点
// cnt[]存储以每个节点结尾的单词数量

// 插入一个字符串
void insert(char *str)
{
    int p = 0;
    for (int i = 0; str[i]; i ++ )
    {
        int u = str[i] - 'a';
        if (!son[p][u]) son[p][u] = ++ idx;
        p = son[p][u];
    }
    cnt[p] ++ ;
}

// 查询字符串出现的次数
int query(char *str)
{
    int p = 0;
    for (int i = 0; str[i]; i ++ )
    {
        int u = str[i] - 'a';
        if (!son[p][u]) return 0;
        p = son[p][u];
    }
    return cnt[p];
}

//插入二进制数
void insert(int v){
    int i,j;
    int p = 0;
    for(i = 30;i>=0;i--){
        int u = v>>i&1;
        if(son[p][u] == 0)
            son[p][u] = ++idx;
        p = son[p][u];
    }
    val[p] = v;
}
12345678910111213141516171819202122232425262728293031323334353637383940414243
```

### （三）字符串hash

```cpp
ull base = 131,hash[100008],p[100008]; string s;
//求每个前缀的hash
void get_hashs(ull hashs[]){
	p[0] = 1;
	for(int i = 1;i<=n;i++){
		hashs[i] = hashs[i-1]*base+s[i]-'a'+1;
		p[i] = p[i-1]*base;
	}
}
//得到每个子串的hash
ull get_hash(int l,int r,ull hashs[]){
	return hashs[r]-hashs[l-1]*p[r-l+1];
}
12345678910111213
```

## 五、STL

### 1.vector

```cpp
v.push_back(item):向v后加一个元素O(1)
v.pop_back():删除v最后一个元素O(1)
v.size():获取v中元素个数O(1)
v.resize(n):把v的长度重新设定为n个元素O(|n-size|)
v.empty():判断v是否为空O(1)
v.clear():清空v中的元素O(size)
v[index]:获取v中下标为index的元素O(1)
v.begin();返回指向第一个元素的迭代器
v.end();返回指向vector末尾(最后一个元素之后的那个位置)的迭代器
v.front();返回第一个元素
v.back();返回最后一个元素
v.erase(iterator loc);删除loc所指元素并返回下一元素迭代器
v.erase(iterator start, iterator end);删除[start, end)之间的元素，并返回最后一个被删除元素的下个元素的迭代器
去重操作：vt.erase(unique(vt.begin(), vt.end()), vt.end());
1234567891011121314
```

### 2.priority\_queue优先队列（默认为大根堆）

```cpp
pq.push(item):添加元素 O(logn)
pq.pop():使优先级最高的出队O(logn)
pq.top():获取优先级最高的元素O(1)
pq.size():获取元素个数O(1)
pq.empty():是否为空O(1)
优先队列的定义：
priority_queue<int> q1; //默认从大到小，大顶堆 
priority_queue<int ,vector<int>,less<int> > q2; //降序队列，大顶堆 
priority_queue<int ,vector<int>,greater<int> > q3; //升序队列，小顶堆
对于结构体定义：
struct T1{//法一 强烈推荐 
	int x,y;
	friend bool operator < (T1 a,T1 b){
		return a.x<b.x;
	}
};
priority_queue<T1> q1;

struct T1{//法二
	int x,y;
	bool operator < (const T1 &a) const{
		return x<a.x; //大顶堆 
	}
};
priority_queue<T1> q1; 
struct T2{int x,y;};//法三
bool operator <(T2 a,T2 b){
	return a.x>b.x;
}
priority_queue<T2> q2;

struct T3{int x,y;};//法四
struct tmp{ //重写仿函数 
	bool operator() (T3 a,T3 b){
		return a.x<b.x; //大顶堆 
	} 
};
priority_queue<T3, vector<T3>,tmp> q3
1234567891011121314151617181920212223242526272829303132333435363738
```

### 3.set（二叉搜索树）

```cpp
s.insert(item): 插入元素O(logn)
s.size():获取元素的个数O(1)
s.empty():判断是否为空O(1)
s.clear():清空s O(n)
s.find(item):在s中查找item并返回其iterator(迭代器)，找不到的话返回s.end()O(logn)
s.count(item):返回s中item的数量，因为集合中的元素不能重复，因此只能返回0或1 O(logn)
s.erase(it):删除s中it指向位置的元素
s.erase(item):删除s中值为item的元素
s.earse(it1,it2);删除[it1,it2) 这个区间（迭代器）对应位置的元素
iterator lower_bound( const key_type &key ); 返回一个迭代器，指向键值 >= key的第一个元素。
iterator upper_bound( const key_type &key ); 返回一个迭代器，指向键值 > key的第一个元素。
Set的定义：
 
struct T1{
	int key,value;
	bool operator < (const T1 &a) const {
		return key<a.key;//按照升序排列 
	}
};

struct T2{
	int key,value;
};
struct T2cmp{
	bool operator () (const int &a,const int &b){
		if(abs(a-b)<=k)
			return false;
		return a<b;
	}
}; 

int main(){
	int i,j;
	set<T1> s1;
	set<T2,T2cmp> s2;
	set<string> ss1;//等于set<string,less<int> > ss1;从小到大
	set<string,greater<string> > ss2;//从大到小
	set<string,greater<string> > ::iterator itsey;
	//set的遍历
	set<string> :: iterator it; 
	for(it = ss1.begin();it!=ss1.end();it++){
		cout<<*it<<endl;
	}
	return 0;
}
Multiset
c.erase(elem) 删除与elem相等的所有元素，返回被移除的元素个数。
c.erase(pos) 移除迭代器pos所指位置元素，无返回值。
123456789101112131415161718192021222324252627282930313233343536373839404142434445464748
```

### 4.map

```cpp
mp.size():获取元素个数O(1)
mp.empty():判断是否为空O(1)
mp.clear():清空mp O(1) 
mp.find(key):在map中查找key并返回其iterator,找不到的话返回mp.end() O(logn)
mp.count(key):在map中找key的数量，由于每个key都是唯一的，只会返回0或1
mp[key] 可以直接访问到键值队key---value中的value，如果不存在这样的键值对，那么mp[key]返回的是value类型默认构造器所构造的值，并将该键值对插入到map中
mp[key]=tmp:可以把键值对key---value中的value赋值为tmp,如果没有对应的键值对,则将该键值对插入到map中复杂度： O(logn)
mp.insert(make_pair(key,value)):在mp中插入键值对key----value。一般不这样用，想要插入键值对的话直接使用mp[key]=value即可，map已经对[]运算符重载过了.
哈希表：
#include <unordered_map>
unordered_map
1234567891011
```

### 5.pair

```cpp
#include <utility>头文件中
pair<T1, T2> p1; //创建一个空的pair对象（使用默认构造），它的两个元素分别是T1和T2类型，采用值初始化。
pair<T1, T2> p1(v1, v2); //创建一个pair对象，它的两个元素分别是T1和T2类型，其中first成员初始化为v1，second成员初始化为v2。
make_pair(v1, v2); // 以v1和v2的值创建一个新的pair对象，其元素类型分别是v1和v2的类型。
p1 < p2; // 两个pair对象间的小于运算，其定义遵循字典次序：如 p1.first < p2.first 或者 !(p2.first < p1.first) && (p1.second < p2.second) 则返回true。
p1 == p2// 如果两个对象的first和second依次相等，则这两个对象相等；该运算使用元素的==操作符。
p1.first; // 返回对象p1中名为first的公有数据成员。
p1.second; // 返回对象p1中名为second的公有数据成员。
12345678
```

### 6.Algorithm中常用算法：

1.  unique（）去重函数  
    功能：”删除”序列中所有相邻的重复元素(只保留一个)。此处的删除，并不是真的删除，而是指重复元素的位置被不重复的元素给占领了（它并没有将重复的元素删除，而是把重复的元素放到数组的最后面藏起来了）由于它”删除”的是相邻的重复元素，所以在使用unique函数之前，一般都会将目标序列进行排序。对于数组而言返回去重后最后一个元素的指针，而其他容器则是返回去重后最后一个元素的迭代器。  
    iterator unique(iterator it\_1,iterator it\_2);  
    其中这两个参数表示对容器中\[it\_1，it\_2)范围的元素进行去重,返回值是一个迭代器，它指向的是去重后容器中不重复序列的最后一个元素的下一个元素。  
    使用：  
    sort(vt.begin(), vt.end());  
    vt.erase(unique(vt.begin(), vt.end()), vt.end());
    
2.  sort()函数  
    降序排列sort(s+1,s+1+n,greater());
    
3.  求第k小数  
    nth\_element(a,a+k,a+n)，函数只是把下标为k的元素放在了正确位置，对其它元素并没有排序，当然k左边元素都小于等于它，右边元素都大于等于它，所以可以利用这个函数快速定位某个元素
    
4.  二分函数：  
    lower\_bound(起始地址，结束地址，要查找的数值) 返回的是>=x的第一个数的地址。  
    upper\_bound(起始地址，结束地址，要查找的数值) 返回的是>x的第一个数的地址  
    binary\_search(起始地址，结束地址，要查找的数值) 返回的是是否存在这么一个数，是一个bool值。
    
5.  在从小到大的排序数组中，
    

+   lower\_bound( begin,end,num)：从数组的begin位置到end-1位置二分查找第一个大于或等于num的数字，找到返回该数字的地址，不存在则返回end。通过返回的地址减去起始地址begin,得到找到数字在数组中的下标。
+   upper\_bound( begin,end,num)：从数组的begin位置到end-1位置二分查找第一个大于num的数字，找到返回该数字的地址，不存在则返回end。通过返回的地址减去起始地址begin,得到找到数字在数组中的下标。  
    在从大到小的排序数组中，重载lower\_bound()和upper\_bound()
+   lower\_bound( begin,end,num,greater() ):从数组的begin位置到end-1位置二分查找第一个小于或等于num的数字，找到返回该数字的地址，不存在则返回end。通过返回的地址减去起始地址begin,得到找到数字在数组中的下标。
+   upper\_bound( begin,end,num,greater() ):从数组的begin位置到end-1位置二分查找第一个小于num的数字，找到返回该数字的地址，不存在则返回end。通过返回的地址减去起始地址begin,得到找到数字在数组中的下标

## 六、动态规划

### 单调队列优化的背包：

```cpp
const int N = 1005;
const int M = 20005;
int v[N],w[N],s[N];//体积，价值，数量
int dp[M],g[M], q[M],n,m;
int main(){
    int i,j,k;
    cin>>n>>m;
    for(i = 1;i<=n;i++){
        cin>>v[i]>>w[i]>>s[i];
    }
    for(i = 1;i<=n;i++){
        //枚举v[i]的每个余数
        memcpy(g,dp,sizeof g);//滚动数组优化
        //g表示dp[i-1][],dp表示dp[i][];
        for(j = 0;j<v[i];j++){
            int l = 0,r = 0;
            for(k = j;k<=m;k+=v[i]){
 			//维护队列中k到k-s[i]*v[i]的最大值的体积
 			//单调队列中最大值存储物品i的数量大于s[i],出队
                if(l<r && (k-q[l+1])/v[i] > s[i]) l++;
                //除去比当前小的元素
                while(l<r&&g[k]>=g[q[l+1]]+(k-q[l+1])/v[i]*w[i])    r--;
                q[++r]=k;
                dp[k] = g[q[l+1]]+(k-q[l+1])/v[i]*w[i];
            }
        }
    }
    cout<<dp[m]<<endl;
    return 0;
}
123456789101112131415161718192021222324252627282930
```

## 七、其他

### （一）排序

#### 1.快速排序

```cpp
void quick_sort(int l,int r){
    if(l == r)  return;
    int x = a[(l+r)/2];
    int l1 = l-1,r1 = r+1;
    while(l1<r1){
        do l1++;
        while(a[l1]<x);
        do r1--;
        while(a[r1]>x);
        if(l1<r1)   swap(a[l1],a[r1]);
        
    }
    quick_sort(l,r1);
    quick_sort(r1+1,r);
}
123456789101112131415
```

#### 2.归并排序

```cpp
void merge_sort(int l,int r){
	if(l==r)return;
	int m = (l+r)/2;
	merge_sort(l,m);
	merge_sort(m+1,r);
	int i = l,j = m+1;
	int k = i;
	while(i<=m&&j<=r){
		if(a[i]<a[j])	tmp[k++] = a[i++];
		else	tmp[k++] = a[j++];
	}
	while(i<=m)tmp[k++] = a[i++];
	while(j<=r)tmp[k++] = a[j++];
	for(i = l;i<=r;i++)
		a[i] = tmp[i];
}
12345678910111213141516
```

#### 3.归并排序求逆序对

```cpp
#include<bits/stdc++.h>
using namespace std;
const int N=100005;
int a[N],tmp[N];
long long merge_sort(int a[],int l,int r){
    if(l>=r)
    return 0;
    int mid=l+r>>1,i=l,j=mid+1,k=0;
    long long res=merge_sort(a,l,mid)+merge_sort(a,mid+1,r);
    while(i<=mid&&j<=r){
        if(a[i]<=a[j])
        tmp[k++]=a[i++];
        else{
            tmp[k++]=a[j++];
            res+=mid-i+1;
        }
    }
    while(i<=mid)   tmp[k++]=a[i++];
    while(j<=r) tmp[k++]=a[j++];
    for(int i=l,j=0;i<=r;i++,j++)
        a[i]=tmp[j];
    return res;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<merge_sort(a,0,n-1);
    return 0;
}
12345678910111213141516171819202122232425262728293031
```

### （二）二分

#### 1.整数二分

```cpp
bool check(int x) {/* ... */} // 检查x是否满足某种性质
// 区间[l, r]被划分成[l, mid]和[mid + 1, r]时使用：
int bsearch_1(int l, int r){
    while (l < r){
        int mid =(l+r)/2;
        if (check(mid)) r = mid;    // check()判断mid是否满足性质
        else l = mid + 1;
    }
    return l;
}
// 区间[l, r]被划分成[l, mid - 1]和[mid, r]时使用：
int bsearch_2(int l, int r){
    while (l < r){
        int mid = (l+r+1)/2;
        if (check(mid)) l = mid;
else r = mid - 1;
}
    return l;
} 
12345678910111213141516171819
```

#### 2.浮点数二分

```cpp
bool check(double x) {/* ... */}
 // 检查x是否满足某种性质
double bsearch_3(double l, double r){
    for(int i = 1;i<=100;i++){ //直接循环100次 
    	double mid = (l + r) / 2;
        if (check(mid)) r = mid;
        else l = mid;
	}
    return l;
}
12345678910
```

### （三）快速幂和龟速乘

```cpp
//龟速乘,利于快速幂的思想进行乘 
ll mul(ll n,ll m,ll p){
	ll res = 0;
	while(m){
		if(m%2 == 1){
			res = (res + n)%p;
		}
		n = n*2%p;
		m /= 2;
	} 
	return res;
}
123456789101112
```

```cpp
//快速幂
ll power(ll n,ll m,ll p){
	ll ans = 1;
	while(m != 0){
		if(m % 2 == 1)
			ans = ans * n % p;
		n = n * n % p;
		m = m/2;
	}
	return ans;
} 
1234567891011
```

### （四）快读

```cpp
inline int read(){
    int x = 0, f = 1;
    char ch = getchar();
    while(ch < '0' || ch > '9'){
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while(ch >= '0' && ch <= '9'){
        x = (x<<1) + (x<<3) + (ch^48);
        ch = getchar();
    }
    return x * f;
}
1234567891011121314
```

### （五）高精度

\_*int128 a;//可以防止爆longlong，注意两个*

#### 1.大数相加：

```cpp
vector<int> A,B;
vector<int> add(vector<int> &A,vector<int> &B){
	//使用引用的方法使运算更快，copy数组需要时间
	vector<int> C;int t = 0;
	for(int i = 0;i<A.size() || i<B.size();i++){
		if(i<A.size())t+=A[i];	
		if(i<B.size())t+=B[i];
		C.push_back(t%10);
		t/=10;
	}
	if(t!=0)C.push_back(t);
	return C;
}
int main(){
	int i,j,k;
	string s1,s2;
	cin>>s1>>s2;
	for(i = s1.size()-1;i>=0;i--)
		A.push_back(s1[i]-'0');
	for(i = s2.size()-1;i>=0;i--)
		B.push_back(s2[i]-'0');
	vector<int> C = add(A,B);
	for(i = C.size()-1;i>=0;i--)
		printf("%d",C[i]);
	return 0;
}  
1234567891011121314151617181920212223242526
```

#### 2.高精度减：

```cpp
vector<int> A,B;
//比较函数,如果A>=B返回true 
bool cmp(vector<int> &A,vector<int> &B){
	int i;
	if(A.size()!=B.size())return A.size()>B.size();
	for(i = A.size()-1;i>=0;i--)
		if(A[i]!=B[i])
			return A[i]>B[i];
	return true;//两个相等也返回true 
} 
//保证A>B 
vector<int> sub(vector<int> &A,vector<int> &B){
	int t = 0,i;
	vector<int>C;
	for(i = 0;i<A.size();i++){
		t = A[i]+t;
		if(i<B.size())t-=B[i];
		C.push_back((t+10)%10);//将每一位减的数放进C中 
		if(t<0)t=-1;
		else t = 0;
	}
	while(C.back()==0&&C.size()>1)
		C.pop_back();//去掉前导0 
	return C;
}
int main(){
	int i,j,k;
	string s1,s2;
	cin>>s1>>s2;
	//将字符串倒置放进vector数组，数组中第一个数据为最低位
	for(i = s1.size()-1;i>=0;i--)A.push_back(s1[i]-'0');  
	for(i = s2.size()-1;i>=0;i--)B.push_back(s2[i]-'0');
	vector<int> C;
	if(cmp(A,B))	C = sub(A,B);	
	else{
		C = sub(B,A);	printf("-");
	}
	for(i = C.size()-1;i>=0;i--)	printf("%d",C[i]);
	return 0;
}	
12345678910111213141516171819202122232425262728293031323334353637383940
```

#### 3.高精度除低精度：

```cpp
vector<int > A;
//b为除数，A为被除数，r为余数 
vector<int> div(vector<int> &A,int &b,int &r){
	vector<int> C;
	r = 0;
	for(int i = A.size()-1;i>=0;i--){
		//除法从最高位开始
		r = r*10+A[i];
		C.push_back(r/b);
		r%=b;
	}
	reverse(C.begin(),C.end());
	while(C.size()>1 && C.back()==0)C.pop_back(); 
	return C;
}
int main(){
	int i,j,k;
	string a;
	int b,r = 0; //r表示余数 
	cin>>a>>b;
	for(i = a.size()-1;i>=0;i--)A.push_back(a[i]-'0');
	vector<int> C = div(A,b,r);
	for(i = C.size()-1;i>=0;i--){
		printf("%d",C[i]);
	}
	printf("\n%d",r); //输出余数 
	return 0;
}
12345678910111213141516171819202122232425262728
```

#### 4.高精度乘低精度

```cpp
vector<int> mul(vector<int> &A,int a){
	vector<int> C;
	int i,t = 0;//t表示进位
	for(i = 0;i<A.size();i++){
		t+=A[i]*a;
		C.push_back(t%10);
		t/=10;
	}
	while(t){
		C.push_back(t%10);
		t/=10;
	}
	while(C.back()==0 && C.size()>1){
	    C.pop_back();//去掉前导0
	}
	return C;
}

int main(){
	int i,j,k;
	string s1;
	int a;
	vector<int> A;
	cin>>s1>>a;
	for(i = s1.size()-1;i>=0;i--)A.push_back(s1[i]-'0');
	vector<int> C = mul(A,a);
	for(i = C.size()-1;i>=0;i--)
		printf("%d",C[i]);
	return 0;
}
123456789101112131415161718192021222324252627282930
```

#### 5.高精度乘高精度

```cpp
int t[100005];
string mul(string &s1,string &s2){
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	int i,j,l1 = s1.size(),l2 = s2.size();
	for(i = 0;i<l1;i++){
		for(j = 0;j<l2;j++){
			t[i+j] += (s1[i]-'0')*(s2[j]-'0');
		}
	}
	for(i = 0;i<l1+l2-1;i++){//最多为：l1+l2-1位 
		t[i+1]+=t[i]/10;
		t[i]%=10;
	}
	//去掉前导0 
	while(i>0 && t[i] == 0)	i--; 
	string c;
	for(i = i;i>=0;i--){
		c += (t[i]+'0'); //字符串的拼接 
	}
	return c;
}
int main(){
	int i,j,k;
	string s1,s2;
	cin>>s1>>s2;
	string ans = mul(s1,s2);
	cout<<ans;
	return 0;
}
123456789101112131415161718192021222324252627282930
```

## 八、Java高精度

### （一）java参考代码：

参考一：

```java
//import java.util.Scanner;//相当于输入输出头文件
import java.util.*;//啥都有头文件
//import java.math.BigInteger;//大数类
import java.math.BigDecimal;//大浮点数
import java.math.*;//关于数学的头文件
public class Main {
   public static void main(String[] args) {
       BigInteger[] sum=new BigInteger[105];//开一个数组
       Scanner cin = new Scanner(System.in);//必须要写这句话（输入）
       int t = cin.nextInt();//输入整数T nextInt() 下一个int型数据
//        while(cin.hasNext()) {//循环输入，hasNext()
//             int n = cin.nextInt();
//        }
       while (t--!=0) {//java里不能直接写while(t--)，必须是只有真假的表达式
           BigInteger a = cin.nextBigInteger();//输入下一个大数
           BigInteger b = cin.nextBigInteger();//输入下一个大数
           BigInteger c;
           c = a.add(b);//c=a+b
           c = a.subtract(b);//c=a-b
           c = a.multiply(b);//c=a*b
           c = a.divide(b);//c=a/b(整数除法)
           c = a.remainder(b);//c=a%b
           c = a.mod(b);//c=a%b(结果为正数)
           c = BigInteger.ZERO;//c=0
           c = BigInteger.ONE;//c=1
           c = BigInteger.TEN;//c=10 java大数中只有0,1,10
           c = BigInteger.valueOf(7);//c=7
           int n = 7;
           c = BigInteger.valueOf(n);//c=n
           c = a.pow(n);//幂运算 c=pow(a,n)
           c = a.gcd(b);//最大公约数 c=gcd(a,b)
           c = a.abs();//
           c = a.max(b);//c=max(a,b)
           c = a.min(b);//c=min(a,b)
           n = a.compareTo(b);//a<b n=-1;a=b n=0;a>b n=1
           a.equals(b);//a==b
           a.isProbablePrime(2);//判断素数，有一定几率错误，最好手写
           System.out.println(c);//输出c并换行
           System.out.print(c);//输出c
           System.out.println(a+" "+b);//输出a空格b
           BigDecimal d = cin.nextBigDecimal();//输入下一个高精度浮点数
           BigDecimal e = cin.nextBigDecimal();//输入下一个高精度浮点数
           BigDecimal f = d.add(e);//f=d+e
           //...其他和大数类似
           f = d.setScale(2);//保留2位小数，默认四舍五入
           f = d.setScale(2,BigDecimal.ROUND_DOWN);//保留2位小数，向下取整
           f = d.setScale(2,BigDecimal.ROUND_UP);//保留2位小数，向上取整
           f = d.setScale(2,BigDecimal.ROUND_HALF_DOWN);//保留2位小数，四舍五入，正好.5舍去
           f = d.setScale(2,BigDecimal.ROUND_HALF_UP);//保留2位小数，四舍五入，正好.5进位
       }
   }
}
12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152
```

参考二：

```java
import java.util.*;
import java.io.BufferedInputStream;
import java.math.*;
public class Main {
	
	static int N = 2005;
    static BigInteger mod = new BigInteger("1000000007");
    static int n;
    static BigInteger[] a = new BigInteger[N];
    static BigInteger[] dp = new BigInteger[N];
	public static void main(String args[]) {
		Scanner cin = new Scanner(System.in);
		int T;
		BigInteger a = new BigInteger("123456789") ;	// 声明BigInteger对象
		BigInteger b = new BigInteger("987654321") ;	// 声明BigInteger对象
		System.out.println("加法操作：" + b.add(a)) ;	// 加法操作
		System.out.println("减法操作：" + b.subtract(a)) ;	// 减法操作
		System.out.println("乘法操作：" + b.multiply(a)) ;	// 乘法操作
		System.out.println("除法操作：" + b.divide(a)) ;	// 除法操作
		System.out.println("最大数：" + b.max(a)) ;	 // 求出最大数
		System.out.println("最小数：" + b.min(a)) ;	 // 求出最小数
		System.out.println("商："+b.divide(a));//求商
		System.out.println("余数"+b.mod(a));//求余数
		BigInteger result[] = b.divideAndRemainder(a) ;	// 求出余数的除法操作
		System.out.println("商是：" + result[0] + 
			"；余数是：" + result[1]) ;
		
		//比较函数
		if( a.compareTo(b) == 0 ) System.out.println("a == b"); //大整数a==b
		else if( a.compareTo(b) > 0 ) System.out.println("a > b"); //大整数a>b
		else if( a.compareTo(b) < 0 ) System.out.println("a < b"); //大整数a<b
		
		int n;
		BigInteger m;
		n=cin.nextInt(); //读入一个int;
		m=cin.nextBigInteger();//读入一个BigInteger;
		m=BigInteger.valueOf(n);//将n转换成大整数
	}
}
123456789101112131415161718192021222324252627282930313233343536373839
```

```java

import java.math.BigInteger;
import java.util.Scanner;
 
public class Main {
    public static void main(String args[]) {
        // read
        Scanner in = new Scanner(System.in);
        BigInteger a = in.nextBigInteger();
 
        // 3 special numbers
        a = BigInteger.ZERO;
        a = BigInteger.ONE;
        a = BigInteger.TEN;
 
        // convert an int to BigInteger
        BigInteger b = BigInteger.valueOf(2333);
        BigInteger p = BigInteger.valueOf(998244353);
 
        // convert a BigInteger to int
        int i = b.intValue();
        // convert a BigInteger to long
        long l = b.longValue();
 
        // operations:
        // a + b;                                BigInteger add(BigInteger b);
        a.add(b);
        // a - b;                                BigInteger subtract(BigInteger b);
        a.subtract(b);
        // a * b;                                BigInteger multiply(BigInteger b);
        a.multiply(b);
        // a / b;                                BigInteger divide(BigInteger b);
        a.divide(b);
        // a % b;                                BigInteger mod(BigInteger b);
        a.mod(b);
        // -a;                                   BigInteger negate();
        a.negate();
        // a < 0 ? -1 : (a > 0 ? 1 : 0);         int signum();
        a.signum();
        // signum(a - b);                        int compareTo(BigInteger b);
        a.compareTo(b);
        // a == b;                               boolean equals(BigInteger b);
        a.equals(b);
 
        // abs(a);                               BigInteger abs();
        a.abs();
        // max(a, b);                            BigInteger max(BigInteger b);
        a.max(b);
        // min(a, b);                            BigInteger min(BigInteger b);
        a.min(b);
        // gcd(a, b);                            BigInteger gcd(BigInteger b);
        a.gcd(b);
        // pow(a, i);                            BigInteger pow(int i);
        a.pow(i);
 
        // modPow(a, b, p);              BigInteger modPow(BigInteger b, BigInteger p);
        a.modPow(b, p);
        // modPow(a, p - 2, p);                  BigInteger modInverse(BigInteger p);
        a.modInverse(p);
        // isPrime(a); (probability:1 - 0.5^i)  boolean isProbablePrime(int certainty);
        a.isProbablePrime(i);
 
        // a << i;                               BigInteger shiftLeft(int i);
        a.shiftLeft(i);
        // a >> i;                               BigInteger shiftRight(int i);
        a.shiftRight(i);
        // a ^ b;                                BigInteger xor(BigInteger b);
        a.xor(b);
        // a | b;                                BigInteger or(BigInteger b);
        a.or(b);
        // a & b;                                BigInteger and(BigInteger b);
        a.and(b);
        // ~a;                                   BigInteger not();
        a.not();
        // a & ~b;                               BigInteger andNot(BigInteger b);
        a.andNot(b);
 
        // ((a >> i) & 1) == 1;                  BigInteger testBit(int i);
        a.testBit(i);
        // a | (1 << i);                         BigInteger setBit(int i);
        a.setBit(i);
        // a & ~(1 << i);                        BigInteger clearBit(int i);
        a.clearBit(i);
        // a ^ (1 << i);                         BigInteger flipBit(int i);
        a.flipBit(i);
        // a & -a;                               BigInteger getLowerSetBit();
        a.getLowestSetBit();
        // __builtin_popcount(a);                int bitCount();
        a.bitCount();
        // ceil(log2(this < 0 ? -this : this+1)) int bitLength();
        a.bitLength();
    }
} 
123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293
```

Java过题代码：

```java
import java.math.BigInteger;
import java.util.Scanner;
public class Main {
	static int mod = 1000;
	static int N = 10005;
	static BigInteger[][] f = new BigInteger[1005][105];
	static BigInteger Cnm(int n,int m) {
		for(int i = 0;i<=n;i++) {
			f[i][0] = new BigInteger("1");
		}
		for(int i = 1;i<=n;i++) {
			for(int j = 1;j<=m && j<=i;j++) {
				if(i == j)	f[i][j] = new BigInteger("1");
				else {
					f[i][j] = new BigInteger("0");
					f[i][j] = f[i-1][j].add(f[i-1][j-1]);
				}
			}
		}
		return f[n][m];
	}
	static int qmi(int a,int b) {
		int res = 1;
		while(b!=0) {
			if(b%2 == 1)	res = (int) ((long)res*a%mod);
			a = (int) ((long)a*a%mod);
			b = b/2;
		}
		return res;
	}
	public static void main(String[] args) {
		int x,k;
		Scanner cin = new Scanner(System.in);
		k = cin.nextInt();
		x = cin.nextInt();
		x = qmi(x,x);
		System.out.println(Cnm(x-1,k-1));
	}
}
123456789101112131415161718192021222324252627282930313233343536373839
```

### （二）Java快速读入输出模板

```java
import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        InputReader in = new InputReader(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        Solver solver = new Solver();
        solver.solve(in, out);
        out.close();
    }
    static class Solver {
        public void solve(InputReader in, PrintWriter out) {
 			//写执行代码
        }
    }
    static class InputReader {
        public BufferedReader reader;
        public StringTokenizer tokenizer;
        public InputReader(InputStream stream) {
            reader = new BufferedReader(new InputStreamReader(stream), 32768);
            tokenizer = null;
        }
        public String next() {
            while (tokenizer == null || !tokenizer.hasMoreTokens()) {
                try {
                    tokenizer = new StringTokenizer(reader.readLine());
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }
            return tokenizer.nextToken();
        }
        public int nextInt() {
            return Integer.parseInt(next());
        }
        public long nextLong() {
            return Long.parseLong(next());
        }
    }
}
123456789101112131415161718192021222324252627282930313233343536373839404142
```

## 九、计算几何

### （一）基本模板：

参考算法竞赛从入门到进阶

```cpp
#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1.0);  //高精度圆周率
const double eps = 1e-8;       //偏差值
const int maxp = 1010;         //点的数量
int sgn(double x){  //判断x是否等于0
    if(fabs(x) < eps)  return 0;
    else return x<0?-1:1;
}
int Dcmp(double x, double y){  //比较两个浮点数：0 相等；-1 小于；1 大于
    if(fabs(x - y) < eps) return 0;
    else return x<y ?-1:1;
}
//---------------平面几何：点和线--------
struct Point{  //定义点和基本运算
    double x,y;
    Point(){}
    Point(double x,double y):x(x),y(y){}
    Point operator + (Point B){return Point(x+B.x,y+B.y);}
    Point operator - (Point B){return Point(x-B.x,y-B.y);}
    Point operator * (double k){return Point(x*k,y*k);}    //长度增大k倍
    Point operator / (double k){return Point(x/k,y/k);}    //长度缩小k倍
    bool operator == (Point B){return sgn(x-B.x)==0 && sgn(y-B.y)==0;}
    bool operator < (Point B){return sgn(x-B.x)<0 || (sgn(x-B.x)==0 && sgn(y-B.y)<0);} //用于凸包
};
typedef Point Vector;   //定义向量
//点积
double Dot(Vector A,Vector B){return A.x*B.x + A.y*B.y;}
//向量的长度
double Len(Vector A){return sqrt(Dot(A,A));}   
//向量长度的平方
double Len2(Vector A){return Dot(A,A);}
//求向量A和B的夹角
double Angle(Vector A,Vector B){return acos(Dot(A,B)/Len(A)/Len(B));}
//叉积，大于0则B在A的逆时针方向；小于0则B在A的顺时针方向;等于0则B与A共线，可能是同方向的，也可能是反方向的
double Cross(Vector A,Vector B){return A.x*B.y - A.y*B.x;}
//三角形ABC面积的2倍
double Area2(Point A, Point B, Point C){return Cross(B-A, C-A);} 
//两点的距离，方法一
double Distance(Point A, Point B){return hypot(A.x-B.x,A.y-B.y);} 
//两点的距离，方法二
double Dist(Point A,Point B){return sqrt((A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y));}
//向量A的单位法向量
Vector Normal(Vector A){return Vector(-A.y/ Len(A), A.x/ Len(A));}

bool Parallel(Vector A, Vector B){return sgn(Cross(A,B)) == 0;}//向量平行或重合

//向量A逆时针旋转rad度
Vector Rotate(Vector A, double rad){  
    return Vector(A.x*cos(rad)-A.y*sin(rad), A.x*sin(rad)+A.y*cos(rad));
}

struct Line{
    Point p1,p2;//线上的两个点
    Line(){}
    Line(Point p1,Point p2):p1(p1),p2(p2){}
   // Line(Point x,Point y){p1 = x;p2 = y;}
  //  Point(double x,double y):x(x),y(y){}
//根据一个点和倾斜角 angle 确定直线,0<=angle<pi
    Line(Point p,double angle){
        p1 = p;
        if(sgn(angle - pi/2) == 0){p2 = (p1 + Point(0,1));}
        else{p2 = (p1 + Point(1,tan(angle)));}
    }
//ax+by+c=0
    Line(double a,double b,double c){
        if(sgn(a) == 0){
            p1 = Point(0,-c/b);
            p2 = Point(1,-c/b);
        }
        else if(sgn(b) == 0){
            p1 = Point(-c/a,0);
            p2 = Point(-c/a,1);
        }
        else{
            p1 = Point(0,-c/b);
            p2 = Point(1,(-c-a)/b);
        }
    }
};

typedef Line Segment;   //定义线段，两端点是Point p1,p2

//返回直线倾斜角 0<=angle<pi
double Line_angle(Line v){
    double k = atan2(v.p2.y-v.p1.y, v.p2.x-v.p1.x);
    if(sgn(k) < 0)k += pi;
    if(sgn(k-pi) == 0)k -= pi;
        return k;
}
//点和直线关系:1 在左侧;2 在右侧;0 在直线上
int Point_line_relation(Point p,Line v){
    int c = sgn(Cross(p-v.p1,v.p2-v.p1));
    if(c < 0)return 1;       //1：p在v的左边
    if(c > 0)return 2;       //2：p在v的右边
    return 0;                //0：p在v上
}
// 点和线段的关系：0 点p不在线段v上；1 点p在线段v上。
bool Point_on_seg(Point p, Line v){
    return sgn(Cross(p-v.p1, v.p2-v.p1)) == 0 && sgn(Dot(p - v.p1,p- v.p2)) <= 0;
}

//两直线关系:0 平行,1 重合,2 相交
int Line_relation(Line v1, Line v2){
    if(sgn(Cross(v1.p2-v1.p1,v2.p2-v2.p1)) == 0){
       if(Point_line_relation(v1.p1,v2)==0)  return 1;//1 重合
       else return 0;//0 平行
    }
    return 2; //2 相交
}

 //点到直线的距离
 double Dis_point_line(Point p, Line v){
    return fabs(Cross(p-v.p1,v.p2-v.p1))/Distance(v.p1,v.p2);
 }

//求在直线上的投影点
Point Point_line_proj(Point p, Line v){
    double k=Dot(v.p2-v.p1,p-v.p1)/Len2(v.p2-v.p1);
    return v.p1+(v.p2-v.p1)*k;
}

//点p对直线v的对称点
Point Point_line_symmetry(Point p, Line v){
    Point q = Point_line_proj(p,v);//先求点p在直线v的投影点
    return Point(2*q.x-p.x,2*q.y-p.y);
}

//点到线段的距离
double Dis_point_seg(Point p, Segment v){
    if(sgn(Dot(p- v.p1,v.p2-v.p1))<0 || sgn(Dot(p- v.p2,v.p1-v.p2))<0) //点的投影不在线段上
        return min(Distance(p,v.p1),Distance(p,v.p2));//到两端点的距离取最小值
    return Dis_point_line(p,v); //点的投影在线段上
 }

//求两直线ab和cd的交点
//**调用前要保证两直线不平行或重合，先判断两直线是否平行
 Point Cross_point(Point a,Point b,Point c,Point d){ //Line1:ab,  Line2:cd
    double s1 = Cross(b-a,c-a);
    double s2 = Cross(b-a,d-a);  //叉积有正负
    return Point(c.x*s2-d.x*s1,c.y*s2-d.y*s1)/(s2-s1);
 }

 //两线段是否相交：1 相交，0不相交
 //如果求两线段交点，先判断两线段是否相交，相交则转化成两直线求交点
bool Cross_segment(Point a,Point b,Point c,Point d){//Line1:ab,  Line2:cd
	double c1=Cross(b-a,c-a),c2=Cross(b-a,d-a);
	double d1=Cross(d-c,a-c),d2=Cross(d-c,b-c);
	return sgn(c1)*sgn(c2)<0 && sgn(d1)*sgn(d2)<0;//注意交点是端点的情况不算在内
}

//---------------平面几何：多边形----------------
struct Polygon{
    int n;   //多边形的顶点数
    Point p[maxp];   //多边形的点
    Line v[maxp];    //多边形的边
};

//判断点和任意多边形的关系: 3 点上; 2 边上; 1 内部; 0 外部
//点pt，多边形的点Point *p，多边形点的数量n，多边形顶点按照顺时针或者逆时针方向排列
int Point_in_polygon(Point pt,Point *p,int n){ 
    for(int i = 0;i < n;i++){  //点在多边形的顶点上,下标从0开始
        if(p[i] == pt)return 3;
    }
    for(int i = 0;i < n;i++){//点在多边形的边上
        Line v=Line(p[i],p[(i+1)%n]);
        if(Point_on_seg(pt,v)) return 2;
    }
    int num = 0;
    for(int i = 0;i < n;i++){
        int j = (i+1)% n;
        int c = sgn(Cross(pt-p[j],p[i]-p[j]));
        int u = sgn(p[i].y - pt.y);
        int v = sgn(p[j].y - pt.y);
        if(c > 0 && u < 0 && v >=0) num++;
        if(c < 0 && u >=0 && v < 0) num--;
    }
    return num != 0; //1 内部; 0 外部
}

//求多边形的面积，从原点开始划分三角形，顶点按照顺时针或者逆时针方向排列
double Polygon_area(Point *p, int n){ //Point *p表示多边形。
    double area = 0;
    for(int i = 0;i < n;i++)
        area += Cross(p[i],p[(i+1)%n]);
    return area/2;    //面积有正负，不能简单地取绝对值
}
//求多边形重心。Point *p表示多边形。
Point Polygon_center(Point *p, int n){ 
    Point ans(0,0);
    if(Polygon_area(p,n)==0) return ans;
    for(int i = 0;i < n;i++)
        ans = ans + (p[i]+p[(i+1)%n]) * Cross(p[i],p[(i+1)%n]); //面积有正负
    return ans/Polygon_area(p,n)/6.;
}

//Convex_hull()求凸包。凸包顶点放在ch中，返回值是凸包的顶点数
int Convex_hull(Point *p,int n,Point *ch){
    sort(p,p+n);         //对点排序：按x从小到大排序，如果x相同，按y排序
    n=unique(p,p+n)-p;   //去除重复点
    int v=0;
	//求下凸包。如果p[i]是右拐弯的，这个点不在凸包上，往回退
    for(int i=0;i<n;i++){
        while(v>1 && sgn(Cross(ch[v-1]-ch[v-2],p[i]-ch[v-2]))<=0)
			v--;
        ch[v++]=p[i];
    }
    int j=v;
	//求上凸包
    for(int i=n-2;i>=0;i--){
        while(v>j && sgn(Cross(ch[v-1]-ch[v-2],p[i]-ch[v-2]))<=0)
			v--;
        ch[v++]=p[i];
    }
    if(n>1) v--;
    return v;   //返回值v是凸包的顶点数
}

//---------------平面几何：圆----------------
struct Circle{
    Point c;//圆心
    double r;//半径
    Circle(){}
    Circle(Point c,double r):c(c),r(r){}
    Circle(double x,double y,double _r){c=Point(x,y);r = _r;}
};

//点和圆的关系: 0 点在圆内, 1 圆上, 2 圆外.
int Point_circle_relation(Point p, Circle C){
    double dst = Distance(p,C.c);
    if(sgn(dst - C.r) < 0) return 0;  //点在圆内
    if(sgn(dst - C.r) ==0) return 1;   //圆上
    return 2;   //圆外
}

//直线和圆的关系：0 直线在圆内, 1 直线和圆相切, 2 直线在圆外
int Line_circle_relation(Line v,Circle C){
    double dst = Dis_point_line(C.c,v);
    if(sgn(dst-C.r) < 0) return 0; //直线在圆内
    if(sgn(dst-C.r) ==0) return 1;  //直线和圆相切
    return 2; //直线在圆外
}

//线段和圆的关系：0 线段在圆内, 1 线段和圆相切, 2 线段在圆外
int Seg_circle_relation(Segment v,Circle C){
    double dst = Dis_point_seg(C.c,v);
    if(sgn(dst-C.r) < 0) return 0; //线段在圆内
    if(sgn(dst-C.r) ==0) return 1;  //线段和圆相切
    return 2;    //线段在圆外
}

//直线和圆的交点，pa, pb是交点。返回值是交点个数
int Line_cross_circle(Line v,Circle C,Point &pa,Point &pb){
    if(Line_circle_relation(v, C)==2) return 0;//无交点
    Point q = Point_line_proj(C.c,v);  //圆心在直线上的投影点
    double d = Dis_point_line(C.c,v);   //圆心到直线的距离
    double k = sqrt(C.r*C.r-d*d);   //
    if(sgn(k) == 0){   //1个交点，直线和圆相切
        pa = q;
        pb = q;
        return 1;
    }
    Point n=(v.p2-v.p1)/ Len(v.p2-v.p1);  //单位向量
    pa = q + n*k;
    pb = q - n*k;
    return 2;//2个交点
}

//-------------------三维几何----------------
//三维：点
struct Point3{
    double x,y,z;
    Point3(){}
    Point3(double x,double y,double z):x(x),y(y),z(z){}
    Point3 operator + (Point3 B){return Point3(x+B.x,y+B.y,z+B.z);}
    Point3 operator - (Point3 B){return Point3(x-B.x,y-B.y,z-B.z);}
    Point3 operator * (double k){return Point3(x*k,y*k,z*k);}
    Point3 operator / (double k){return Point3(x/k,y/k,z/k);}
    bool operator == (Point3 B){return sgn(x-B.x)==0 && sgn(y-B.y)==0 && sgn(z-B.z)==0;}
};
typedef Point3 Vector3;
//点积。和二维点积函数同名。C++允许函数同名。
double Dot(Vector3 A,Vector3 B){return A.x*B.x+A.y*B.y+A.z*B.z;}
//叉积
Vector3 Cross(Vector3 A,Vector3 B){return Point3(A.y*B.z-A.z*B.y,A.z*B.x-A.x*B.z,A.x*B.y-A.y*B.x);}
double Len(Vector3 A){return sqrt(Dot(A,A));}   //向量的长度
double Len2(Vector3 A){return Dot(A,A);}        //向量长度的平方
double Distance(Point3 A,Point3 B){
    return sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y)+(A.z-B.z)*(A.z-B.z));
}
double Angle(Vector3 A,Vector3 B){return acos(Dot(A,B)/Len(A)/Len(B));}   //A与B的夹角
//三维：线
struct Line3{
    Point3 p1,p2;
    Line3(){}
    Line3(Point3 p1,Point3 p2):p1(p1),p2(p2){}
};
typedef Line3 Segment3;   //定义线段，两端点是Point p1,p2

//三角形面积的2倍
double Area2(Point3 A,Point3 B,Point3 C){return Len(Cross(B-A, C-A));}

//三维：点到直线距离
double Dis_point_line(Point3 p, Line3 v){
    return Len(Cross(v.p2-v.p1,p-v.p1))/Distance(v.p1,v.p2);
}

//三维：点在直线上
bool Point_line_relation(Point3 p,Line3 v){
    return sgn( Len(Cross(v.p1-p,v.p2-p))) == 0 && sgn(Dot(v.p1-p,v.p2-p))== 0;
}
//三维：点到线段距离。
double Dis_point_seg(Point3 p, Segment3 v){
    if(sgn(Dot(p- v.p1,v.p2-v.p1)) < 0 || sgn(Dot(p- v.p2,v.p1-v.p2)) < 0)
        return min(Distance(p,v.p1),Distance(p,v.p2));
    return Dis_point_line(p,v);
}
//三维：点 p 在直线上的投影
Point3 Point_line_proj(Point3 p, Line3 v){
    double k=Dot(v.p2-v.p1,p-v.p1)/Len2(v.p2-v.p1);
    return v.p1+(v.p2-v.p1)*k;
}
//三维：平面
struct Plane{
    Point3 p1,p2,p3;//平面上的三个点
    Plane(){}
    Plane(Point3 p1,Point3 p2,Point3 p3):p1(p1),p2(p2),p3(p3){}
};
//平面法向量
Point3 Pvec(Point3 A,Point3 B,Point3 C){ return Cross(B-A,C-A);}
Point3 Pvec(Plane f){ return Cross(f.p2-f.p1,f.p3-f.p1);}
//四点共平面
bool Point_on_plane(Point3 A,Point3 B,Point3 C,Point3 D){
    return sgn(Dot(Pvec(A,B,C),D-A)) == 0;
}
//两平面平行
int Parallel(Plane f1, Plane f2){
    return Len(Cross(Pvec(f1),Pvec(f2))) < eps;
}
//两平面垂直
int Vertical (Plane f1, Plane f2){
    return sgn(Dot(Pvec(f1),Pvec(f2)))==0;
}
//直线与平面的交点p，返回值是交点个数  
int Line_cross_plane(Line3 u,Plane f,Point3 &p){
    Point3 v = Pvec(f);
    double x = Dot(v, u.p2-f.p1);
    double y = Dot(v, u.p1-f.p1);
    double d = x-y;
    if(sgn(x) == 0 && sgn(y) == 0) return -1;//-1：v在f上
    if(sgn(d) == 0)return 0;                  //0：v与f平行
    p = ((u.p1 * x)-(u.p2 * y))/d;             //v与f相交
    return 1;
}

//四面体有向体积*6
double volume4(Point3 A,Point3 B,Point3 C,Point3 D){return Dot(Cross(B-A,C-A),D-A);}


int main(){
    Point a(0,1),b(0,0),c(1,1),d(1,2),p(1.5,1);
    double a1=5,b1=6,c1=1;
    Line k(a,b),k2(c,d);
    Point pr(1,1),cr(1,1); double r=1; Circle C(cr,r);

    cout<<endl<<"Line_circle_relation="<<Line_circle_relation(k,C);
    cout<<endl<<"Seg_circle_relation="<<Seg_circle_relation(k,C);
    cout<<endl<<"Point_circle_relation="<<Point_circle_relation(pr,C);
    cout<<endl<<"parallel="<<Parallel(a,b)<<endl;
    cout<<"dot="<<Dot(a,b)<<endl<<" angle="<<Angle(a,b)<<endl;
    cout<<"90:"<<sgn(Rotate(a, -pi/2).x)<<endl<<Rotate(a, -pi/2).y;
    cout<<endl<<"line angle="<<Line_angle(k)*4;
    cout<<endl<<"line place="<<Point_line_relation(p,k);
    cout<<endl<<"point_on_seg="<<Point_on_seg(p,k);
    cout<<endl<<"dis_point_line="<<Dis_point_line(p,k);
    cout<<endl<<"dis_point_line="<<Dis_point_seg(p,k);
    Point pp=Cross_point(a,b,c,d);
    cout<<endl<<"crosspoint="<<pp.x<<"  "<<pp.y;
    cout<<endl<<"cross seg="<<Cross_segment(a,b,c,d);
    cout<<endl<<"distance="<<Distance(a,b);
    cout<<endl<<"line_relation="<<Line_relation(k,k2);
    Point g[4];
    g[0]=a;g[1]=b;g[2]=c;g[3]=d;
    cout<<endl<<"Point_in_polygon="<<Point_in_polygon(p,g,4);
    cout<<endl<<"Polygon_area="<<Polygon_area(g,4);
    cout<<endl<<endl;
	return 0;
}
123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125126127128129130131132133134135136137138139140141142143144145146147148149150151152153154155156157158159160161162163164165166167168169170171172173174175176177178179180181182183184185186187188189190191192193194195196197198199200201202203204205206207208209210211212213214215216217218219220221222223224225226227228229230231232233234235236237238239240241242243244245246247248249250251252253254255256257258259260261262263264265266267268269270271272273274275276277278279280281282283284285286287288289290291292293294295296297298299300301302303304305306307308309310311312313314315316317318319320321322323324325326327328329330331332333334335336337338339340341342343344345346347348349350351352353354355356357358359360361362363364365366367368369370371372373374375376377378379380381382383384385386387388
```

### （二）求半平面交

#### 1.点向式求半平面交

```cpp
#include <bits/stdc++.h>
using namespace std;
const double INF = 1e12;
const double pi = acos(-1.0);
const double eps = 1e-8;
int sgn(double x){
    if(fabs(x) < eps)  return 0;
    else return x<0?-1:1;
}
struct Point{
    double x,y;
    Point(){}
    Point(double x,double y):x(x),y(y){}
    Point operator + (Point B){return Point(x+B.x,y+B.y);}
    Point operator - (Point B){return Point(x-B.x,y-B.y);}
    Point operator * (double k){return Point(x*k,y*k);}
};
typedef Point Vector;
double Cross(Vector A,Vector B){return A.x*B.y - A.y*B.x;} //叉积
struct Line{
	Point p;
	Vector v;
	double ang;
	Line(){};
	Line(Point p,Vector v):p(p),v(v){ang=atan2(v.y,v.x);}
	bool operator < (Line &L){return ang<L.ang;}     //用于极角排序
};
//点p在线L左边，即点p在线L在外面：
bool OnLeft(Line L,Point p){return sgn(Cross(L.v,p-L.p))>0;}
Point Cross_point(Line a,Line b){    //两直线交点
    	Vector u=a.p-b.p;
		double t=Cross(b.v,u)/Cross(a.v,b.v);
		return a.p+a.v*t;
}
vector<Point> HPI(vector<Line> L){     //求半平面交，返回图多边形
	int n=L.size();
	sort(L.begin(),L.end());//将所有半平面按照极角排序。
	int l,r;       //指向双端队列的第一个和最后一个元素
	vector<Point> p(n);  //两个相邻半平面的交点
	vector<Line> q(n);   //双端队列
	vector<Point> ans;   //半平面交形成的凸包
	q[l=r=0]=L[0];
	for(int i=1;i<n;i++){
		//情况1：删除尾部的半平面
		while(l<r && !OnLeft(L[i], p[r-1])) r--;
		//情况2：删除首部的半平面：
		while(l<r && !OnLeft(L[i], p[l]))  l++;
		q[++r]=L[i];     //将当前的半平面加入双端队列尾部
		//极角相同的两个半平面，保留左边：
		if(fabs(Cross(q[r].v,q[r-1].v)) < eps){
			r--;
			if(OnLeft(q[r],L[i].p)) q[r]=L[i];
		}
		//计算队列尾部半平面交点：
		if(l<r) p[r-1]=Cross_point(q[r-1],q[r]);
	}
	//情况3：删除队列尾部的无用半平面
	while(l<r && !OnLeft(q[l],p[r-1])) r--;
	if(r-l<=1) return ans;   //空集
	p[r]=Cross_point(q[r],q[l]);  //计算队列首尾部的交点。
	for(int i=l;i<=r;i++)  ans.push_back(p[i]);   //复制。
	return ans;               //返回凸多边形
}
int main(){
     int T,n;
		cin>>T;
		while(T--){
			cin>>n;
		    vector<Line> L;
		   //加一个半平面F:反向y轴
         L.push_back(Line(Point(0,0),Vector(0,-1)));
			//加一个半平面E:y极大的向左的直线
		    L.push_back(Line(Point(0,INF),Vector(-1,0)));
  	    while(n--){
				double a,b;
				scanf("%lf%lf",&a,&b);
			 	L.push_back(Line(Point(0,a),Vector(1,b)));
		 }
		 vector<Point> ans=HPI(L);        //得到凸多边形
		 printf("%d\n",ans.size()-2);    //去掉人为加的两个点
	 }
     return 0;
}
1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374757677787980818283
```

#### 2.两点式求半平面交一

```cpp
const double INF = 1e12;
const double eps = 1e-8;
int n,m;
int sgn(double x){  //判断x是否等于0
    if(fabs(x) < eps)  return 0;
    else return x<0?-1:1;
}
struct Point{  //定义点和基本运算
    double x,y;
    Point(){}
    Point(double x,double y):x(x),y(y){}
    Point operator + (Point B){return Point(x+B.x,y+B.y);}
    Point operator - (Point B){return Point(x-B.x,y-B.y);}
    Point operator * (double k){return Point(x*k,y*k);}    //长度增大k倍
    Point operator / (double k){return Point(x/k,y/k);}    //长度缩小k倍
};
typedef Point Vector;   //定义向量
//点积
double Dot(Vector A,Vector B){return A.x*B.x + A.y*B.y;}
double Dist(Point A,Point B){return sqrt((A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y));}
double Cross(Vector A,Vector B){return A.x*B.y - A.y*B.x;}
double Area2(Point A, Point B, Point C){return Cross(B-A, C-A);} 
struct Line{
    Point p1,p2;//线上的两个点
    Line(){}
    Line(Point p1,Point p2):p1(p1),p2(p2){}
};
//得到极角角度
double get_angle(Line a) {
	return atan2(a.p2.y-a.p1.y,a.p2.x-a.p1.x);
}
//排序：极角小的排前面，极角相同时，最左边的排在最后面，以便去重
bool cmp(Line a, Line b) {
  double A =  get_angle(a), B = get_angle(b);
  if (fabs(A - B) < eps) return Area2(a.p1,a.p2,b.p2)<0;
  return A < B;
}
//点和直线关系:1 在左侧;2 在右侧;0 在直线上
int Point_line_relation(Point p,Line v){
    int c = sgn(Cross(p-v.p1,v.p2-v.p1));
    if(c < 0)return 1;       //1：p在v的左边
    if(c > 0)return 2;       //2：p在v的右边
    return 0;                //0：p在v上
}
//求两直线的交点 
Point Cross_point(Point a,Point b,Point c,Point d){ //Line1:ab,  Line2:cd
	double s1 = Cross(b-a,c-a);
	double s2 = Cross(b-a,d-a);  //叉积有正负
    return Point(c.x*s2-d.x*s1,c.y*s2-d.y*s1)/(s2-s1);
}
//两直线交点
Point Cross_point(Line a,Line b){    
    return Cross_point(a.p1,a.p2,b.p1,b.p2);
}
bool OnLeft(Line l,Point p){
	if(Point_line_relation(p,l) == 1)	return true;
	return false;
}
//求半平面交，返回图多边形
vector<Point> HPI(vector<Line> L){     
	int n=L.size();
	sort(L.begin(),L.end(),cmp);//将所有半平面按照极角排序。
	int l,r;       //指向双端队列的第一个和最后一个元素
	vector<Point> p(n);  //两个相邻半平面的交点
	vector<Point> ans;   //半平面交形成的凸包
	vector<Line> q(n);   //双端队列
	q[l=r=0]=L[0];
	for(int i=1;i<n;i++){
		//情况1：删除尾部的半平面
		while(l<r && !OnLeft(L[i], p[r-1])) r--;
		//情况2：删除首部的半平面：
		while(l<r && !OnLeft(L[i], p[l]))  l++;
		q[++r]=L[i];     //将当前的半平面加入双端队列尾部
		//极角相同的两个半平面，保留左边：
		if(fabs(Cross(q[r].p2-q[r].p1,q[r-1].p2-q[r-1].p1)) < eps){
			r--;
			if(OnLeft(q[r],L[i].p1)) q[r]=L[i];
		}
		//计算队列尾部半平面交点：
		if(l<r) p[r-1]=Cross_point(q[r-1],q[r]);
	}
	//情况3：删除队列尾部的无用半平面
	while(l<r && !OnLeft(q[l],p[r-1])) r--;
	if(r-l<=1) return ans;   //空集
	p[r]=Cross_point(q[r],q[l]);  //计算队列首尾部的交点。
	for(int i=l;i<=r;i++)  ans.push_back(p[i]);   //复制
	return ans;               //返回凸多边形
}
vector<Line> L;
vector<Point> ans;
int main(){
	int i,j,T;
	cin>>T;
	while(T--){
		int n;
		L.clear();
		cin>>n;
		for(i = 1;i<=n;i++){
			double p,v;
			scanf("%lf %lf",&p,&v);
			Line l(Point(0,p),Point(1,v+p));
			L.push_back(l);
		}
		//加入两个边界的直线
		L.push_back(Line(Point(0,0),Point(0,-1)));
		L.push_back(Line(Point(0,INF),Point(-1,INF)));
		vector<Point> ans = HPI(L);
		cout<<ans.size()-2<<endl;
	} 
	return 0;
}
123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111
```

#### 3.两点式求半平面交模板二

```cpp
typedef long long ll;
typedef long double LD;
typedef pair<int,int> PII;
const double inf = 1e12;
const int N = 100005;
const LD eps = 1e-18;
int n,m;
int sgn(double x){  //判断x是否等于0
    if(fabs(x) < eps)  return 0;
    else return x<0?-1:1;
}
int Dcmp(double x, double y){  //比较两个浮点数：0 相等；-1 小于；1 大于
    if(fabs(x - y) < eps) return 0;
    else return x<y ?-1:1;
}
struct Point{  //定义点和基本运算
    double x,y;
    Point(){}
    Point(double x,double y):x(x),y(y){}
    Point operator + (Point B){return Point(x+B.x,y+B.y);}
    Point operator - (Point B){return Point(x-B.x,y-B.y);}
    Point operator * (double k){return Point(x*k,y*k);}    //长度增大k倍
    Point operator / (double k){return Point(x/k,y/k);}    //长度缩小k倍
    bool operator == (Point B){return sgn(x-B.x)==0 && sgn(y-B.y)==0;}
    bool operator < (Point B){return sgn(x-B.x)<0 || (sgn(x-B.x)==0 && sgn(y-B.y)<0);} //用于凸包
};
typedef Point Vector;   //定义向量
double Cross(Vector A,Vector B){return A.x*B.y - A.y*B.x;}
double Area2(Point A, Point B, Point C){return Cross(B-A, C-A);} 
struct Line{
    Point p1,p2;//线上的两个点
    Line(){}
    Line(Point p1,Point p2):p1(p1),p2(p2){}
};
Line line[N];
int cnt;
int q[N];//定义双端队列
double get_angle(Line a) {
	return atan2(a.p2.y-a.p1.y,a.p2.x-a.p1.x);
}
//排序：极角小的排前面，极角相同时，最左边的排在最后面，以便去重
bool cmp(Line a, Line b) {
  double A =  get_angle(a), B = get_angle(b);
  if (fabs(A - B) < eps) return Area2(a.p1,a.p2,b.p2)<0;
  return A < B;
}
Point Cross_point(Point a,Point b,Point c,Point d){ //Line1:ab,  Line2:cd
	double s1 = Cross(b-a,c-a);
	double s2 = Cross(b-a,d-a);  //叉积有正负
    return Point(c.x*s2-d.x*s1,c.y*s2-d.y*s1)/(s2-s1);
}
//两直线交点
Point Cross_point(Line a,Line b){    
    return Cross_point(a.p1,a.p2,b.p1,b.p2);
}
// 判断bc的交点是否在a的右侧
bool on_right(Line a, Line b, Line c){
    Point o = Cross_point(b, c);
    //如果删除重合的点加上等号 
    return Area2(a.p1, a.p2, o) <= 0;
}
vector<Point> HPI(vector<Line> L){
	int cnt = L.size();
    sort(L.begin(),L.end(), cmp);
    int l = 0, r = -1;//头部和尾部 
    for (int i = 0; i < cnt; i ++ ){
        if (i && !Dcmp(get_angle(L[i - 1]), get_angle(L[i]))) continue;
        while (l + 1 <= r && on_right(L[i], L[q[r - 1]], L[q[r]])) r -- ;
        while (l + 1 <= r && on_right(L[i], L[q[l]], L[q[l + 1]])) l ++ ;
        q[ ++ r] = i;
    }
    while (l + 1 <= r && on_right(L[q[l]], L[q[r - 1]], L[q[r]])) r -- ;
    while (l + 1 <= r && on_right(L[q[r]], L[q[l]], L[q[l + 1]])) l ++ ;
    int k = 0;
    vector<Point> ans;
    if(r - l <= 1)	return ans;//返回空集 
    q[++r] = q[l];//将头部的直线加入尾部 
    for(int i = l;i<r;i++){
    	ans.push_back(Cross_point(L[q[i]],L[q[i+1]]));
	}
    return ans;
}
double Polygon_area(vector<Point> p){ //Point *p表示多边形。
    double area = 0;
    int n = p.size();
    for(int i = 0;i < n;i++)
        area += Cross(p[i],p[(i+1)%n]);
    return area/2;    //面积有正负，不能简单地取绝对值
}

vector<Line> L;
vector<Point> ans;
Point pg[N];
int main(){
	int i,j,T;
	cin>>T;
	while(T--){
		int n;
		L.clear();
		cin>>n;
		for(i = 1;i<=n;i++){
			double p,v;
			scanf("%lf %lf",&p,&v);
			Line l(Point(0,p),Point(1,v+p));
			L.push_back(l);
		}
		//加入两个边界的直线
		L.push_back(Line(Point(0,0),Point(0,-1)));
		L.push_back(Line(Point(0,inf),Point(-1,inf)));
		vector<Point> ans = HPI(L);
		cout<<ans.size()-2<<endl;
	} 
	return 0;
} 
123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114
```

### （三）模拟退火求最小球覆盖

```cpp
#include<bits/stdc++.h>
using namespace std;
const int MAXN=105;
const double EPS=1e-8;
struct Point{
    double x,y,z;
}Dots[MAXN];
int n;
double Distance(Point a,Point b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z));
}
double Solve(){
    double Step=200,ans=1e9,mt;
    Point z=Point{0,0,0};
    int s=0;
    while(Step>EPS){
        for(int i=1;i<=n;i++)
            if(Distance(z,Dots[s])<Distance(z,Dots[i]))
                s=i;
        mt=Distance(z,Dots[s]);
        ans=min(ans,mt);
        z.x+=(Dots[s].x-z.x)/mt*Step;
        z.y+=(Dots[s].y-z.y)/mt*Step;
        z.z+=(Dots[s].z-z.z)/mt*Step;
        Step*=0.9999;
    }
    return ans;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        double x,y,z;
        scanf("%lf %lf %lf",&x,&y,&z);
        Dots[i]=Point{x,y,z};
    }
    printf("%.7f\n",Solve());
}
很多人会对Step、EPS、0.9999这几个参数很难理解，但这就是模拟退火的精髓。
1234567891011121314151617181920212223242526272829303132333435363738
```