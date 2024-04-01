#include<iostream>
#include<string>
using namespace std;
const int N=1e5+10;
int p[N],n,m;string op;
int a,b;
int find(int x)
{
    if(p[x]!=x)p[x]=find(p[x]);
    return p[x];
}
void merge(int a,int b){
    if(find(a)==find(b)) return;
    p[find(a)]=find(b);
    return;
}
int main()
{
ios::sync_with_stdio(false);cin.tie(0); 
cin>>n>>m;
for(int i=1;i<=n;i++) p[i]=i;
while(m--){
cin>>op;
if(op[0]=='M'){
    cin>>a>>b;
    merge(a,b);
}
else if(op[0]=='Q'){
    cin>>a>>b;
    if(find(a)==find(b)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
}
return 0;
}
