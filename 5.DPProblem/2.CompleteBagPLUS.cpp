#include<bits/stdc++.h>
using namespace std;
const int n=1010;
int v[n],w[n],dp[n][n];
int main()
{
    int N,V;cin>>N>>V;
    for(int i=1;i<=N;i++)cin>>v[i]>>w[i];
    for(int i=1;i<=N;i++)
    {
        for(int j=0;j<=V;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j>=v[i])dp[i][j]=max(dp[i][j],dp[i][j-v[i]]+w[i]);
        }
    }
    cout<<dp[N][V];
}