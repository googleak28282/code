//by googleak28282
#include<bits/stdc++.h>
#define maxn 55
using namespace std;
typedef long long ll;
struct student{
	int score;//���� 
	int want[maxn];//���@�� 
	bool match;//�O�_�ǰt 
}st[300];
bool operator < (student a,student b){
	return a.score>b.score;
}
struct school{
	int number;//�ǥͤH��
	priority_queue<student> pq;//�ǥͦ�C 
}sc[10];
bool allmatch(int n)
{
	bool all=1;
	for(int i=0;i<n;i++){
		if(st[i].match==0)
		all=0;
		break;
	}
	return all;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>st[i].score;
		for(int j=0;j<maxn;j++){
			cin>>st[i].want[j];
		}
	}
	for(int i=0;i<10;i++){
		cin>>sc[i].number;
	}
	for(int i=0;i<8;i++){
		for(int j=0;j<n;j++){
			if(st[j].match==0)
			{
				
			}
		} 
	}
	return 0;
}

