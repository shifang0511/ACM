#include<iostream>
using namespace std;


const int N=1e5+10;int n;
int q[N],tt=-1,hh=0;//方便判断是否为空

void push(int x){
    q[++tt]=x;
}
void pop(){
    hh++;
}
void empty(){
    if(tt>=hh) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
} 
void query()
{
    cout<<q[hh]<<endl;
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    cin>>n;
    while(n--)
    {
        string op;cin>>op;
        if(op=="push"){
            int x;cin>>x;
            push(x);
        }
        else if(op=="pop"){
            pop();
        }
        else if(op=="empty"){
            empty();
        }
        else{
            query();
        }
    }
    return 0;
}
