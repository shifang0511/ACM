#include<iostream>
#include<cstring>
#include<queue>
#include<vector>
using namespace std;
typedef pair<int,int> PII;
priority_queue<PII,vector<PII>,greater<PII>>heap;
const int N=150100,M=1e6+10,INF=0x3f3f3f3f;
int h[M],e[M],ne[M],w[M],dis[N],idx;
bool st[M];
int n,m;
void add(int x,int y,int z)
{
    e[idx]=y;ne[idx]=h[x];w[idx]=z;h[x]=idx++;
}
void dijstra()
{
    dis[1]=0;
    heap.push({0,1});
    while(heap.size()){
        PII k=heap.top();heap.pop();
        int var=k.second,dist=k.first;
        if(st[var])continue;
        st[var]=1;
        for(int i=h[var];i!=-1;i=ne[i])
        {
            int j=e[i];
            if(dis[j]>dist+w[i])
            {
                dis[j]=dist+w[i];
                heap.push({dis[j],j});
            }
        }
    }
}
int main()
{
    memset(h,-1,sizeof h);
    memset(dis,0x3f,sizeof dis);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y,z;cin>>x>>y>>z;
        if(x==y)continue;
        add(x,y,z);
    }
    dijstra();
    if(dis[n]!=INF)cout<<dis[n]<<endl;
    else cout<<-1;
}