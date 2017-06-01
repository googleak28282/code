//by googleak28282
#include<bits/stdc++.h>
#define maxn 25
using namespace std;
typedef long long ll;
int arr[maxn];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int t;
	int b=-1;
	int c=105;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		t=arr[i];
		if(t<60)
		{
			b=max(b,t);
		}
		else if(t>=60)
		{
			c=min(c,t);
		}
	}
	sort(arr,arr+n);
	for(int i=0;i<n-1;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<arr[n-1]<<endl;
	if(b==-1)
	{
		cout<<"best case"<<endl;
	}
	else
	{
		cout<<b<<endl;
	}
	if(c==105)
	{
		cout<<"worst case"<<endl;
	}
	else
	{
		cout<<c<<endl;
	}
	return 0;
}

