//by googleak28282
#include<iostream>
using namespace std;
typedef long long LL;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		if(a==0)
		{
			cout<<1<<endl;
		}
		else
		{
			LL ans=1;
			for(int j=0;j<b;j++)
			{
				ans*=a-j;
			}
			for(int j=0;j<b;j++)
			{
				ans/=1+j;
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}

