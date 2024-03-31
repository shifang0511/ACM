#include<iostream>
#include<string>
using namespace std;
const int N=1e5+10;
int p[N],num[N],n,m;string op;
int a,b;
int find(int x)
{
    if(p[x]!=x)p[x]=find(p[x]);
    return p[x];
}
void merge(int a,int b){
    if(find(a)==find(b)) return;
    num[find(b)]+=num[find(a)];
    p[find(a)]=find(b);
    return;
}
int Query(int x){
    return num[find(x)];
}
int main()
{
ios::sync_with_stdio(false);cin.tie(0); 
cin>>n>>m;
for(int i=1;i<=n;i++) {p[i]=i;N[i]=1;}
while(m--){
cin>>op;
if(op[0]=='C'){
    cin>>a>>b;
    merge(a,b);
}
else if(op=="Q1"){
    cin>>a>>b;
    if(find(a)==find(b)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
else if(op=="Q2"){
    cin>>a;
    cout<<Query(a)<<endl;
}
}
return 0;
}
