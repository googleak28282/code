#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

bool edge[205][205];

bool DFS( int point[], int i, int n, int color ){
  int change_color = color ^ 3;
  bool answer = true;

  if( point[i] ){
    if( point[i] != color ) return false;
    if( point[i] == color ) return true;
  }

  point[i] = color;


  for( int j = i+1 ; j < n ; j++ )
    if( edge[i][j] )
      answer &= DFS( point, j, n, change_color );

  return answer;
}

int main(){
  int n, l, n1, n2;
  int point[205];

  while( scanf( "%d", &n ) != EOF && n != 0 ){
    scanf( "%d", &l );
    memset( point, 0, sizeof(point) );
    memset( edge, false, sizeof(edge) );

    for( int i = 0 ; i < l ; i++ ){
      scanf( "%d%d", &n1, &n2 );
      edge[n1][n2] = true;
      edge[n2][n1] = true;
    }

    if( DFS( point, 0, n, 1 ) )
      printf( "BICOLORABLE.\n" );
    else
      printf( "NOT BICOLORABLE.\n" );

  }

  return 0;
}
