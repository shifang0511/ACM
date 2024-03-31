#include<iostream>
using namespace std;

const int N=1e5+10;
int head,e[N],ne[N],idx;

void init(){
    head=-1;
    idx=0;
}
void insert_head(int x)
{
    e[idx]=x;
    ne[idx]=head;
    head=idx;
    idx++;
}
//在第k个点的位置插入数
void add(int k, int x) {
    e[idx] = x;
    ne[idx] = ne[k-1]; // 新元素的next指针应该指向原来第k个元素
    ne[k-1] = idx; // 原来第k-1个元素的next指针应该指向新元素
    idx++;
}
//删除第k个点
void remove(int k) {
    if (k == 0) head = ne[head]; // 如果删除的是头元素，需要特殊处理
    else ne[k-1] = ne[k]; // 否则，将第k个元素的前一个元素的next指针指向第k个元素的下一个元素
}
int main()
{
    init();
    int n;cin>>n;
    while(n--)
    {
        char op;int x,k;cin>>op;
        if(op=='H'){
            scanf("%d",&x);
            insert_head(x);
        }
        else if(op=='D'){
            scanf("%d",&k);
            remove(k);
        }
        else{
            scanf("%d%d",&k,&x);
            add(k,x);
        }
    }
    for (int i = head; i != -1; i = ne[i]) cout << e[i] << ' ' ;
    cout << endl;
    return 0;
}