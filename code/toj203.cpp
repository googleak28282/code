//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	char c;
	ll x,y;
	ll t;
	while(cin>>c)
	{
		if(c=='B') continue;
		else if(c=='E') break;
		else if(c=='X')
		{
			cin>>x;
		}
		else if(c=='Y')
		{
			cin>>y;
		}
		else if(c=='U')
		{
			cin>>t;
			y+=t;
		}
		else if(c=='D')
		{
			cin>>t;
			y-=t;
		}
		else if(c=='R')
		{
			cin>>t;
			x+=t; 
		}
		else if(c=='L')
		{
			cin>>t;
			x-=t;
		}
	}
	cout<<x<<endl;
	cout<<y<<endl;
	return 0;
}

