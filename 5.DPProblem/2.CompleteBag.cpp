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
            for(int k=0;k*v[i]<=j;k++)
            {
                dp[i][j]=max(dp[i-1][j-v[i]*k]+w[i]*k,dp[i][j]);
            }
        }
    }
    cout<<dp[N][V];
}