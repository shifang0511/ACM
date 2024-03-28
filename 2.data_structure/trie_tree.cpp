#include<iostream>
#include<string>
using namespace std;

const int N=1e5+10;
int son[N][26],cnt[N],idx;

void insert(string str)
{   int p=0;
    for(int i=0;str[i];i++){
        int u=str[i]-'a';
        if(!son[p][u])  son[p][u]=++idx;
        p=son[p][u];
    }
    cnt[p]++;
}
int query(string str)
{   int p=0;
    for(int i=0;str[i];i++){
        int u=str[i]-'a';
        if(!son[p][u])  return 0;
        p=son[p][u];
    }
    return cnt[p];
}
int main ()
{
    std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;cin>>n;char op;string str;
    while(n--){
        cin>>op;
        if(op=='I') cin>>str,insert(str);
        else if(op=='Q') cin>>str,cout<<query(str)<<endl;
    }
    return 0;
}