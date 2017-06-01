//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	long long n;
	ll m,k;
	cin>>n;
	int b=0;
	while(n%2==0)
	{
		n/=2;
		b++;
	}
	m=(n*n)/2;
	k=(n*n)-m;
	m*=pow(2,b);
	k*=pow(2,b);
	if(n==1) cout<<-1<<endl;
	else cout<<m<<" "<<k<<endl;
	return 0;
}

