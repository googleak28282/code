//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[200005];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int q;
	cin>>q;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		int ans=0;
		for(int j=a-1;j<b;j++)
		{
			ans+=arr[j];
		}
		cout<<ans<<endl;
	}
	return 0;
}

