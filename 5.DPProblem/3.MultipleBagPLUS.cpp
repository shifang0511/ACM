#include<bits/stdc++.h>
using namespace std;
const int N=2e4;
int v[N],w[N];
int dp[2010],cnt;
int main()
{
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++){
        int a,b,s;
        cin>>a>>b>>s;
        int k=1;
        while(k<=s)
        {
            cnt++;
            v[cnt]=a*k;w[cnt]=b*k;
            s-=k;k*=2;
        }
        if(s){
            cnt++;
            v[cnt]=a*s;w[cnt]=b*s;
        }
    }
    n=cnt;
    for(int i=1;i<=n;i++)
    {
        for(int j=m;j>=v[i];j--)
        {
            dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
        }
    }
    cout<<dp[m]<<endl;
    return 0;
}
