//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double doo;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	doo pi=4*atan(1);
	doo p=16*365*24*60*60;
	doo c=2.99e+10;
	doo a=140*3600*c;
	doo g=6.673e-8;
	doo m=(4*pi*pi*a*a*a)/(g*p*p);
	cout<<m<<endl;
	return 0;
}

