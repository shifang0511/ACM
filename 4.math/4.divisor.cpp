#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int  main()
{
    int m;cin>>m;
    while(m--)
    {
        int n;cin>>n;
        vector<int> div;
        for(int i=1;i<=n/i;i++)
        {
            if(n%i==0){
                if(i==n/i){div.push_back(i);break;}
                div.push_back(i),div.push_back(n/i);
            }
        }
        sort(div.begin(),div.end());
        for(auto di :div)cout<<di<<" ";
        cout<<endl;
    }
}