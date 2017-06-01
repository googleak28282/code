#include<bits/stdc++.h>
using namespace std;
int main(){
  stack<int> station;
  int N, p, now;
  bool exit, yon;
  while( scanf( "%d", &N ) != EOF && N != 0 ){
    exit = false;
    while( !exit ){
      now = 1;
      yon = true;
      for( int i = 0 ; i < N ; i++ ){
        scanf( "%d", &p );
        if( p == 0 ){
          exit = true;
          break;
        }
        if( yon ){
          if( now < p ){
            for( ; now < p ; now++ ) station.push(now);
              now++;
          }
          else if( now == p ) now++;
          else{
            if( p != station.top() ){
              yon = false;
            }
            else station.pop();
          }
        }
      }

      if( exit ) break;
      else if( yon ) printf( "Yes\n" );
      else printf( "No\n" );
    }
    printf( "\n" );
  }

  return 0;
}

