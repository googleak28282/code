#include<bits/stdc++.h>
using namespace std;
struct edge
{
	int to,w;
};
vector<edge> lis[10010];
int es,eb;
bool dfs(int i,int p,int len)
{
	if(len>eb) return false;
	if(len>=es) return true;
	for(edge j:lis[i])
	{
		if(j.to!=p)
		{
			if (dfs(j.to,i,len+j.w))
				return true;
		}
	}
	return false;
}
int main()
{
	int n,a,b,x;
	while(scanf("%d",&n)!=EOF)
	{
		int sum=0;
		scanf("%d%d",&es,&eb);
		for(int i=0;i<n;i++)
		{
			scanf("%d%d%d",&a,&b,&x);
			lis[a].push_back(edge(b,x));
			lis[b].push_back(edge(a,x));
			sum+=x;
		}
		if(dfs(,,sum))
		{
			printf("Eat Eat Eat\n");
		}
		else
		{
			printf("Go find other chickens\n");
		}
 
	}
	return 0;
}
