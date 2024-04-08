#include<iostream>
#include<cstring>
#include <algorithm>
#include<queue>
using namespace std;

const int N=1e5+10;
int n,m;
int h[N],e[N],ne[N],idx,dis[N];
bool st[N];
void add (int a, int b){
    e[idx] = b; ne[idx]=h[a]; h[a]=idx++;
}
int bfs(int n){
    queue<int>q;
    q.push(1);
    st[1]=1;
    dis[1]=0;
    while(q.size()){
        int k=q.front();
        q.pop();
        if(k==n)return dis[k];
        for(int i=h[k];i!=-1;i=ne[i]){
            int j=e[i];
            if(!st[j]){
                dis[j]=dis[k]+1;
                q.push(j);
                st[j] = 1;
            }
        }
    }
    return -1;
}
int main()
{
    cin>>n>>m;
    memset(h,-1,sizeof h);
    memset(dis,-1,sizeof dis);
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        add(a,b);
    }
    cout<<bfs(n);
    //cout<<dis[n];
}