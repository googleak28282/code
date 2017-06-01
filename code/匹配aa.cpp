//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define maxn 505
#define maxm 505
int n,m;
int match[maxm];
vector<int> g[maxn];
bool vis[maxm];
bool dfs(int u){
    for(size_t i=0;i<g[u].size();++i){
        int v=g[u][i];
        if(vis[v])continue;
        vis[v]=1;
        if(match[v]==-1||dfs(match[v])){
            match[v]=u;
            return 1;
        }
    }
    return 0;
}

