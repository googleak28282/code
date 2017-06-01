//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
stack<int> st;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); 
	string s;
	cin>>s;
	int ans=0;
	int a=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='(')
		{
			ans++;
		}
		else if(s[i]==')')
		{
			a++;
		}
	}
	if(ans-a==0)
	{
		cout<<ans<<endl;
	}
	else
	{
		cout<<0<<endl;
	}
	return 0;
}

