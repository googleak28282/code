//by googleak28282
#include<bits/stdc++.h>
#define mod 100000007
using namespace std;
typedef long long ll;
ll n,s1,v1,s2,v2;
int main()
{
	int k;
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		cin>>n>>s1>>v1>>s2>>v2;
		ll ans=0;
		for(ll j=0;j<100000;i++){
            if(j*s1<=n)
            	ans=max(ans,(n-j*s1)/s2*v2+j*v1);
            if(i*s2<=n)
            	ans=max(ans,(n-j*s2)/s1*v1+j*v2);
        }
        cout<<"Case #"<<i<<":"<<ans<<endl;
	}
	return 0;
}

