//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define maxn 105
char pic[maxn][maxn];
int m,n,idx[maxn][maxn];
void dfs(int r,int c,int id)
{
	if(r<0||r>=m||c<0||c>=n) return;
	if(idx[r][c]||pic[r][c]!='@')return;
	idx[r][c]=id;
	for(int i=-1;i<=1;i++)
	{
		for(int j=-1;j<=1;j++)
		{
			if(i!=0||j!=0)
			{
				dfs(r+i,c+j,id);
			}
		}
	}
}
int main()
{
	while(scanf("%d%d",&m,&n)==2&&m&&n)
	{
		for(int i=0;i<m;i++)
		{
			scanf("%s",&pic[i]);
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				idx[i][j]=0;
			}
		}
		int cnt=0;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(idx[i][j]==0&&pic[i][j]=='@')
				{
					dfs(i,j,++cnt);
				}
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}

