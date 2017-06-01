//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[105];
int main()
{
	int n;
	char c;
	cin>>n>>c;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		cout<<arr[i]<<c;
	}
	cout<<arr[n-1]<<endl;
	return 0;
}

