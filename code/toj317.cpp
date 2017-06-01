//by googleak28282
#include<iostream>
using namespace std;
typedef long long ll;
int arr[1000][1000];
int c=0;
int fast_pow(int m,int s,int mod)
{
	long long ans=1;
    long long multi=m;  
    while(s)  
    {  
        if(s%2) ans*=multi;  
        ans%=mod;
        s/=2;  
        multi*=multi;  
        multi%=mod;  
    }  
    return ans;  
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int count[10005]={0};
	int ans=0;
	int n,m;
	cin>>n>>m;
	int pow[1005];
	pow[0]=1;
	for(int i=1;i<1005;i++)
	{
		pow[i]=pow[i-1]*2%m;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	int q;
	cin>>q;
	int x1,x2,y1,y2;
	for(int i=0;i<q;i++)
	{
		for(int j=0;j<10005;j++)
		{
			count[j]=0;
		}
		ans=0;
		cin>>x1>>y1>>x2>>y2;
		for(int j=x1;j<=x2;j++)
		{
			for(int k=y1;k<=y2;k++)
			{
				count[arr[j][k]]++;
			}
		}
		c=0;
		for(int j=1;j<=10000;j++)
		{
			if(count[j])
			{
				ans+=pow[count[j]];
				ans%=m;
				c++;
			} 
		}
		ans-=c;
		cout<<ans%m<<endl;
	}
	return 0;
}

