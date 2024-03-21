#include<iostream>
using namespace std;
const int N=1e6+10;
int n,m;
int a[N],S[N]={0};


int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        S[i]=S[i-1]+a[i];
    }
    while(m--)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        printf("%d\n",S[r]-S[l-1]);
    }
    return 0;
}