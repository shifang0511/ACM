#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
const int N=1e5+10;
vector<PII> range;
int main()
{
    int n;cin>>n;
    int res=0,ed=-2e9;
    for(int i=0;i<n;i++)
    {
        int a,b;cin>>a>>b;
        range.push_back({b,a});
    }
    sort(range.begin(),range.end());
    for(auto r:range)
    {
        if(r.second>ed)
        {
            res++;
            ed=r.first;
        }
    }
    cout<<res<<endl;
}