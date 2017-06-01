//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(int i=100;i<1000;i++){
		int a,b,c;
		a=i/100;
		b=i/10-a*10;
		c=i-a*100-b*10;
		if(i%35==0&&a+b+c==15)
			cout<<i<<endl;
	}
	return 0;
}

