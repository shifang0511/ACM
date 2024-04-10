#include<iostream>

using namespace std;
const int N=1e6+10;
int cnt,prime[N];
bool st[N];
void getprime(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(!st[i])
        {
            prime[++cnt]=i;
            for(int j=i;j<=n/i;j++)st[j*i]=1;
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