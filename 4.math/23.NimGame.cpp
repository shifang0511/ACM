#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int n,res;
int a[N];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];res^=a[i];
    }
    if(!res)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}