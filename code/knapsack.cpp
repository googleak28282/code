//by googleak28282
#include<bits/stdc++.h>
using namespace std;
int w[100005],p[100005];
int c[100005];
void knapsack(int n, int ww)
{
    memset(c, 0, sizeof(c));
    
    for(int i=0;i<ww;i++)
    {
    	for(int j=0;j<100005;j++)
    	c[j+p[i]]+=w[j];
    }
    cout << c[ww];
}
int main()
{
	int n,v;
	while(scanf("%d",&v)!=EOF)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d%d",&w[i],&p[i]);
		}
		knapsack(n,v);
	}
	return 0;
}

