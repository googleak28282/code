#include<bits/stdc++.h>
#define inf 1000000000000000
using namespace std;
struct edge
{
    int to;
    long long cost;
};
bool operator<(edge a,edge b)
{
    return a.cost>b.cost;
}
long long d[10005];
vector<edge> g[10005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        g[a].push_back(edge{b,w});
        g[b].push_back(edge{a,w});
    }
    int st,ed;
    cin>>st>>ed;
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
    cout<<d[ed]<<endl;
}
