//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL arr[2000005];
LL bubble_sort(LL arr[],LL len) {
	LL i, j;
	LL ans=0;
	for (i = 0; i < len - 1; i++){
		for (j = 0; j < len - 1 - i; j++){
			if (arr[j] > arr[j + 1]){
				swap(arr[j], arr[j + 1]);
				ans++;
			}
		}
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<bubble_sort(arr,n)<<endl;
	return 0;
}

