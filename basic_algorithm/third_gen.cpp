#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std ;
int main()
{
    double x;cin>>x;
    double l=-fabs(x),r=fabs(x);
    if(x<1&&x>-1)
    {
        l=-1,r=1;
    }
    while(r-l>1e-8)
    {
        double y=(r+l)/2;
        if(y*y*y<x)l=y;
        else r=y;
    }
    cout<<fixed<<setprecision(6)<<l<<endl;
    return 0;
}