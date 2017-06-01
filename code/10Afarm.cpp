//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[200005];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	int ans=0;
	for(int i=1;i<n-1;i++)
	{
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) ans++; 
	}
	cout<<ans<<endl;
	return 0;
}

