//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	if(m<n)
	{
		swap(m,n);
	}
	long long ans=1;
	for(long long i=n;i<=m;i++)
	{
		ans*=i;
	}
	cout<<ans<<endl;
	return 0;
}

