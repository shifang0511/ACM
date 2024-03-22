#include<iostream>>
using namespace std;

const int N=1e5+10;
int a[N],n,num[N];


int main()
{
    cin>>n;for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int res=1;
    for(int i=0,j=0;i<n;i++)
    {
        num[a[i]]++;
        while(j<i)
        {
        if(num[i]>=2)num[a[j++]]--;
        else break;
        }
        res=max(res,i-j+1);
    }
    return 0;
}
