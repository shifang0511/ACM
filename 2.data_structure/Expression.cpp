#include <iostream>
#include <stack>  
#include <string>
#include<unordered_map>  
using namespace std;
const int N=1e6+10;
stack<int> num;stack<char> op;int ans;
unordered_map<char,int> pr{{'+',1},{'-',1},{'*',2},{'/',2}};
void eval()
{
    int a = num.top();
    num.pop();

    int b = num.top();
    num.pop();

    char p = op.top();
    op.pop();

    int r = 0;
    if (p == '+') r = b + a;
    if (p == '-') r = b - a;
    if (p == '*') r = b * a;
    if (p == '/') r = b / a;

    num.push(r);
}
int main()
{
    string exp;cin>>exp;   
    for(int i=0;exp[i];i++)
    {
        if (exp[i]>='0'&&exp[i<='9'])
        {
            int x = 0, j = i;
            while (j < exp.size() && isdigit(exp[j]))
            {
                x = x * 10 + exp[j] - '0';
                j++;
            }
            num.push(x);
            i = j - 1;
        }
        else if(exp[i]=='(')op.push(exp[i]);
        else if(exp[i]==')'){
            while(op.top()!='(')eval();
        op.pop();
        }
        else{
            while(op.size()&&pr[op.top()]>=pr[exp[i]])eval();
            op.push(exp[i]);
        }
    }
     while (op.size()) eval();
    cout << num.top() << endl;
    system("pause");
    return 0;
}
