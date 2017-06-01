//by googleak28282
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long LL;
int main()
{
	int arr[15];
	int ans[15];
	int a[15];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		ans[i]=0;
		a[i]=arr[i];
	}
	for(int i=0;i<n;i++)
	{
		while(arr[i]!=0)
		{
			ans[i]+=arr[i]%10;
			arr[i]/=10;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if (ans[j]>ans[j+1])
			{
					swap(ans[j],ans[j+1]);
					swap(a[j],a[j+1]);
			}
			else if(ans[j]==ans[j+1])
			{
				if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
			}
		}		
	}
	for(int i=0;i<n-1;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<a[n-1]<<endl;
	return 0;
}

