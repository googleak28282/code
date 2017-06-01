#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
  const char keyboard[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
  const int kblength = strlen( keyboard );
  string s;

  while( getline( cin, s ) ){
    for( int i = 0 ; i < s.length() ; i++ )
      if( s[i] == ' ' )
        printf( " " );
      else
        for( int j = 0 ; j < kblength ; j++ )
          if( keyboard[j] == s[i] ){
            printf( "%c", keyboard[j-2] );
            break;
          }
    printf( "\n" );
  }
  return 0;
}
