#include<iostream>
#include<cmath>
using namespace std; 
int dp[1010][1010];
int w[1010];int v[1010];
int main()
{
    int N,V;cin>>N>>V;
    for(int i=1;i<=N;i++)cin>>v[i]>>w[i];
    for(int i=1;i<=N;i++)
    {
        for(int j=0;j<=V;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j>=v[i])dp[i][j]=max(dp[i-1][j],dp[i-1][j-v[i]]+w[i]);
        }
    }
    cout<<dp[N][V]<<endl;

}