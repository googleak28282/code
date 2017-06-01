//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x,y;
	cin>>x>>y;
	int ans=0;
	while(1){
		if(x>y) swap(x,y);
		if(x==2&&y==2){
			ans++;
			break;
		}
		if(x==1&&y==2){
			ans++;
			break;
		}
		if(x==1&&y==1) break;
		if(y&1) {
			ans+=y/2;
			x+=y/2;
			y=1;
		}
		else{
			ans+=y/2-1;
			x+=y/2-1;
			y=2; 
		}
//		cout<<x<<' '<<y<<endl;
	}
	cout<<ans<<endl;
	return 0;
}

