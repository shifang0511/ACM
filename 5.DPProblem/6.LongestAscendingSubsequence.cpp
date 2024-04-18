#include<bits/stdc++.h>
using namespace std;
const int N=101000;
int dp[N],a[N],n;
vector<int> stk;
 main()
{
    cin>>n;
    for(int i=1;i<=n;i++){cin>>a[i];dp[i]=1;}
    stk.push_back(a[0]);
    for(int i=1;i<=n;i++)
    {
        if (a[i] > stk.back())//如果该元素大于栈顶元素,将该元素入栈
            stk.push_back(a[i]);
        else//替换掉第一个大于或者等于这个数字的那个数
            *lower_bound(stk.begin(), stk.end(), a[i]) = a[i];
    }
    cout<<stk.size()<<endl;
}