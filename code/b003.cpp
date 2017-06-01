#include <iostream>
using namespace std;
int a[100000] ;
int b[100000] ; //b[i]表示包含a[i]的最大??子序列之和 
inline int max(int a , int b) 
{
  return (a > b) ? a : b ;       
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    b[0] = a[0] ;  
    int i , mam = b[0];   
    for(i = 1;  i < n ; i++)
    { 
        b[i] = max(a[i] , b[i-1] + a[i]);   
        if(mam < b[i])
        mam = b[i] ;     
    }
  printf("%d\n" , mam) ;
  return 0 ;  
}
