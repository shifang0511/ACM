#include<iostream>
using namespace std;


double x,r,l=0;
int main()
{
    cin>>x;r=x;
    while(r-l>1e-8)
    {
        double mid =(r+l)/2;
        if(mid*mid>=x) r=mid;
        else l=mid;
    }
    printf("%.6f",l);
    return 0;
}