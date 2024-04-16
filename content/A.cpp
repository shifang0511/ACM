#include<bits/stdc++.h>
using namespace std;
int n,q,cnt;
const int N=2e5+10;
int dis[N];
int main()
{
    cin>>n>>q;
    while(n--)
    {
        int x;cin>>x;
        dis[cnt++]=x;
    }
    sort(dis,dis+cnt-1);
    while(q--)
    {
        int p=0,k=0;cin>>p>>k;
        int l=0, r=max(abs(p-dis[0]),abs(p-dis[cnt-1]));//初始半径
        while(r-l>1)
        {
            int t=(l+r)/2;
            int tr=p+t<,tl=p-r>0?p-r:0;
            int num=lower_bound(dis,dis+cnt-1,tr)-lower_bound(dis,dis+cnt-1,tl);//区间内点的数量
            if(num>k)r=t;
            else l=t;
        }
        cout<<r<<endl;
    }
}