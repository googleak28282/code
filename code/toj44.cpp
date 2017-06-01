//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf=10000005;
int arr[1005][1005];
int road[1005][1005];
int n,m;
void bfs(int i,int j,int p)
{
	queue<int> q;
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
			road[i][j]=inf;
		}
	}
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	bfs(x1,y1,0);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<road[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
