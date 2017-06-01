#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		s=reverse(s);
		cout<<s<<endl;
	}
}
