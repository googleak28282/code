#include<iostream>
#include<cstdio>
using namespace std;

struct Factory{
  string name;
  float d;
  int r;
};

int main(){
  int n, p;
  int RFP = 0;
  string requirement;
  Factory fac, best; 
  while( scanf( "%d%d", &n, &p ) != EOF && ( n || p ) ){
    if( RFP ) printf( "\n" );
    getchar(); /* delete the enter key */
    for( int i = 0 ; i < n ; i++ )
      getline( cin, requirement );

    best.r = 0;
    for( int i = 0 ; i < p ; i++ ){
      getline( cin, fac.name );
      scanf( "%f%d", &(fac.d), &(fac.r) );
      getchar(); /* delete the enter key */
      for( int j = 0 ; j < fac.r ; j++ )
        getline( cin, requirement );
      if( best.r < fac.r )
        best = fac;
      else if( best.r == fac.r && best.d > fac.d )
        best = fac;
    }
    printf( "RFP #%d\n%s\n", ++RFP, best.name.c_str() );
  }
  return 0;
}//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	return 0;
}

