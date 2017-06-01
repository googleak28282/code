#include<vector>
#include<algorithm>
#define N 1005
std::vector<int> G[N];// 1-base
std::vector<int> bcc[N];//�s�C�����s�q���q���I
int low[N],vis[N],Time;
int bcc_id[N],bcc_cnt;// 1-base
bool is_cut[N];//�O�_�����I�A���I��bcc_id�S�N�q
int st[N],top;
void dfs(int u,int pa=-1){//u��e�I�Apa���� 
	int v,child=0;
	low[u]=vis[u]=++Time;
	st[top++]=u;
	for(size_t i=0;i<G[u].size();++i){
		if(!vis[v=G[u][i]]){
			dfs(v,u),++child;
			low[u]=std::min(low[u],low[v]);
			if(vis[u]<=low[v]){
				is_cut[u]=1;
				bcc[++bcc_cnt].clear();
				int t;
				do{
					bcc_id[t=st[--top]]=bcc_cnt;
					bcc[bcc_cnt].push_back(t);
				}while(t!=v);
				bcc_id[u]=bcc_cnt;
				bcc[bcc_cnt].push_back(u);
			}
		}else if(vis[v]<vis[u]&&v!=pa)//�ϦV�� 
			low[u]=std::min(low[u],vis[v]);
	}
	if(pa==-1&&child<2)is_cut[u]=0;//u�Odfs�𪺮ڭn�S�P
}
inline void bcc_init(int n){
	Time=bcc_cnt=top=0;
	for(int i=1;i<=n;++i){
		G[i].clear();
		vis[i]=0;
		is_cut[i]=0;
		bcc_id[i]=0;
	}
}
