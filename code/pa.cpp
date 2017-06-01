//by googleak28282
#include<iostream>
using namespace std;
typedef long long LL;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		double a;
		int b;
		cin>>a>>b;
		if(b==1)
		{
			cout<<(a-80)*0.7<<endl;
		}
		else
		{
			cout<<(a-70)*0.6<<endl;
		}
	}
	return 0;
}

