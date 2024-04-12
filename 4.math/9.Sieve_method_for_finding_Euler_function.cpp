#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
unordered_map<int ,int>prime;
const int N=1e6+10;
vector<int> primes;
int phi[N];
bool st[N];    long long res=0;
int main()
{
    int n;cin>>n;phi[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(!st[i]){primes.push_back(i);phi[i]=i-1;}
        for(int j=0;primes[j]<=n/i;j++)
        {
            st[primes[j]*i]=1;
            if(i%primes[j]==0){
                phi[primes[j]*i]=phi[i]*primes[j];
                break;
            };
            phi[primes[j]*i]=phi[i]*(primes[j]-1);
        }
    }
    for(int i=1;i<=n;i++)res+=phi[i];
    cout<<res<<endl;
}