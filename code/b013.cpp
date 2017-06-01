//by googleak28282
#include<iostream>
using namespace std;
typedef long long ll;
double dp[505][505];
int main()
{
	string s,t,a;
	while(getline(cin,a)&&!a.empty())
	{
		s+=a;
	}
	while(getline(cin,a)&&!a.empty())
	{
		t+=a;
	}
	for(int i=0;i<505;i++)
	{
		for(int j=0;j<505;j++)
		{
			dp[i][j]=0;
		}
	}
//	for(int i=0;i<10;i++)
//	{
//		for(int j=0;j<10;j++)
//		{
//			cout<<dp[i][j]<<' ';
//		}
//		cout<<endl;
//	}
	for(int i=1;i<=s.size();i++)
	{
		for(int j=1;j<=t.size();j++)
		{
			if(s[i-1]==t[j-1])
			{
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else
			{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
//	for(int i=0;i<=s.size();i++)
//	{
//		for(int j=0;j<=t.size();j++)
//		{
//			cout<<dp[i][j]<<' ';
//		}
//		cout<<endl;
//	}
	double ans;
	ans=(dp[s.size()][t.size()]/s.size())*100;
//	cout<<ans;
	cout<<dp[s.size()][t.size()]<<" / "<<s.size()<<" = "<<(int)ans+1<<" %"<<endl;
	return 0;
}

