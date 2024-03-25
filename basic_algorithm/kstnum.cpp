#include<iostream>
using namespace std;
const int N=1e6+10;
int n,k;
int a[N];
int quick_sort(int a[],int l,int r,int k)
{
    if(l>=r)return a[l];
    int x=a[l+r>>1],i=l-1,j=r+1;
    while(i<j)
    {
        do i++;while(a[i]<x);
        do j--;while(a[j]>x);
        if(i<j)swap(a[i],a[j]);
    }
    if(j+1>k)return quick_sort(a,l,j,k);
    else return quick_sort(a,j+1,r,k);
    
}
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int res=quick_sort(a,0,n-1,k);
    printf("%d",res);
    return 0;
}