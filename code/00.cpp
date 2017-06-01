#include<iostream>
using namespace std;
int main()
{
	int n,m,sc[10][10],a;
	cin>>n>>m;
	cout<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<10;j++)
		{
			sc[i][j]=0;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a;
			for(int k = 0;k < 10;k ++)  {  
                if(a >= 100-(10*k)) {  
                    sc[k][j] ++;  
                    break;  
                }  
            }  
		}
	}
	for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<sc[i][j]<<" ";
        }
        cout<<endl;
    }
}
