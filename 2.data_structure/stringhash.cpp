#include<iostream>9
#include<string>
using namespace std;
typedef unsigned long long ULL;
const int P=131,N=1e5+10;
ULL p[N];//h数组是哈希前缀和，p数组是p的次方数组

int main()
{
    int m;cin>>m;
    while(m--)
    {
    string str;cin>>str;int n=str.size();
    p[0] = 1;
    ULL t=0;
    for(int i=0;i<n;i++){
        p[i+1] = p[i]*P;
        t= t*P +str[i];      //前缀和求整个字符串的哈希值
    }
    }

}