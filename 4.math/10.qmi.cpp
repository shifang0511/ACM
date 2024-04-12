#include<iostream>
using namespace std;
typedef long long ll;
ll quickmi(ll a,int  b,int p)
{
    ll res=1;
    while(b)
    {
        if(b&1)res=res*a%p;
        b>>=1;
        a=a*a%p;
    }
    return res;
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(false);
    int m;cin>>m;
    while(m--)
    {
        ll a;int b,p;
        cin>>a>>b>>p;
        cout<<quickmi(a,b,p)<<endl;
    }
}