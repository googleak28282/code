//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fast_pow(ll m,ll s,ll mod)
{
	INT_128 ans=1;
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
	int t;
	cin>>t; 
	ll a,b,m;
	for(int i=0;i<t;i++)
	{
		cin>>a>>b>>m;
		cout<<fast_pow(a,b,m)<<endl;
	}
	return 0;
}

