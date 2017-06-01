//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n,m,s;
	cin>>n>>m;
	int t;
	m=0;
	s=0;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		if(t>m&&t>s)
		{
			s=m;
			m=t;
		}
		else if(t>s&&t<m)
		{
			s=t;
		}
	}
	cout<<s<<endl;
	return 0;
}

