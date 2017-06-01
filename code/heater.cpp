#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	double e,h,k;
	int minx,miny,m,n,x,y;
	double arr[305][305];
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		minx=0;
		miny=0;
		for(int i=0;i<=m;i++)
		{
			for(int j=0;j<=n;j++)
				arr[i][j]=0;
		}
		scanf("%lf%lf%lf",&k,&h,&e);
		for(int i=0;i<k;i++)
		{
			scanf("%d%d",&x,&y);
			for(int j=0;j<=m;j++)
			{
				for(int k=0;k<=n;k++)
					arr[j][k]+=e/((j-x)*(j-x)+(k-y)*(k-y)+h*h);
			}
		}
		for(int i=0;i<=m;i++)
		{
			for(int j=0;j<=n;j++)
			{
				if(arr[i][j]<arr[minx][miny])
				{
					minx=i;
					miny=j;
				}
			}
		}
		/*for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("%lf ",arr[i][j]);
			}
		}*/
		printf("%d,%d\n",minx,miny);
	}
}
