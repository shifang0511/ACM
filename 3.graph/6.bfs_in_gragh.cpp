#include<iostream>
#include<cstring>
#include <algorithm>
#include<queue>
using namespace std;

const int N=1e5+10,M=N*2;int ans=N;
int n,m;
int h[N],e[M],ne[M],idx,dis[N];
bool st[N];
void add (int a, int b){
    e[idx] = b; ne[idx]=h[a]; h[a]=idx++;
}
int bfs(int n){
    queue<int>q;q.push(1);
    memset(dis,-1,sizeof dis);
    while(!q.empty()){
        int k=q.front();q.pop();
        if(k==n)return dis[k];
        for(int i=h[k];i!=-1;i=ne[i]){
            int j=e[i];
            if(st[j]){
                dis[j]=dis[k]+1;
                q.push(j);
            }
        }
    }
    return -1;
}
int main()
{
    cin>>n>>m;
    memset(h,-1,sizeof h);
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        add(a,b);add(b,a);
    }
    cout<<bfs(n);
}