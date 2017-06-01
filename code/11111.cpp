//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int fibo[30];
bool ans[1000005];
int main()
{
	for(int i=0;i<1000005;i++)
	{
		ans[i]=0;
	}
	int n,m;
	cin>>n>>m;
	for(int i=0;i<30;i++)
	{
		if((i==0)||(i==1)) fibo[i]=i;
		else fibo[i]=fibo[i-1]+fibo[i-2];
	}
	for(int i=0;i<30;i++)
	{
		ans[fibo[i]]=1;
	}
	int a=0;
	for(int i=n;i<=m;i++)
	{
		if(ans[i]==1)
		{
			cout<<i<<endl;
			a++;
		}
	}
	cout<<a<<endl;
	return 0;
}

