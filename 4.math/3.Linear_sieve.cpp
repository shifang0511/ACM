#include<iostream>

using namespace std;
const int N=1e6+10;
int cnt,prime[N];
bool st[N];
void getprime(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(!st[i])prime[cnt++]=i;
        for(int j=0;prime[j]<=n/i;j++)//primes[j]<=n/i:变形一下得到——primes[j]*i<=n,把大于n的合数都筛了就没啥意义了
        {
            st[i*prime[j]]=1;
            if(i%prime[j]==0)break;
        }
    }
}

int main()
{
    int n;cin>>n;
    getprime(n);
    cout<<cnt;
    return 0;
}