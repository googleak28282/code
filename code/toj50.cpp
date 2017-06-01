//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<char> a;
int main()
{
	int n;
	cin>>n;
	int ans=0;
	int q;
	for(int i=0;;i++)
	{
		string s;
		cin>>s;
		for(int j=6;j>=0;j--)
		{
			if(s[j]=='X')
			{
				ans+=1*pow(2,j); 
			}
		}
		int m=n^ans;
		a.push_back(m);
		q++;
	}
	for(int i=0;i<q;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

