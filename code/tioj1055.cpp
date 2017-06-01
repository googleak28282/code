#include<bits/stdc++.h>
using namespace std;
void big(int m,int n)
{
	for(int i=n;i<=m;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<'*';
		}
		cout<<endl;
	}
}

//void small(int m,int n){
void small(int n,int m)	{
//	cout << m << ' ' << n << "\n";
	for(int i=m;i>=n;i--)
	{
		for(int j=0;j<i;j++)
		{
			cout<<'*';
		}
		cout<<endl;
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	if(m>=n)
	{
		big(m,n);
	}
	else if(m<n)
	{
		small(m,n);
	}
}
