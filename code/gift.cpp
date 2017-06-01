//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int arr[35][35];
int main()
{
	int a,n,m,b;
	for(int i=0;i<35;i++)
	{
		for(int j=0;j<35;j++)
		{
			arr[i][j]=0;
		}
	}
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		int ans=1;
		b=0;
		scanf("%d%d",&n,&m);
		for(int j=0;j<m;j++)
		{
			for(int k=0;k<n;k++)
			{
				scanf("%d",&arr[j][k]);
			}
		}
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m-1;k++)
			{
				if(arr[k]==1)
				{
					if(arr[k+1]==arr[k])
					{
						if(b==0)
						{
							ans+=2;
							b++;
							break;
						}
						else
						{
							ans++;
						}
					}
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}

