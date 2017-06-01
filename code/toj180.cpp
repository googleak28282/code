//by googleak28282
#include<bits/stdc++.h>
#define maxn 100005
#define maxm 300005
using namespace std;
typedef long long ll;
ll n,m;
struct edge
{
	ll from;
	ll to;
	ll cost;
}es[maxm];
bool cmp(edge a,edge b)
{
	return a.cost<b.cost;
}
ll pa[maxn];
ll find(ll x)
{
	if(pa[x]==x)
	{
		return x;
	}
	else
	{
		return pa[x]=find(pa[x]);
	}
}
void u(ll x,ll y)
{
	pa[find(x)]=pa[y];
}
ll kru()
{
	ll ans=0;
	for(int i=0;i<n;i++)
	{
		pa[i]=i;
	}
	sort(es,es+m,cmp);
	for(int i=0;i<m;i++)
	{
		edge e=es[i];
		if((find(e.from)!=find(e.to))||e.cost<0)
		{
			u(e.from,e.to);
			ans+=e.cost;
		}
	}
	return ans;
}
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll a,b;
		for(int i=0;i<m;i++)
		{
			cin>>es[i].from>>es[i].to>>a>>b;
			es[i].cost=a-b;
		}
		if(n==1) cout<<0<<endl;
		else cout<<kru()<<endl;	
	}
	return 0;
}

