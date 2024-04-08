#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;

const int N=1e5+10;
int n,m;
int h[N],e[N],ne[N],idx;
int q[N],hh=0,tt=-1;
int d[N];//入度
void add (int a, int b){
    e[idx] = b; ne[idx]=h[a]; h[a]=idx++;
}
bool topsort()
{
    for(int i=1;i<=n;i++){
        if(!d[i])q[++tt]=i;//注意，有编号的点是从1开始的
    }
    while(tt>=hh){
        int a=q[hh++];
        for(int i=h[a];i!=-1;i=ne[i]){
            int b=e[i];
            d[b]--;
            if(!d[b])q[++tt]=b;
        }
    }
    if(tt==n-1)return 1;
    return 0;
}
int main()
{
    cin>>n>>m;
    memset(h,-1,sizeof h);
    while(m--)
    {
        int a,b;cin>>a>>b;
        add(a,b);d[b]++;
    }
    if(topsort())
    {
        for(int i=0;i<n;i++)cout<<q[i]<<' ';
    }
    else cout<<-1<<endl;
}