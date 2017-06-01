//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	double pi=4*atan(1.0);
	double ans=1;
	for(int i=1;i<90;i+=2)
	{
		ans*=sin((pi/180)*i);
	}
	cout<<log2(ans)<<endl;
	for(int i=1;i<90;i+=2)
	{
		ans*=cos((pi/180)*i);
	}
	cout<<log2(ans)<<endl;
	return 0;
}

