#include<iostream>
#include<cstring>
using namespace std;
const int N=510,M=1e5+10;
int n1,n2,m;
int h[N],e[M],ne[M],idx;
int match[N];
bool st[N];
void add(int a,int b)
{
    e[idx]=b;ne[idx]=h[a];h[a]=idx++;
}
bool find(int x){
    for(int i=h[x];i!=-1;i=ne[i])
    {
        int j=e[i];
        if(!st[j]){
            st[j]=1;
            if(!match[j]||find(match[j]))
            {
                match[j]=x;
                return 1;
            }
        }
    }
    return false;
}
int main()
{
    cin>>n1>>n2>>m;
    memset(h,-1,sizeof h);
    while(m--)
    {
        int a,b;cin>>a>>b;
        add(a,b);
    }
    int res=0;
    for(int i=1;i<=n1;i++){
        memset(st,0,sizeof st);
        if(find(i))res++;
    }
    cout<<res<<endl;
    return 0;
}
