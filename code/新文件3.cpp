#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int a[10]={4,1,8,2,2,9,0,6,6,7};
	sort(a,a+10);//需要先排序   sort函式要include<algorithm> 
	//for(int i=0;i<10;++i) cout<<a[i]<<' ';cout<<endl;
	int x;//欲搜尋的值 
	while(cin>>x)
	{
		int l=0,r=9;
		/*//另一個寫法 
		while(l<r)
		{
			int mid=(l+r)/2;
			if(a[mid]<x) l=mid+1;
			else r=mid;
		}
		if(a[l]==x) cout<<"yes\n";
		else cout<<"no\n";
		*/
 
		bool Y=0;//Y=0 ->沒找到 。 Y=1 -> 有找到 
		while(l<=r)
		{
			int mid=(l+r)/2;
			if(a[mid]==x)
			{
				Y=1;break;
			}
			else if(a[mid]<x) l=mid+1;
			else r=mid-1;
		}
		if(Y==1) cout<<"yes\n";
		else cout<<"no\n";
	}
}
