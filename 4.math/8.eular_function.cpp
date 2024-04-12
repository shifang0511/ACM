#include<iostream>
#include<unordered_map>
using namespace std;
int eular(int n)
{
    int ans=n;
    unordered_map<int ,int>primes;
    if(n==1||n==2)return 1;
    for(int i=2;i<=n/i;i++)
    {
        while(n%i==0){
            primes[i]++;
            n/=i;
        }
    }
    if(n>1)primes[n]++;
    for(auto prime:primes)
    {
        int p=prime.first;
        ans=(long)ans/p*(p-1);
    }
    return ans;
}
int main()
{
    int m;cin>>m;
    while(m--)
    {
        int n;cin>>n;
        cout<<eular(n)<<endl;
    }
    return 0;
}