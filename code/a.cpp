#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[10000005];
int ans[10000005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int aa;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    if(n==1)
    {
    	cout<<a[i]<<endl;
    }
    else
    {
    	for(int i=0;i<n-1;i++)
    	{
    		if(i==n-2)
    		{
    			if(a[n-1]>a[n-2])
    			{
    				ans[i]=a[n-1];
    			}
    			else
    			{
    				ans[i]=a[n-2];
    			}
    		}
    		else
    		{
    			ans[i]=a[i+1]-a[i];
    		}
    	}
    }
    for(int i=0;i<n-1;i++)
    {
    	if(ans[i]>0)
    	{
    		aa+=ans[i];
    	}
    }
    cout<<aa<<endl;
}

