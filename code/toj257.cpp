//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dp[4005][4005];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	string t;
	memset(dp,0,sizeof(dp));
	cin>>s>>t;
	for(int i=0;i<s.size();i++)
	{
		for(int j=0;j<t.size();j++)
		{
			if(s[i]==t[j])
			{
				dp[i+1][j+1]=dp[i][j]+1;
			}
			else
			{
				dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
			}
		}
	}
	int a,b,gcd;
	a=dp[s.size()][t.size()]*2;
	b=s.size()+t.size();
	memset(dp,0,sizeof(dp));
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='A') s[i]='T';
		else if(s[i]=='T') s[i]='A';
		else if(s[i]=='C') s[i]='G';
		else if(s[i]=='G') s[i]='C';
	}
	for(int i=0;i<s.size();i++)
	{
		for(int j=0;j<t.size();j++)
		{
			if(s[i]==t[j])
			{
				dp[i+1][j+1]=dp[i][j]+1;
			}
			else
			{
				dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
			}
		}
	}
	a=max(a,dp[s.size()][t.size()]*2);
	gcd=__gcd(a,b);
	if(a==0)
	{
		cout<<a<<"/"<<b<<endl;
	}
	else
	{
		cout<<a/gcd<<"/"<<b/gcd<<endl;
	}
	return 0;
}

