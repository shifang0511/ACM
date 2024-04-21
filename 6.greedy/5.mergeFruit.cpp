#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    priority_queue<int,vector<int>,greater<int>>heap;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;heap.push(x);
    }
    int res=0;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        a=heap.top();heap.pop();
        b=heap.top();heap.pop();
        int x=a+b;
        res+=x;heap.push(x);
    }
    cout<<res<<endl;
}