#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
int main()
{
	int n,m;
	double s,sum;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=0;j<m;j++)
		{
			scanf("%lf",&s);
			sum+=s;
		}
		cout<<fixed<<setprecision(4)<<sum/m<<endl;
	}
	return 0;
} 	
