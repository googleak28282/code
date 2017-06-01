//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll antifib[95]; 
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
	antifib[0]=0;
	antifib[1]=1;
	for(int i=2;i<=90;i++)
	{
		antifib[i]=antifib[i-2]-antifib[i-1];
		printf("%d %d\n",i,antifib[i]);
	}
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int t;
		scanf("%d",&t);
		printf("G(%d) = %d\n",t,antifib[t]);
	}
	return 0;
}

