//by googleak28282
#include<iostream>
using namespace std;
typedef long long ll;
bool dp[100005];
int c[5]={1,3,10,51,93};
int main()
{
	for(int i=0;i<=100005;i++)
	{
		dp[i]=false;
	}
	for(int i=0;i<=100005;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(dp[i]==0)
			{
				dp[i+c[j]]=true;
			}
		}
	}
//	for(int i=0;i<100;i++)
//	{
//		cout<<dp[i]<<" ";
//	}
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(dp[a]==0)
		{
			cout<<"Billy"<<endl;
		}
		else
		{
			cout<<"Andy"<<endl;
		}
	}
	return 0;
}

