#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	long long arr[250005]={0};
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int m;
	cin>>m;
	int ans,a=0,b=0;
	for(int i=0;i<m;i++)
	{
		cin>>ans;
		int l=0,r=n-1;
		bool Y=0;//Y=0 ->沒找到 。 Y=1 -> 有找到 
		while(l<=r)
		{
			int mid=(l+r)/2;
			if(arr[mid]==ans)
			{
				Y=1;break;
			}
			else if(arr[mid]<ans) l=mid+1;
			else r=mid-1;
		}
		if(Y==1) a++;
		else b++;
	}
	cout<<a<<endl<<b<<endl;
}
