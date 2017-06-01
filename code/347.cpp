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
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		for(int j=0;j<s.size();j++)
		{
			if(s[j]<90) s[j]+=32;
		}
		cout<<s<<endl;
	}
	return 0;
}

