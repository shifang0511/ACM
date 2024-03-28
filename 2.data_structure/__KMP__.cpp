#include <string>
#include <iostream>

using namespace std;
const int N = 1000010;

string p, s;int a,b;
int ne[N];

int main()
{
    cin >>a>> p>>b >>  s;
    ne[0] = 0;
    ne[1] = 0;
    for (int i = 2,j=0; i < p.size() + 1; i++)
    {
        while (j && p[i - 1] != p[j]) j = ne[j];
        if (p[i - 1] == p[j]) j++;
        ne[i] = j;
    }
    for (int i = 0, j = 0; i < s.size(); i++)
    {
        while (j && s[i] != p[j]) j = ne[j];
        if (s[i] == p[j]) j++;
        if (j == p.size())
        {
            cout << i - j + 1 << " ";
            
        }
    }
    return 0;
}