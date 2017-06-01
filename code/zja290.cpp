#include<bits/stdc++.h>
using namespace std;
vector<int> G[802];
bool used[802];
void dfs(int i){
    used[i]=true;
    for(int e:G[i])
        if(!used[e])
            dfs(e);
}

int main(){
	int N,M,a,s,e,i,j;
	while(cin>>N>>M){
		for(a=1;a<=N;a++){
			G[a].clear();
			used[a]=false;
		}
		for(a=0;a<M;a++){
			cin>>s>>e;
			G[s].push_back(e);
		}
		cin>>i>>j;
		dfs(i);
		puts(used[j]?"Yes!!!":"No!!!");
	}
	return 0;
}
