#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<int ,int> primes;
const int P=1e9+7;
int m,n;
int main()
{
    long long res=1;
    cin>>m;
    while(m--)
    {
    cin>>n;
    for(int i=2;i<=n/i;i++)
    {
        while(n%i==0)
        {
            n/=i;primes[i]++;
        }
    }
    if(n>1)primes[n]++;
    }
    for(auto p :primes){
        res=res*(p.second+1)%P;
    }
    cout<<res;
    return 0;
}