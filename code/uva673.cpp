#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  string s;
  stack<char> stk;
  bool correct;
  while( scanf( "%d", &n ) != EOF ){
    getchar();
    for( int i = 0 ; i < n ; i++ ){
      getline( cin, s );
      correct = 1;
      while( !stk.empty() ) stk.pop();
      for( int j = 0 ; j < s.length() ; j++ ){
        if( s[j] == '(' || s[j] == '[' )
          stk.push( s[j] );
        else if( s[j] == ')' ){
          if( stk.empty() || stk.top() != '(' ){
            correct = 0;
            break;
          }
          stk.pop();
        }
        else if( s[j] == ']' ){
          if( stk.empty() || stk.top() != '[' ){
            correct = 0;
            break;
          }
          stk.pop();
        }
      }
      if( !stk.empty() ) correct = 0;
      printf( ((correct)?"Yes\n":"No\n") );
    }
  }
  return 0;
}
