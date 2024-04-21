#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+10;
struct cow
{
    ll w;
    ll s;
    const bool operator <(const cow &r)
    {
        return this->s+this->w<r.s+r.w;
    }
}Cow[N];

int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        ll a,b;cin>>a>>b;
        Cow[i]={a,b};
    }
    sort(Cow,Cow+n);
    ll sum=0,res=-1e9;
    for(int i=0;i<n;i++)
    {
        res=max(res,sum-Cow[i].s);
        sum+=Cow[i].w;
    }
    cout<<res<<endl;
}