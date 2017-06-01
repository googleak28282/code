//by googleak28282  
#include<bits/stdc++.h>  
using namespace std;  
typedef long long ll;  
int main()  
{  
    int n;  
    while(cin>>n)  
    {
    	for(int i=0;i<n;i++)
    	{
    		int a;
    		cin>>a;
    		for(int j=1;j<=a;j++)     
        	{  
            	for(int m=a;m>=j+1;m--)    
            	{    
                	cout<<" ";    
            	}    
            	for(int k=0;k<j;k++)     
                	cout<<(char)('A'+a-1-k);    
            	for(int k=j-1;k;k--)     
                	cout<<(char)('A'+a-k);    
            	cout<<endl;    
        	}  
        	for(int j=a-1;j>=1;j--)    
        	{  
            	for(int m=a;m>=j+1;m--)    
            	{    
                	cout<<" ";    
            	}    
            	for(int k=0;k<j;k++)     
                	cout<<(char)('A'+a-k-1);    
            	for(int k=j-1;k;k--)     
                	cout<<(char)('A'+a-k);    
            	cout<<endl;   
        	}     
    	}
    }  
    return 0;  
}  
