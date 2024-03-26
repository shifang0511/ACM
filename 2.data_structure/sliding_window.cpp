#include<iostream>
using namespace std;


const int N=1e6+10;
int q[N],a[N],tt=-1,hh=0;//方便判断是否为空,tt是队尾，hh是队头
int n,k;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(i>q[hh]+k-1)hh++;
        while(hh<=tt&&a[q[tt]]>=a[i])tt--;
        q[++tt]=i;
        if(i+1>=k)cout<<a[q[hh]]<<' ';
    }
    cout<<endl;   
    hh = 0; tt = -1;             
    for(int i=0;i<n;i++)
    {
        if(i>q[hh]+k-1)hh++;
        while(hh<=tt&&a[q[tt]]<=a[i])tt--;
        q[++tt]=i;
        if(i+1>=k)cout<<a[q[hh]]<<' ';
    }
    return 0;
}
