#include<iostream>
#include<string>
using namespace std;
const int N=1e5+10;int n,k,x,idx,siz;
string op;
int heap[N],hp[N],ph[N];
void heap_swap(int x,int y){
    swap(ph[hp[x]],ph[hp[y]]);
    swap(hp[x],hp[y]);
    swap(heap[x],heap[y]);
}
void down(int u)
{
    int t=u;
    if(2*u<=siz&&heap[2*u]<heap[t]) t=2*u;
    if(2*u+1<=siz&&heap[2*u+1]<heap[t]) t=2*u+1;
    if(t!=u){
        heap_swap(u,t);
        down(t);
    }
}
void up(int u){
    while(u/2&&heap[u/2]>heap[u]){
        heap_swap(u,u/2);
        u/=2;
    }
}
void insert(int x)
{
    idx++;siz++;
    ph[idx] = siz; //堆尾插入，故第idx次插入的元素下标为siz
    hp[siz] = idx; //当前下标为siz的元素为第idx次插入
    heap[siz] = x; //当前插入的值，即h[ph[idx]=x
    up(siz);
}
void del(int x){
    heap_swap(x,siz--);
    down(x);up(x);
}
void change(int k,int x){
    heap[k]=x;
    down(k);up(k);
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    cin>>n;
    while(n--){
       cin>>op;
       if(op=="I"){
            cin>>x;
            insert(x);
       }
       else if(op=="PM")cout<<heap[1]<<endl;
       else if(op=="DM")del(1);
       else if(op=="D"){
        int k;cin>>k;del(ph[k]);
       }
       else if(op=="C"){
        int k,x;cin>>k>>x;change(ph[k],x);
       }
    }
    system("pause");
    return 0;
}