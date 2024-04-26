#include<bits/stdc++.h>
using namespace std;
const int N=2010;
string s1,s2; 
int f[N][N];
int main()
{
    cin>>s1>>s2;
    int n=s1.size(),m=s2.size();
    s1=" "+s1;s2=" "+s2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i]==s2[j])f[i][j]=f[i-1][j-1]+1;
            f[i][j]=max(f[i-1][j],f[i][j-1]);
        }
    }
    cout<<abs(n-m)+m-f[n][m]<<endl;
}