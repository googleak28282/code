//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define maxn 1000010
ll a[maxn],c[maxn],tot,M;
int main()
{
	int n;
	while(cin>>n)
	{
		tot=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			tot+=a[i];
		}
		M=tot/n;
		c[0]=0;
		for(int i=1;i<n;i++)
		{
			c[i]=c[i-1]+a[i]-M;
		}
		sort(c,c+n);
		ll x1=c[n/2];
		ll ans=0;
		for(int i=0;i<n;i++)
		{
			ans+=abs(x1-c[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}

