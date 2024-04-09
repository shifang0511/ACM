#include<iostream>
#include<cstring>

using namespace std;

const int N=510,INF=0x3f3f3f3f;
int graph[N][N],dis[N];
bool st[N];
int n,m;
int res;
void Prim()
{
    dis[1]=0;
    for(int i=0;i<n;i++)
    {    
        int t=-1;
        for(int j=1;j<=n;j++)
        {
            if(!st[j]&&(t==-1||dis[j]<dis[t]))
            t=j;
        }
    
    if(dis[t]==INF){cout<<"impossible"<<endl;return;}
    
        st[t]=1;res+=dis[t];
        for(int j=1;j<=n;j++)
        {
            if(dis[j]>graph[t][j]&&!st[j])
            {
                dis[j]=graph[t][j];
            }

        }
    }
    cout<<res<<endl;
}
int main()
{
    memset(graph,0x3f,sizeof graph);
    memset(dis,0x3f,sizeof dis);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y,z;cin>>x>>y>>z;
        graph[x][y]=graph[y][x]=min(graph[x][y],z);
    }
    Prim();
}