#include<iostream>
using namespace std;
#define maxn 1000000  
bool np[maxn];//0�N����  1�N��X��  
int prime[maxn],cnt=0;
 
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(int i=0;i<maxn;++i) np[i]=0;
	np[0]=np[1]=true;
	for(int i=2;i<maxn;++i)
	{
		if(!np[i])// !np[i] =>  np[i]==0 
		{
			prime[cnt]=i;cnt++;//���Ʀs�bprime�}�C 
			for(int j=i+i;j<maxn;j+=i)//���ƪ����ƼЦ��X��(true) 
			{
				np[j]=true;
			}
		}
	}
	//cout<<cnt<<endl;//��X��ƪ��Ӽ� 
	//for(int i=0;i<20;++i) cout<<prime[i]<<' ';
	//cout<<endl;
	int x,n;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		cin>>n;
		if(!np[n]) cout<<"P\n";// �]��0�N����  1�N��X��    
		else cout<<"C\n";
	}
}
