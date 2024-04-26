#include<bits/stdc++.h>
using namespace std;
#define PII pair<int,int>
priority_queue<int,vector<int>,greater<int>>heap;
vector<PII> ranges;
int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;cin>>a>>b;
        ranges.push_back({a,b});
    }//读入
    sort(ranges.begin(),ranges.end());
    for(auto r:ranges)
    {
        if(heap.empty()||heap.top()>=r.first)heap.push(r.second);
        else{
            heap.pop();heap.push(r.second);
        }
    }
    cout<<heap.size()<<endl;
}