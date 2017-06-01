#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  string N;
  int odd, even;

  while( getline( cin, N ) && N != "0" ){
    odd = 0;
    even = 0;
    for( int i = 0 ; i < N.length() ; i++ )
      if( i%2 ) odd += N[i] - '0';
    else even += N[i] - '0';

    printf( "%s is ", N.c_str() );
    if( (odd-even) % 11 ) printf( "not " );
    printf( "a multiple of 11.\n" );
  }
  return 0;
}
