//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string sf[4]={"aBC","aBc","abc","abC"};
string sm[4]={"ABC","ABc","aBC","aBc"};
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<sf[i]+sm[j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}

