#include<iostream>
using namespace std;
typedef long long LL;
inline LL long_long_mod(LL a,LL b,LL mod){
    LL ans=0;
    for(;b;b>>=1){
        if(b&1){
            ans+=a;
            if(ans>=mod)ans-=mod;
        }
        a<<=1;
        if(a>=mod)a-=mod;
    }
    if(ans>=mod)ans-=mod;
    else if(ans<0)ans+=mod;
    return ans;
}
int main()
{
	long long a,b,mod;
	cin>> a>> b >>mod;
	cout<< long_long_mod(a,b,mod)<<endl;
	return 0;
} 
