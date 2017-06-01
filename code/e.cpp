#include<iostream>
using namespace std;
int main()
{
	int arr[20]={0};
	int N,M,num;
	while(cin>>N>>M)
	{
		for(int i=0;i<M;i++)
		{
			cin>>num;
			arr[num-1]=1;
		}
		for(int j=0;j<N;j++)
		{
			if(arr[j]==0)
			{
				cout<<j+1<<" ";
			}
		}
	}
}
