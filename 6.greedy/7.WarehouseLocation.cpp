#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int dis[N];
int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>dis[i];
    sort(dis,dis+n);
    int x=n/2,ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=abs(dis[x]-dis[i]);
    }
    cout<<ans<<endl;
}