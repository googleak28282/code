//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,x,c[101];
	memset(c,0,sizeof(c));
	while(cin>>n)
	{
		if(n==0) break;
		for(int i=0;i<n;i++)
		{	
			cin>>x;
			c[x]++; 
		} 
		int first=1;
		for(int i=1;i<=100;i++)
		{
			for(int j=0;j<c[i];j++)
			{
				if(!first) cout<<" ";
				first=0;
				cout<<i;
			}
		}
		cout<<endl;
	}
	return 0;
}
