//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string s;
    stringstream ss;
    int num;
  	while( cin >> s ){
    	if( s[0] == '-' )
      		break;
    	ss.clear();
    	ss.str(s);
    	if( s[1] == 'x' ){
      		ss >> hex >> num;
      		printf( "%d\n", num );
    	}
    	else{
      		ss >> dec >> num;
      		printf( "0x%X\n", num );
    	}
  	}
  	return 0;
}

