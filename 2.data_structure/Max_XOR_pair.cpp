#include<iostream>
#include<string>
using namespace std;
const int N=1e5+10,M=31*N;
int n;int a[N];
int son[M][2],idx=0;

void insert(int x)
{   int p=0;
    for(int i=30;i>=0;i--){
        int u=x>>i&1;
        if(!son[p][u])  son[p][u]=++idx;
        p=son[p][u];
    }
}
int search(int x)
{   int p=0,res=0;
    for(int i=30;i>=0;i--){
        int u=x>>i&1;;
        if(son[p][!u])  {
            res=res*2+1;
            p=son[p][!u];
        }
        else{
            res*=2;
            p=son[p][u];
        }
    }
    return res;
}
int main ()
{
    int res=0;
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        insert(a[i]);
    }
    for(int i=0;i<n;i++)res=max(res,search(a[i]));
    cout<<res<<endl;
    return 0;
}