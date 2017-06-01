#include<bits/stdc++.h> 
using namespace std;
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
	cout<<fast_pow(2,1,1000000007);
}
