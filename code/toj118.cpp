//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long pri[1005];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	ll num,p;
	for(int i=0;i<n;i++)
	{
		cin>>num>>p;
		pri[i]=p*num;
	}
	for(int i=0;i<n;i++)
	{
		cout<<pri[i]<<endl;
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		int ask;
		cin>>ask;
		ll po;
		cin>>po;
		if(po==pri[ask-1])
			cout<<"The shopkeeper is honest."<<endl;
		else
		{
			cout<<po-pri[ask-1]<<endl;
		} 
	} 
	return 0;
}

