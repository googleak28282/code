#include<iostream>
#include<cstdio>
using namespace std;

unsigned int reverse( unsigned int num ){
  int rev = 0;
  while( num ){
    rev = rev*10 + num%10;
    num /= 10;
  }
  return rev;
}

int main(){
  int N, times;
  unsigned int num, rev;
  while( scanf( "%d", &N ) != EOF ){
    for( int i = 1 ; i <= N ; i++ ){
      scanf( "%u", &num );
      times = 0;
      rev = reverse(num);
      do{
        num = num + rev;
        times++;
        rev = reverse(num);
      }while( num != rev );
      printf( "%d %u\n", times, num );
    }
  }
  return 0;
}
