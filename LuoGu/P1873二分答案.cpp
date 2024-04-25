#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int tree[N];int n;long long len,h;
long long cal()
{
	long long res=0;
	for(int i=1;i<=n;i++)if(tree[i]>h)res+=tree[i]-h;
	return res;
}
int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>len;
	for(int i=1;i<=n;i++)cin>>tree[i];
	int l=0,r=1e8;
	while(l+1<r)
	{
		h=l+r>>1;
		if(cal()>=len)l=h;
		else r=h;
	}
	cout<<l<<endl;
	return 0;
}