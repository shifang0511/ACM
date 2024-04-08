#include <iostream>
#include<cstring>
#include<string>
using namespace std;
const int N=1e5+3;
int he[N],ne[N],e[N],idx,n;
void insert(int x)
{
    int k=(x%N+N)%N;
    e[idx]=x;
    ne[idx]=he[k];
    he[k]=idx++;
}
void find(int x)
{
    int k=(x%N+N)%N;
    for(int i=he[k];i!=-1;i=ne[i]){
        if(e[i]==x){
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
}
int main()
{
    cin>>n;
    memset(he,-1,sizeof he);
    while(n--){
        string op;int x;
        cin>>op>>x;
        if(op=="I")insert(x);
        else if(op=="Q") find(x);
    }
    return 0;
}
