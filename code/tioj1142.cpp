//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> g[10005];
int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	int a[10005];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
	}
	return 0;
}

