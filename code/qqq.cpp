//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[5];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,t,m;
	while(cin>>n)
	{
		t=n/5;
		for(int i=0;i<5;i++)
		{
			arr[i]=t;
		}
		t=t*5;
		m=n-t;
		for(int i=0;i<m;i++)
		{
			arr[i]++;
		}
		sort(arr,arr+5);
		int ans=1;
		for(int i=0;i<5;i++)
		{
			cout<<arr[i]<<endl;
			ans*=arr[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}

