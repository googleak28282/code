//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct job
{
	int j,b;
	bool operator < (const job& x) const
	{
		return j>x.j;
	}
};

int main()
{
	int n,b,j,kase=1;
	while(cin>>n)
	{
		vector<job> v;
		for(int i=0;i<n;i++)
		{
			cin>>b>>j;
			v.push_back((job){j,b}); 
		}
		sort(v.begin(),v.end());
		int s=0;
		int ans=0;
		for(int i=0;i<n;i++)
		{
			s+=v[i].b;
			ans=max(ans,s+v[i].j);
		}
		cout<<"Case "<<kase++<<": "<<ans<<endl;
	}
	return 0;
}

