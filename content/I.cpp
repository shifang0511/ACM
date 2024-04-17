#include<iostream>
#include<vector>
using namespace std;
typedef pair<int,int> PII;
int T;
int main()
{
    cin>>T;
    while(T--)
    {
        vector<PII> ans;
        vector<int> v0,v1;
        int n;cin>>n;
        for(int i=1;i<=n;i++)
        {
            char c;cin>>c;
            if(c=='0')v0.push_back(i);
            else v1.push_back(i);
        }
        if(v0.size()==0){
            for(int i=1;i<n;i++)cout<<i<<" "<<i+1<<endl;
            cout<<n<<" "<<1<<endl;
        }
        else if(v1.size()==0){
            for(int i=1;i<n;i++)cout<<i<<" "<<i+1<<endl;
            cout<<n<<" "<<1<<endl;
        }
        else if(v0.size()==1)
        {
            for(int i=0;i<v1.size();i++)
            {
                cout<<v0[0]<<" "<<v1[i]<<endl;
            }
            cout<<v1[0]<<" "<<v1[1]<<endl;
        }
        else if(v1.size()==1)
        {
            for(int i=0;i<v0.size();i++)
            {
                cout<<v1[0]<<" "<<v0[i]<<endl;
            }
            cout<<v0[0]<<" "<<v0[1]<<endl;
        }
        else {
            int i,j,k;int t=min(v0.size(),v1.size());
            while (i<t&&j<t)
            {
                if(k%2==0)ans.push_back({v0[i++],v1[j]});
                else ans.push_back({v0[i],v1[j++]});
                k++;
            }
            if(i!=j)i--;
            ans.push_back({v0[0],v1[j]});
            while(i<v0.size())if(v0[i])ans.push_back({v0[i++],v1[j]});
            while(j<v1.size())if(v1[j])ans.push_back({v0[i],v1[j++]});
        }
        for(auto a:ans)if(a.first&&a.second)cout<<a.first<<" "<<a.second<<endl;
    }
}