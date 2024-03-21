#include<iostream>
using namespace std;

long long res=0;const int N=1e6+10;
int a[N];
void find_ans(int a[],int l,int r)
{
    if(l>=r) return ;
    int temp[r - l + 1];
    int x=l+r>>1;
    find_ans(a,l,x);find_ans(a,x+1,r);
    int i=l,j=x+1,k=0;
    while(i<=x&&j<=r)
    {
        if(a[i]<=a[j])temp[k++]=a[i++];
        else {
            temp[k++]=a[j++];
            res+=x-i+1;
        }
    }
    while(i<=x)temp[k++]=a[i++];
    while(j<=r)temp[k++]=a[j++];
    for(int i=l;i<=r;i++)a[i]=temp[i-l];
}
int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    find_ans(a,0,n-1);
    cout<<res<<endl;
}