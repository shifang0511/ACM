#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef pair <int,int> PII;
vector<PII> ans,alls;
int n,l,r;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>l>>r;
        alls.push_back({l,r});
    }
    sort(alls.begin(),alls.end());
    if(alls.empty())cout<<0<<endl;
    else{
        int st=alls[0].first,ed=alls[0].second;
        for(auto item:alls)
        {
            if(ed<item.first){
                ans.push_back({st,ed});
                st=item.first;
                ed=item.second;
            }
            else ed=max(ed,item.second);
        }
        ans.push_back({st,ed});
    }
    cout<<ans.size()<<endl;
    return 0;
}