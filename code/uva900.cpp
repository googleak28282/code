//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[55];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
  	int n;
  	for( int i = 3 ; i <= 50 ; i++ )
    	dp[i] = dp[i-1]+dp[i-2];
	int n;
	while(cin>>n){
		cout<<dp[n]<<endl;
	} 
	return 0;
}

