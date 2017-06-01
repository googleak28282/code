//by googleak28282
#include<bits/stdc++.h>
#define maxn 105
using namespace std;
typedef long long ll;
int date[maxn];
int getlca(int arr[],int n)
{
	int ans=1;
	int gcd=__gcd(arr[0],arr[1]);
	ans=(arr[0]/gcd)*(arr[1]/gcd)*gcd;
	for(int i=2;i<n;i++)
	{
		gcd=__gcd(ans,arr[i]);
		ans=ans*arr[i]/gcd;
	}
	return ans;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&date[i]);
	}
	int year,month,day;
	scanf("%d/%d/%d",&year,&month,&day);
	int lca=getlca(date,n);
	printf("%d\n",lca);
	return 0;
}

