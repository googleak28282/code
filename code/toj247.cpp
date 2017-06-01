//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	if(n==0)
	{
		cout<<"Nothing"<<endl;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i%2)
				{
					if(j%2)
					{
						cout<<'*';
					}
					else
					{
						cout<<'-';
					}
				}
				else
				{
					if(j%2)
					{
						cout<<'-';
					}
					else
					{
						cout<<'*';
					}
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
