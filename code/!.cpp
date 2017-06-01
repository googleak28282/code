#include<iostream>
using namespace std;
int main()
{
	int n,t;
	long long sum=1;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		for(int j=1;j<=n;j++)
		{
			sum*=j;
		}
		cout<< sum<<endl;
		sum=1;
	}
 } 
