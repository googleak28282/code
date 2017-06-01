#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  const long long int UPPER_BOUND = 6227020800;
  const long long int LOWER_BOUND = 10000;
  long long int mem[10005] = { 1, 1 };

  int lower_n = -1, upper_n = -1;
  for( int i = 2 ; mem[i-1] <= UPPER_BOUND && i < 10000 ; ++i ){
    mem[i] = mem[i-1] * i;
    if( lower_n == -1 && mem[i] >= LOWER_BOUND ){
      lower_n = i;
    }

    if( upper_n == -1 && mem[i] > UPPER_BOUND ){
      upper_n = i-1;
      break;
    }
  }

  int n;
  while( scanf("%d", &n) != EOF ){
    if( n < 0 ){
      if( n % 2 == 0 ){
        printf("Underflow!\n");
      }
      else{
        printf("Overflow!\n");
      }
    }
    else if( n < lower_n ){
      printf("Underflow!\n");
    }
    else if( n > upper_n ){
      printf("Overflow!\n");
    }
    else{
      printf("%lld\n", mem[n]);
    }
  }


  return 0;
}
