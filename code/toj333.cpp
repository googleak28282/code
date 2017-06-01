//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if((arr[i]-arr[i+1])>0)
		{
			ans+=(arr[i]-arr[i+1]);
		}
	}
	ans+=arr[n-1];
	cout<<ans<<endl;
	return 0;
}

