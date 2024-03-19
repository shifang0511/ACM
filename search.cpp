#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int N = 100010;int a[N];
int n,m;

int binarySearch(int a[], int l, int r, int target) {
    while (l <= r) {
        int mid = l + r +1>> 1;
        if (a[mid] == target) {
            return mid;
        } else if (a[mid] < target) {
            l = mid;
        } else {
            r = mid;
        }
    }
    return -1; 
}


int main() {
    cin>>n;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    cout<<binarySearch(a,0,n-1,2);
    return 0;
}
