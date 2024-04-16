#include<iostream>
#include<cmath>
using namespace std; 
int dp[1010];
int w[1010];int v[1010];
int main()
{
    int N,V;cin>>N>>V;
    for(int i=1;i<=N;i++)cin>>v[i]>>w[i];
    for(int i=1;i<=N;i++)
    {
        for(int j=V;j>=v[i];j--)dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
    }
    cout<<dp[V]<<endl;
    return 0;
}