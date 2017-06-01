//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dp[2][10005];
int main()
{
	string s,t;
	getline(cin,s);
	cin>>t;
	string q="";
	for(int i=0;i<s.size();i++)
	{
		if((s[i]<=90)&&(s[i]>=65))
		{
			q+=s[i];
		}
		else if((s[i]<=122)&&(s[i]>=97))
		{
			q+=s[i]-32;
		}
	}
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=q.size();i++)
	{
		for(int j=1;j<=t.size();j++)
		{
			if(q[i-1]==t[j-1])
			{
				dp[i%2][j]=dp[(i-1)%2][j-1];
			}
			else
			{
				dp[i%2][j]=max(dp[(i-1)%2][j],dp[i%2][j-1]);
			}
		}
	}
	if(dp[q.size()%2][t.size()]==t.size()) cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}

