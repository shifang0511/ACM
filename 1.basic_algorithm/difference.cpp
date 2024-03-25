#include<iostream>
using namespace std;

const int N=1e6+10;
int a[N],d[N],n,m;

void cal(int a[],int l,int r,int c)
{
    a[l]+=c;
    a[r+1]-=c;
}

int main()
{
    cin>>n>>m;a[0]=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        d[i]=a[i]-a[i-1];
    }
    for(int i=1;i<=m;i++)
    {
        int l,r,c;
        scanf("%d%d%d",&l,&r,&c);
        cal(d,l,r,c);
    }
    for (int i = 1; i <= n; i++)
    {
        a[i] = d[i] + a[i - 1];    //前缀和运算
        printf("%d ", a[i]);
    }
    return 0;
}