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
        int a,b,x,y;
        cin>>a>>b;
        exgcd(a,b,x,y);
        cout<<x<<" "<<y<<endl;
    }

}   