//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string s;
	while(cin>>s)
	{
		for(int i=0;i<26;i++)
		{
			for(int j=0;j<s.size();j++)
			{
				s[j]--;
				if(s[j]<97) s[j]+=26; 
			}
			cout<<s<<endl;
		}
	} 
	return 0;
}

