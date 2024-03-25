#include<iostream>
using namespace std;

const int N=1e5+10;
int head,e[N],l[N],r[N],idx;

void init(){
   r[0]=1;l[1]=0;
   idx=2;
}//0和1只作为边界，没有具体数值
void add(int k,int x)
{
    e[idx]=x;
    l[idx]=k,r[idx]=r[k];
    l[r[k]]=idx,r[k]=idx;
    idx++;
}
void remove(int k) {
    r[l[k]]=r[k];
    l[r[k]]=l[k];
}
int n,x,k;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    init();
    cin>>n;
    while(n--)
    {
        string op;cin>>op;
        if(op=="L"){
            cin >> x;
            add(0, x);//在指针为零的地方插入
        }
        else if(op=="R"){
            cin >> x;
            add(l[1], x);
        }
        else if(op=="D"){
            cin>>k;
            remove(k+1);//第k个数的位置是k+1
        }
        else if(op=="IL"){
            cin >> k >> x;
            add(l[k + 1], x);
        }
        else{
            cin >> k >> x;
            add(k + 1, x);
        }
    }
    for (int i = r[0]; i != 1; i = r[i]) cout << e[i] << ' ' ;
    cout << endl;
    return 0;
}