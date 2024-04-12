#include<bits/stdc++.h>
using namespace std;
int exgcd(int a,int b,int& x,int& y)
{
    if(b==0){
        x=1;y=0;
        return a;
    }
    int x1,y1;
    int d=exgcd(b,a%b,x1,y1);
    x = y1, y = x1 - a/b*y1;
    return d;
}

int main()
{
    int m;cin>>m;
    while(m--)
    {
        int a,b,m;
        cin>>a>>b>>m;
        int x,y;
        int d=exgcd(a,m,x,y);
        if(d%m)cout<<"impossible"<<endl;
        else cout<<(long long)x*(b/d)%m<<endl;
    }
    return 0;
}   