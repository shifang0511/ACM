#include <iostream>
#include<queue>
#include<cstring>
using namespace std;
const int N=1e2+10;
typedef pair<int,int> PII;
int maze[N][N],dis[N][N];    int n,m;
int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
void bfs(int a,int b)
{
    queue<PII> q;
    q.push({a,b});
    maze[a][b]=1;
    while(!q.empty())
    {
        PII start=q.front();q.pop();
        for(int i=0;i<4;i++){
            int x=start.first+dx[i];
            int y=start.second+dy[i];
            if(!maze[x][y]){
                maze[x][y]=1;
                dis[x][y]=dis[start.first][start.second]+1;
                q.push({x,y});
            }
        }
    }
    cout<<dis[n][m];
};
int main()
{
    cin>>n>>m;
    memset(maze,0x3f,sizeof maze);
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>maze[i][j];
    bfs(1,1);
}