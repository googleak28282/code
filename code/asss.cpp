//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[200005];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while(cin>>n){
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=1;i<n-1;i++){
			if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1]))
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}

