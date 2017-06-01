#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;

struct Point{
  int x;
  int y;
  Point( int, int );
};

Point::Point( int nx = 0, int ny = 0 ):x(nx),y(ny){}

bool check( int, int, int, int );
int main(){
  int T, M, N;
  Point start, temp;
  char c, map[105][105];
  int step[105][105];
  queue<Point> BFS;
  const int horse[8][2] = { {1,2}, {1,-2}, {-1,2}, {-1,-2}, {2,1}, {2,-1}, {-2,1}, {-2,-1} };
  const int king[8][2] = { {1,0}, {1,1}, {1,-1}, {0,1}, {0,-1}, {-1,0}, {-1,1}, {-1,-1} };
  bool find;
  while( scanf( "%d", &T ) != EOF ){
    for( int i = 0 ; i < T ; i++ ){
      scanf( "%d%d", &M, &N );
      getchar();
      memset( map, 0, sizeof(map) );
      memset( step, -1, sizeof(step) );
      while( !BFS.empty() ) BFS.pop();
      find = 0;
      for( int j = 1 ; j <= M ; j++ ){
        for( int k = 1 ; k <= N ; k++ ){
          scanf( "%c", &c );
          if( c == 'Z' ){
            for( int l = 0 ; l < 8 ; l++ ){
              if( check(j+horse[l][0], k+horse[l][1], M, N ) &&
                  map[j+horse[l][0]][k+horse[l][1]] != 'B' &&
                  map[j+horse[l][0]][k+horse[l][1]] != 'A' )
                map[j+horse[l][0]][k+horse[l][1]] = 'Z';
            }
            map[j][k] = c;
          }
          if( c == 'A' ){
            start.x = j;
            start.y = k;
            step[j][k] = 0;
            map[j][k] = c;
          }
          if( c == 'B' )
            map[j][k] = c;
          if( c == '.' )
            if( map[j][k] != 'Z')
              map[j][k] = '.';
        }
        getchar();
      }
      BFS.push(start);
      do{
        temp = BFS.front();
        for( int j = 0 ; j < 8 ; j++ ){
          if( check(temp.x+king[j][0], temp.y+king[j][1], M, N ) &&
              step[temp.x+king[j][0]][temp.y+king[j][1]] == -1 &&
              map[temp.x+king[j][0]][temp.y+king[j][1]] != 'Z' ){

            BFS.push( Point(temp.x+king[j][0], temp.y+king[j][1] ) );
            step[temp.x+king[j][0]][temp.y+king[j][1]] = step[temp.x][temp.y]+1;

            if( map[temp.x+king[j][0]][temp.y+king[j][1]] == 'B' ){
              find = 1;
              break;
            }
          }
        }
        BFS.pop();
      } while( !BFS.empty() && !find );
      if( find ) printf( "Minimal possible length of a trip is %d\n", step[BFS.back().x][BFS.back().y] );
      else printf( "King Peter, you can't go now!\n" );
    }
  }
  return 0;
}

bool check( int hx, int hy, int M, int N ){
  if( hx < 1 || hx > M )
    return false;
  if( hy < 1 || hy > N )
    return false;
  return true;
}
