#include<iostream>
#include<unordered_map>
using namespace std;
typedef long long ll;
int n,m;
const int mod=1e9+7;
unordered_map<int,int> primes;
int main()
{
    cin>>m;
    while(m--)
    {
        cin>>n;
        for (int i=2;i<=n/i;i++)
        {
            while(n%i==0)
            {
                n/=i;primes[i]++;
            }
        }
        if(n>1)primes[n]++;
    }
    ll ans=1;
    for(auto p :primes)
    {
        ll t=1;
        for(int i=0;i<p.second;i++)
        {
            t=(t*p.first+1)%mod;
        }
        ans=ans*t%mod;
    }
    cout<<ans<<endl;
}
