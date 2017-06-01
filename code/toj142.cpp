//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string arr[3];
	int a=0,b=0,c=0;
	for(int i=0;i<3;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(arr[i][j]=='#')
			{
				a++;
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		if((arr[0][i]==arr[1][i])&&(arr[0][i]==arr[2][i]))
		{
			if(arr[0][i]=='O')
			{
				b++;
			}
			else if(arr[0][i]=='X')
			{
				c++;
			}
		}
		else if((arr[i][0]==arr[i][1])&&arr[i][0]==arr[i][2])
		{
			if(arr[i][0]=='O')
			{
				b++;
			}
			else if(arr[i][0]=='X')
			{
				c++;
			}
		}
	}
	if((arr[0][0]==arr[1][1])&&(arr[1][1]==arr[2][2]))
	{
		if(arr[0][0]=='O')
		{
			b++;
		}
		else if(arr[0][0]=='X')
		{
			c++;
		}
	}
	if((arr[0][2]==arr[1][1])&&(arr[1][1]==arr[2][0]))
	{
		if(arr[0][2]=='O')
		{
			b++;
		}
		else if(arr[0][2]=='X')
		{
			c++;
		}
	}
	if(a!=0)
	{
		cout<<"Playing"<<endl;
	}
	else if(b==c)
	{
		cout<<"Draw"<<endl;
	}
	else if(b!=0)
	{
		cout<<"A wins"<<endl;
	}
	else if(c!=0)
	{
		cout<<"B wins"<<endl;
	}
	else
	{
		cout<<"Draw"<<endl;
	}
	return 0;
}

