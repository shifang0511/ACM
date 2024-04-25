#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int N = 100010;int a[N];
int n,m;

int binarySearch(int a[], int l, int r, int target) {
    while (l < r)
    {
        int mid = l + r >> 1;
        if (check(mid)) r = mid;    // check()判断mid是否满足性质
        else l = mid + 1;
    }
    return l;
}
int bsearch_2(int l, int r)
{
    while (l < r)
    {
        int mid = l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    return l;
}

int main() {
    cin>>n;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    cout<<binarySearch(a,0,n-1,2);
    return 0;
}
