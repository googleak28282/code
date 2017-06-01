#include <iostream>
#include <cstdio>
using namespace std;

const int MAX_LIMIT = 20;

int main(){
  int n;
  while( scanf("%d", &n) != EOF ){
    int correct_order[MAX_LIMIT + 5] = {0};
    for( int i = 1 ; i <= n ; ++i ){
      scanf("%d", &correct_order[i]);
    }

    int correct[MAX_LIMIT + 5] = {0};
    for( int i = 1 ; i <= n ; ++i ){
      correct[correct_order[i]] = i;
    }

    int events_order[MAX_LIMIT + 5] = {0};
    while( scanf("%d", &events_order[1]) != EOF ){
      for( int i = 2 ; i <= n ; ++i ){
       scanf("%d", &events_order[i]); 
      }

      int events[MAX_LIMIT + 5] = {0};
      for( int i = 1 ; i <= n ; ++i ){
        events[events_order[i]] = i;
      }

      int LCS[MAX_LIMIT + 5][MAX_LIMIT + 5] = {0};
      for( int i = 1 ; i <= n ; ++i ){
        for( int j = 1 ; j <= n ; ++j ){
          if( correct[i] == events[j] ){
            LCS[i][j] = LCS[i-1][j-1] + 1;
          }
          else {
            LCS[i][j] = max( LCS[i][j-1], LCS[i-1][j] );
          }
        }
      }

      printf("%d\n", LCS[n][n]);
    }

  }

  return 0;
}
