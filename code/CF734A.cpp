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
	cin>>s;
	int a=0;
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='A')
			a++;
		else if(s[i]=='D')
			d++;
	}
	if(a>d) cout<<"Anton\n";
	else if(a<d) cout<<"Danik\n";
	else cout<<"Friendship\n"; 
	return 0;
}

