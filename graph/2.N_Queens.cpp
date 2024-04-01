#include<iostream>
using namespace std;
const int N=11;
char path[N][N],n;
bool row[N],dg[2*N],udg[2*N];
void dfs(int x){
    if(x==n){
        for(int i=0;i<n;i++)
            for(int j=0;i<n;i++)cout<<path[i][j];
        cout<<endl;
        return ;
    }
    for(int i=1;i<=n;i++){
        if(!row[i]&&!dg[i]&&!udg[i]){
            path[x][i]='Q';
            row[i]=dg[i+x]=udg[n-i-x]=true;
            dfs(x+1);
            row[i]=dg[i+x]=udg[n-i-x]=false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)path[i][j]='.';
    dfs(0);
    return 0;
}