//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
	int n,m;
	int arr[105];
	bool a=0,b=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&arr[j]);
		}
		if(arr[0]<arr[1])
		{
			a=1;
		}
		else if(arr[0]>arr[1])
		{
			a=0;
		}
		for(int j=0;j<m-1;j++)
		{
			if(a==1)
			{
				if(arr[j]>arr[j+1])
				{
					b=1;
				}
			}
			else
			{
				if(arr[j]<arr[j+1])
				{
					b=1;
				}
			}
		}
		if(b==0)
		{
			printf("Ordered\n");
		}
		else
		{
			printf("Unordered\n");
		}
		b=0;
	}
	return 0;
}

