#include<bits/stdc++.h>
using namespace std;
const int n=1010;
int v[n],w[n],dp[n];
int main()
{
    int N,V;cin>>N>>V;
    for(int i=1;i<=N;i++)cin>>v[i]>>w[i];
    for(int i=1;i<=N;i++)
    {
        for(int j = v[i] ; j<=V ;j++)
        {
            if(j>=v[i])dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
        }
    }
    cout<<dp[V];
}