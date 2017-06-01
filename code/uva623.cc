#include<bits/stdc++.h>
using namespace std;
struct Bignum
{
  int num[3000];
  int size;
  Bignum();
};
Bignum::Bignum()
{
  memset( num, 0, sizeof(num) );
  size = 1;
}

Bignum mulbignum( Bignum, int );
Bignum printbignum( Bignum );
Bignum dp[1005];

int main(){
  int n;
  dp[0].num[0] = 1;
  dp[1].num[0] = 1;
  for( int i = 2 ; i <= 1000 ; i++ )
    dp[i] = mulbignum( dp[i-1], i );

  while( scanf( "%d", &n ) != EOF ){
    printf( "%d!\n", n );
    printbignum( dp[n] );
    printf( "\n" );
  }

  return 0;
}

Bignum mulbignum( Bignum a, int b ){
  Bignum temp;
  int carry = 0;
  for( temp.size = 0 ; temp.size < a.size || carry ; temp.size++ ){
    temp.num[temp.size] = a.num[temp.size]*b + carry;
    carry = temp.num[temp.size] / 10;
    temp.num[temp.size] %= 10;
  }
  if( temp.num[temp.size] ) temp.size++;
  return temp;
}

Bignum printbignum( Bignum a ){
  for( int i = a.size-1 ; i >= 0 ; i-- )
    printf( "%d", a.num[i] );
}
