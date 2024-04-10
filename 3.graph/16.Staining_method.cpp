#include<iostream>
#include<cstring>
using namespace std;
const int N=2e5+10;
int h[N],ne[N],e[N],color[N],idx;
int n,m;
void add(int a, int b)
{
    e[idx]=b;ne[idx]=h[a];h[a]=idx++;
}
bool dfs(int k,int c)
{
    color[k]=c;
    for(int i=h[k];i!=-1;i=ne[i])
    {
        int j=e[i];
        if(!color[j]){if(!dfs(j,3-c))return 0;}
        else if(color[j]==c)return 0;
    }
    return 1;
}
int main()
{
    memset(h,-1,sizeof h);
    cin>>n>>m;
    while(m--)
    {
        int u,v;cin>>u>>v;
        //if(u==v)continue;
        add(u,v);add(v,u);
    }
    for(int i = 1; i <= n; i++)//遍历点
    {
        if(!color[i])
        {
            if(!dfs(i, 1))
            {
                cout << "No" << endl;
                return 0;
            }

        }
    }
    cout << "Yes" << endl;
}
