#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    return b?gcd(b,a%b):a;
}
int main()
{
    int m;cin>>m;
    while(m--)
    {
        int a,b;cin>>a>>b;
        cout<<gcd(a,b)<<endl;
    }
}