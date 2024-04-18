#include<bits/stdc++.h>
using namespace std;
int p[10100];
struct g{
    int a;
    int b;
    int w;
    bool operator <(const g &r)
    {
        return this->w<r.w;
    }
};
int find(int a){//并查集找祖宗
    if(p[a] != a) p[a] = find(p[a]);
    return p[a];
}
g graph[201000];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)p[i]=i;
    for(int i=1;i<=m;i++)
    {
        cin>>graph[i].a>>graph[i].b>>graph[i].w;
    }
    sort(graph+1,graph+m+1);
    int res=0,cnt=0;
    for(int i = 1; i <= m; i++)//依次尝试加入每条边
    {
        int pa = find(graph[i].a);// a 点所在的集合
        int pb = find(graph[i].b);// b 点所在的集合
        if(pa != pb){//如果 a b 不在一个集合中
            res += graph[i].w;//a b 之间这条边要
            p[pa] = pb;// 合并a b
            cnt ++; // 保留的边数量++
            //cout<<graph[i].a<<" "<<graph[i].b<<endl;
        }
    }
    if(cnt<n-1)cout<<"impossible"<<endl;
    else cout<<res<<endl;
}