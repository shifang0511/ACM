#include<iostream>9
#include<string>
using namespace std;
typedef unsigned long long ULL;
const int P=131,N=1e5+10;
ULL h[N],p[N];//h数组是哈希前缀和，p数组是p的次方数组
int query(int l,int r){
    return h[r]-h[l-1]*p[r-l+1];
}
int main()
{
    int n,m;cin>>n>>m;
    string str;cin>>str;
    p[0] = 1;
    h[0] = 0;
    for(int i=0;i<n;i++){
        p[i+1] = p[i]*P;
        h[i+1] = h[i]*P +str[i];      //前缀和求整个字符串的哈希值
    }
    while(m--)
    {
        int l1,l2,r1,r2;cin>>l1>>r1>>l2>>r2;
        if(query(l1,r1)==query(l2,r2))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}