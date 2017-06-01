//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	while(cin>>n>>m)
	{
		int ans=0;
		for(int i=n;i<=m;i++)
		{
			if(((i%10)==7))
				ans++;
			if((i/10%10)==7)
				ans++;
			if((i/100%10)==7)
				ans++;
			if((i/1000%10)==7)
				ans++;
			if((i/10000%10)==7)
				ans++;
			if((i/100000%10)==7)
				ans++;
			if((i/1000000%10)==7)
				ans++;
			if((i/10000000%10)==7)
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}

