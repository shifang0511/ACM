//多重背包问题的朴素解法
#include<bits/stdc++.h>
using namespace std;
const int N=110;
int v[N],w[N],s[N];
int dp[N][N];
int main()
{
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>v[i]>>w[i]>>s[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            for(int k=0;k<=s[i]&&k*v[i]<=j;k++)
                dp[i][j]=max(dp[i][j],dp[i-1][j-k*v[i]]+w[i]*k);
        }
    }
    cout<<dp[n][m]<<endl;
    return 0;
}
