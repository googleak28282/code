//by googleak282829
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		int p=0;
		int arr[205]={0};
		int root[205]={0};
		string x;
		getline(cin,x);
		for(int i=0;i<n;i++)
		{
			getline(cin,s);
			if(s[0]=='L')
			{
				arr[i]=-1;
				root[i]=i;
			}
			else if(s[0]=='R')
			{
				arr[i]=1;
				root[i]=i;
			}
			else
			{
				int a=s[8]-49;
				root[i]=root[a];
			}
		}
		for(int i=0;i<n;i++)
		{
			p+=arr[root[i]];
			cout<<p<<endl;
		}
		cout<<p<<endl;
	}
	return 0;
}

