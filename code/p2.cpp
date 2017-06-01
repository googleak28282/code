//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL PowerMod(LL a,LL b,LL c)
{
    LL ans = 1;
    a = a % c;
    while(b>0) {
        if(b % 2 == 1)
        	ans = (ans * a) % c;
        b = b/2;
        a = (a * a) % c;
    }
    return ans;
}
int main()
{
	LL n,m;
	cin>>m>>n;
	LL a;
	LL ans1=1,ans2=1;
	for(int i=0;i<m;i++)
	{
		cin>>a;
		ans1*=a;
		ans1%=100000007;
	}
	for(int i=0;i<n;i++)
	{
		cin>>a;
		ans2*=a;
		ans2%=100000007;
	}
	cout<<PowerMod(ans1,n,100000007)*PowerMod(ans2,m,100000007)<<endl;
	return 0;
}

