#include <bits/stdc++.h>
using namespace std;
bool isAllZero( int N, int password[] ){
  for( int i = 0 ; i < N ; i++ )
    if( password[i] != 0 ) return false;
  return true;
}
int main(){
  int gameNum = 1;
  int N;
  while( scanf("%d", &N ) != EOF && N != 0 ){
    int password[1005], guestPassword[1005];

    printf( "Game %d:\n", gameNum++ );

    for( int i = 0 ; i < N ; ++i )
      scanf( "%d", &password[i] );

    while( true ){
      for( int i = 0 ; i < N ; ++i )
        scanf( "%d", &guestPassword[i] );
      if( isAllZero( N, guestPassword ) ) break;

      bool checkCorrect[1005] = {false};
      bool checkGuest[1005] = {false};
      int A = 0, B = 0;
      for( int i = 0 ; i < N ; ++i ){
        if( password[i] == guestPassword[i] ){
          ++A;
          checkCorrect[i] = true;
          checkGuest[i] = true;
        }
      }

      for( int i = 0 ; i < N ; ++i ){
        if( checkCorrect[i] ) continue;
        for( int j = 0 ; j < N ; ++j ){
          if( checkGuest[j] ) continue;
          if( i != j && password[i] == guestPassword[j] &&
              !checkCorrect[i] && !checkGuest[j] ){
            ++B;
            checkCorrect[i] = true;
            checkGuest[j] = true;
          }
        }
      }
     printf( " (%d,%d)\n", A, B );
    }
  }
  return 0;
}
