#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	bool b;
	int n,ans[6],d;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<4;j++)
			{
				scanf("%d",&ans[j]);
			}
			if((ans[3]-ans[2]==ans[2]-ans[1])&&(ans[3]-ans[2]==ans[1]-ans[0]))
			{
				b=1;
				d=ans[3]-ans[2];
			}
			else
				b=0;
				d=ans[3]/ans[2];
			if(b)
			{
				for(int j=0;j<4;j++)
					printf("%d ",ans[j]);
				printf("%d\n",ans[3]+(ans[1]-ans[0]));
			}
			else
			{
				for(int j=0;j<4;j++)
					printf("%d ",ans[j]);
				printf("%d\n",ans[3]*(ans[1]/ans[0]));
			}
		}
	}
}

