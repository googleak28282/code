#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for( int i=(a),_n=(b); i<=_n; ++i )
#define clr(x,v) memset( x, v, sizeof(x) )
typedef unordered_map<string,int> MSI;
int m, n;
MSI dict;
int main( void )
{
	string ts;
	int v, ans;
	while( scanf( "%d%d", &m, &n )==2 ) {
		dict.clear();
		FOR( i, 1, m ) {
			cin >> ts >> v;
			dict[ts] = v;
		}
		FOR( i, 1, n ) {
			ans = 0;
			while( cin>>ts && ts!="." )
				ans += dict[ts];
			printf( "%d\n", ans );
		}
	}
	return 0;
}
