//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 1000000005
int main()
{
	int n;
	cin>>n;
	int t;
	int M=0,m=inf;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		if(t>M)
		{
			M=t;
		}
		if(i<m)
		{
			m=t;
		}
	}
	if(m==M)
	{
		cout<<"Same!"<<endl;
	}
	else
	{
		cout<<M<<" "<<m<<endl;
	}
	return 0;
}

