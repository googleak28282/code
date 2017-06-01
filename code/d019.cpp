//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	while(cin>>n)
	{
        for(int j=1;j<=n;j++)   
        {
        	for(int m=n;m>=j+1;m--)  
        	{  
            	cout<<" ";  
        	}  
            for(int k=0;k<j;k++)   
                cout<<(char)('A'+k);  
            for(int k=j-1;k;k--)   
                cout<<(char)('A'+k-1);  
            cout<<endl;  
        }
		for(int i=n-1;i>=1;i--)  
		{
			for(int m=n;m>=i+1;m--)  
        	{  
            	cout<<" ";  
        	}  
            for(int k=0;k<i;k++)   
                cout<<(char)('A'+k);  
            for(int k=i-1;k;k--)   
                cout<<(char)('A'+k-1);  
            cout<<endl; 
		}   
	}
	return 0;
}

