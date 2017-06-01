//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool Map[100][100] = {0};
int dp[100][100] = {0};
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		string s;
		for (int j = 1, k; j <= b; j++) {
            getline(cin, str);
            stringstream ss(str);
            ss >> j;    // ignore the first number
            while (ss >> j)
                Map[i][j] = true;
        }
        dp[1][1] = 1;
        for(int j=1;j<a;j++)
        {
        	for(int k=0;k<b;k++)
        	{
        		if(Map[i][j]) continue;
        		if(j>0) dp[j][k]+=dp[j-1][k];
				if(k>0) dp[j][k]+=dp[j][k-1];
        	}
        }
        cout<<dp[a][b]<<endl;
	}
	return 0;
}
