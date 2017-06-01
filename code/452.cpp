#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int arr[15],max,i,s;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			if(i==0)
			{
				max=arr[0];
			}
			else if(i>=1)
			{
				if(arr[i]>max)
				{
					max=arr[i];
					s=i+1;
				}
			}
		}
		cout<<s<<' '<<max<<endl;
	}
	return 0;
 } 
