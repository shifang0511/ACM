#include<iostream>
using namespace std;

bool is_prime(int n)
{
    if(n<2)return false;
    if(n==2||n==3)return true;
    for(int i=2;i<=n/i;i++)if(n%i==0)return false;
    return true;
}

int main()
{
    int m;cin>>m;
    while(m--)
    {
        int n;cin>>n;
        if(is_prime(n))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}