//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct edge
{
	int to;
	int cost;
};
bool operator<(edge a,edge b)
{
	return a.cost<b.cost;
}
const ll inf=1000000000000000;
ll d[105];
vector<edge> g[105];
int dijkstra(int st,int ed,int n)
{
	for(int i=0;i<n;i++)
    {
        d[i]=inf;
        d[st]=0;
    }
    priority_queue<edge> pq;
    pq.push(edge{st,0});
    while(pq.size())
    {
        edge t=pq.top();pq.pop();
        int v=t.to;
        if(d[v]<t.cost)continue;
        for(int i=0;i<g[v].size();++i)
        {
            edge e=g[v][i];
            if(d[v]+e.cost<d[e.to])
            {
                d[e.to]=d[v]+e.cost;
                pq.push(edge{e.to,d[e.to]});
            }
        }
    }
    return d[ed];
}
int main()
{
	int n,m,s;
	cin>>n>>m>>s;
	for(int i=0;i<m;i++)
	{
		int a,b,w;
		cin>>a>>b>>w;
		g[a].push_back(edge{b,w});
		g[b].push_back(edge{a,w});
	}
	int q;
	cin>>q;
	int st,ed;
	for(int i=0;i<q;i++)
	{
		cin>>st>>ed;
		cout<<dijkstra(st,ed,n)<<endl;
	}
	return 0;
}

