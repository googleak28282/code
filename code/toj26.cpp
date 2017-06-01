#include<bits/stdc++.h>
using namespace std;
int dp[3005][3005];
char s[3005],t[3005];
int main(){
	int n,len;
	scanf("%d",&n);
	while(n--){
		scanf("%s",s);
		len=strlen(s);
		for(int i=0,j=len-1;i<len;i++,j--)
		{
			t[i]=s[j];
		}
		t[len]='\0';
		dp[0][0]=0;
		for(int i=0;i<len;i++)
		{
			for(int j=0;j<len-i-1;j++)
			{
				if(s[i]==t[j])
				{
					dp[i+1][j+1]=dp[i][j]+1;
				}
				else
				{
					dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
				}
			}
		}
		int ans=0;
		for(int i=0;i<len;i++)
		{
			if(i)
			{
				ans=max(dp[i][len-i-1]*2+1,ans);
			}
			ans=max(ans,dp[i+1][len-i-1]*2);
		}
		printf("%d\n",ans);
	}
	return 0;
}

