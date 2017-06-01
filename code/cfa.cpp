//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int m,n;
	cin>>m>>n;
	char a;
	bool b=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a;
			if((a!='W')&&(a!='B'))
			{
				b=1;
			}
		}
	}
	if(b==0)
	{
		cout<<"#Black&White"<<endl;
	}
	else
	{
		cout<<"#Color"<<endl;
	} 
	return 0;
}

