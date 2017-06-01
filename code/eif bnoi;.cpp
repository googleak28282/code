#include<algorithm>
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int t;
	long long a,b,gcd;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%lld%lld",&a,&b);
		gcd=__gcd(a,b);
		a/=gcd;
		b/=gcd;
		printf("%lld\n",a*b*gcd);
	}
	return 0;
}

