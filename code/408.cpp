#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    	return b;
    else
    	return(b%a,a);
}
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		printf("%10d%10d    %s\n\n",a,b);
		if(gcd(a,b)==1)
		{
			cout<<"Good Choice"<<endl;
		}
		else
		{
			cout<<"Bad Choice"<<endl;
		}
		cout<<endl;
	}
	
}
