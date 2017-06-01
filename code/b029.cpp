//by googleak28282
#include<iostream>
using namespace std;
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<=(n+1)/2;i++)
		{
			for(int j=1;j<=i;j++) 
			{
				for(int k=0;k<j;k++) 
					cout<<(char)('A'+k);
				for(int k=j-1;k;k--) 
					cout<<(char)('A'+k-1);
				cout<<endl;
			}
		}	
	}
	return 0;
}

