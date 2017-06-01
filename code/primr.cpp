#include<iostream>
using namespace std;
#define maxn 1000000  
bool np[maxn];
int prime[maxn],cnt;
int main()
{
 
	for(int i=0;i<maxn;++i) np[i]=0;
	np[0]=np[1]=true;
	for(int i=2;i<maxn;++i)
	{
		if(!np[i])// !np[i] =>  np[i]==0 
		{
			prime[cnt]=i;cnt++;//р借计prime皚 
			for(int j=i+i;j<maxn;j+=i)//р借计计夹Θ计(true) 
			{
				np[j]=true;
			}
		}
	}
	//cout<<cnt<<endl;//块借计计 
	//for(int i=0;i<20;++i) cout<<prime[i]<<' ';
	int x;
	while(cin>>x)
	{
		if(!np[x]) cout<<"prime\n";// 0借计  1计    
		else cout<<"not prime\n";
	}
}

