#include<iostream>
#include<cstdio>
using namespace std;
long long int ans[100005]={0};
int c[5]={1,3,4,13,41};
int main()
{
    ans[1]=1;
    for(int j=1;j<=100000;j++)
    {
    	for(int i=0;i<5;i++)
    {
        {
            ans[j+c[i]]+=ans[j]%1000000007;
        }
    }
    }
    int n;
    int t;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
       	cin>>t;
        cout<<ans[t]%1000000007<<endl;
	}
    return 0;
}
