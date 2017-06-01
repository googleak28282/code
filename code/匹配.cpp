//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int g[MAXN][MAXN],lx[MAXN],ly[MAXN],slack_y[MAXN];
int match_y[MAXN];
bool vx[MAXN],vy[MAXN];
bool dfs(int x){
    if(vx[x])return 0;
    vx[x]=1;
    for(int y=0,d;y<n;++y){
        if(vy[y])continue;
        d=lx[x]+ly[y]-g[x][y];
        if(d==0){//等邊
            vy[y]=1;
            if(match_y[y]==-1||dfs(match_y[y])){
                match_y[y]=x;
                return 1;
            }
        }else if(slack_y[y]>d)slack_y[y]=d;
        //非等邊，計算slack值
    }
    return 0;
}
int main()
{
	
	return 0;
}

