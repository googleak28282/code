//by googleak28282
#include<iostream>
#include<cstring>
using namespace std;
int dp[50000001];
char s[50000001];
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
	gets(s);
	int L=strlen(s),len;
	dp[0]=0;
	for(int i=1,j=0;i<L;i++)
	{
		while(j>0&&s[j]!=s[i]) j=dp[j-1];
		if(s[i]==s[j]) j++;
		dp[i]=j;
	}
	if(L%(L-dp[L-1])==0) len=L-dp[L-1];
	else len=L;
	for(int i=0;i<len;i++){
		printf("%c",s[i]);
	}
	putchar('\n');
	return 0;
}
