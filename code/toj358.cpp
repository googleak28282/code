//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	bool ans=0;
	int n,x,a,b;
	cin>>n>>x>>a>>b;
	int t;
	if((a*x)%b)
	{
		ans=1;
		for(int i=0;i<n;i++)
		{
			cin>>t; 
		}
	}
	else
	{
		a=(a*x)/b;
		for(int i=0;i<n;i++)
		{
			if(a==t)
			{
				ans=0;
				break;
			}
			else
			{
				ans=1;
			}
		}
	}
	if(ans) cout<<"NO"<<endl;
	else cout<<"Yes"<<endl;
	return 0;
}

