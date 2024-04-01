#include<iostream>
using namespace std;
const int N=10;
int path[N],n;bool st[N];
void dfs(int x){
    if(x==n){
        for(int i=0;i<n;i++)cout<<path[i]<<' ';
        cout<<endl;
        return ;
    }
    for(int i=1;i<=n;i++){
        if(!st[i]){
            path[x]=i;st[i]=true;
            dfs(x+1);
            st[i]=0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    cin>>n;
    dfs(0);
    return 0;
}