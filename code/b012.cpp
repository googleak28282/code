#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	double s,a[1005],b[1005],sum=0,avg;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>s;
			a[i]=s;
			if(s<60)
			{
				b[i]=60-s;
			}
		}
	}
}
