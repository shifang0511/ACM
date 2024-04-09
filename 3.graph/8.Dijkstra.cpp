#include<iostream>
#include<cstring>

using namespace std;

const int N=510,INF=0x3f3f3f3f;
int graph[N][N],dis[N];
bool st[N];
int n,m;
void dijstra()
{
    dis[1]=0;
    for(int i=0;i<n-1;i++)
    {
        int t=-1;
        for(int j=1;j<=n;j++)
        {
            if(!st[j]&&(t==-1||dis[j]<dis[t]))
            t=j;
        }
        st[t]=1;
        for(int j=1;j<=n;j++)
        {
            dis[j]=min(dis[j],dis[t]+graph[t][j]);
        }
    }
}
int main()
{
    memset(graph,0x3f,sizeof graph);
    memset(dis,0x3f,sizeof dis);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y,z;cin>>x>>y>>z;
        graph[x][y]=min(graph[x][y],z);
    }
    dijstra();
    if(dis[n]!=INF)cout<<dis[n]<<endl;
    else cout<<-1;
}