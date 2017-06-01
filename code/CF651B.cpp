//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[1005],flag[1005];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	memset(flag,0,sizeof(flag));
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		flag[arr[i]]++;
	}
	int ans=0;
	while(n)
	{
		int num=0;
		for(int i=1;i<=1000;i++)
		{
			if(flag[i]>0)
			{
				flag[i]--;
				num++;
				n--;
			}
		}
		ans+=num-1;
	}
	cout<<ans<<endl;
	return 0;
}

