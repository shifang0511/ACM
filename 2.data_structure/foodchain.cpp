#include<iostream>  
#include<string>
using namespace std;

const int N = 1e5 + 10;
int ans=0,n,m;
int p[N],d[N];
int ff(int x){
    if(p[x]!=x){
        int temp=ff(p[x]);
        d[x]+=d[p[x]];d[x]%=3;
        p[x]=temp;
    }
    return p[x];
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)p[i]=i;
    while(m--){
        int t=0,x,y,op;
        cin>>op>>x>>y;
        if(op==2)t=1;
        int fx=ff(x),fy=ff(y);
        if(x>n||y>n)ans++;
        else if (fy == fx && ((d[x] - d[y]) % 3 + 3) % 3 != t)
        {
            ans++;   
        }
        else if (fx != fy)
        {
            p[fx] = fy;
            d[fx] = d[y] - d[x] + t;
        }
    }
        cout<<ans<<endl;
        return 0;
}
