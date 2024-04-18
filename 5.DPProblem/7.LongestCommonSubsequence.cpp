#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=1010;
char s1[N],s2[N];
int dp[N][N];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>s1[i];
    for(int i=1;i<=m;i++)cin>>s2[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i]==s2[j])dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<dp[n][m]<<endl;
}