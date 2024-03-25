#include<iostream>
using namespace std;

const int N=1e6+10;

int lowbit(int x)
{
    return x&-x;
}
int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int ans=0;int x;cin>>x;
        while(x)
        {
            x-=lowbit(x);
            ans++;
            }
        cout<<ans<<" ";
    }
    return 0;
}