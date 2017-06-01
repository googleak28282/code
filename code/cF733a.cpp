//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	while(cin>>s){
		int l=s.length();
		int k=-1;
		int M=0;
		int i;
		for(i=0;i<l;i++){
			if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'){
				M=max(M,i-k);
				k=i;
			}
		}
		M=max(M,l-k);
		cout<<M<<endl;
	}
	return 0;
}

