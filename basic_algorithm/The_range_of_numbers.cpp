#include<iostream>
#include <algorithm>
using namespace std;

const int N=1e5+10;int n,q,x,a[N];
int fl(int l,int r,int x)
{
    while(l<r)
    {
        int mid=l+r>>1;
        if(a[mid]>=x)r=mid;
        else l=mid+1;
    }
    return l;
}
int fr(int l,int r,int x)
{
    while(l<r)
    {
        int mid=l+r+1>>1;
        if(a[mid]<=x)l=mid;
        else r=mid-1;
    }
    return r;
}
int main()
{
    cin>>n>>q;
    for(int i=0;i<n;i++)cin>>a[i];
    while(q--)
    {
        cin>>x;
        int l = fl(0, n - 1, x);//查找左边界 并返回下标l
        if (a[l]!=x) cout <<"-1 -1"<<endl;//如果找不到  返回-1 -1
        else {
            cout << l << ' '; //如果找到了  输出左下标
            cout << fr(0, n - 1, x) << endl; //输出右下标
        }
    }
    
    return 0;
}