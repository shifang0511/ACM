#include <bits/stdC++.h>
using namespace std;
const int N=1e6+10;int a[N];int temp[N];
void merge_sort(int a[],int l,int r)
{
    
    if(l>=r)return ;
    int n=l+r>>1;
    merge_sort(a,l,n);merge_sort(a,n+1,r);
    int k=0,i=l,j=n+1;
    while(i<=n&&j<=r)
    {
        if(a[i]<=a[j])temp[k++]=a[i++];
        else temp[k++]=a[j++];
    }
    while(i<=n)temp[k++]=a[i++];
    while(j<=r)temp[k++]=a[j++];
    for(int i=l;i<=r;i++)a[i]=temp[i-l];}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    system("pause");
    return 0;
}