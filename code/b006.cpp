#include<cstdio>
#include<iostream>
using namespace std;
int main() 
{
	int n,s,z=0;
	long long sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&s);
		sum+=s;
		z=i;
		if(sum>=1000000000) break;
	}
	for(int i=z+1;i<n;i++)
	{
		cin>>s;
	}
	int b;
	cin>>b;
	if(sum-b<=0)
	{
		printf("Lina pwned Broodmother's HEAD for MANY gold!!\nBroodmother's wicked sick has been TERMINATED.\n");
	}
	else
	{
		printf("Broodmother pwned Lina's HEAD for MANY blood!!\nBroodmother has a mmmmmmmmmmoster kill!!\nBroodmother just got a DOUBLE KILL!!\n");
	}
	return 0;
}
