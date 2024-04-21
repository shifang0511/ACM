#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
long long t[N],S[N];
int main()
{
    int n;cin>>n;
    for(int i=1;i<=n;i++) cin>>t[i];
    sort(t+1,t+n+1);long long ans=0;
    for(int i=1;i<=n;i++){S[i]=S[i-1]+t[i];ans+=S[i-1];}
    cout<<ans<<endl;
}