//by googleak28282
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long LL;
int main()
{
	int arr[100005];
	int w,n;
	cin>>w>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int l=0,r=n-1;
	int ans=0;
	while(l<=r)
	{
		if(arr[l]+arr[r]>w)
		{
			ans++;
			r--;
		}
		else
		{
			ans++;
			r--;
			l++;
		}
	}
	cout<<ans<<endl;
	return 0;
}

