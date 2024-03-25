#include<iostream>
using namespace std;


const int N=1e5+10;int n;
int sk[N],tt=-1;//方便判断是否为空

void push(int x){
    sk[++tt]=x;
}
void pop(){
    tt--;
}
void empty(){
    if(tt==-1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
} 
void query()
{
    cout<<sk[tt]<<endl;
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
