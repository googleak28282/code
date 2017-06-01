//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,arr[2000005];
int bit[2000010];
int sum(int i)
{
	int s=0;
	while(i>0)
	{
		s+=bit[i];
		i-=i&(-i);
	}
	return s;
}
void add(int i,int x)
{
	while(i<=n)
	{
		bit[i]+=x;
		i+=i&(-i);
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	ll ans=0;
	for(int j=0;j<n;j++)
	{
		ans+=j-sum(arr[j]);
		add(arr[j],1);
	}
	cout<<ans<<endl;
	return 0;
}

