#include<iostream>  
#include<string>
using namespace std;

const int N = 1e5 + 10;
int ans,n,m, op;int x,y;
int p[N],d[N];
int find(int x){
    if(p[x]!=x){
        d[x]+=d[p[x]];d[x]%=3;
        p[x]=find(p[x]);
    }
    return p[x];
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)p[i]=i;
    while(m--){
        cin>>op>>x>>y;
        if(x>n||y>n||x==y){
            ans++;
            continue;
        }
        else if(op==1){

        }
    }
}