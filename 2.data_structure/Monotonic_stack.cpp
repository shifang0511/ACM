#include<iostream>
using namespace std;

const int N=1e6+10;
int a[N],sk[N],tt=0,n=0;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        while(tt&&a[sk[tt-1]]>=a[i]) tt--;
        if(tt) cout<<a[sk[tt-1]]<<' ';
        else cout<<-1<<' ';
        sk[tt++]=i;
    }
    return 0;
}