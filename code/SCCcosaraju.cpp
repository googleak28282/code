#include<vector>
#include<algorithm>
#define N 1000005
std::vector<int >s[N],g[N];/*g是反向圖，要先做好*/
bool v[N]={0};
int st[N],top=0,contract[N]={0};
void dfs(int x){
	v[x]=1;
	for(int i=0;i<(int)s[x].size();++i){
		if(!v[s[x][i]])dfs(s[x][i]);
	}
	st[top++]=x;
}
void dfs2(int x,int k){
	if(contract[x])return;
	contract[x]=k;/*x屬於第k個contract*/
	for(int i=0;i<(int)g[x].size();++i){
		dfs2(g[x][i],k);
	}
}
