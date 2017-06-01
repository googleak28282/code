#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  long long C[105][105] = {0};
  int N, M;
  for( int i = 1 ; i <= 100 ; i++ )
    for( int j = 1 ; j <= i ; j++ )
      if( i == j ) C[i][j] = 1;
      else C[i][j] = C[i-1][j]*i/(i-j);

  while( scanf( "%d%d", &N, &M ) != EOF && !( N == 0 && M == 0 ) )
    printf( "%d things taken %d at a time is %lld exactly.\n", N, M, C[N][M] );

  return 0;
}
