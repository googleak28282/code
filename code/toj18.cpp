//by googleak28282
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
int main()
{
	string s;
	string t;
	while(getline(cin,s))
	{
		t=""; 
		for(int i=0;i<s.size();i++)
		{
			if(((s[i]>=65)&&(s[i]<=90))||((s[i]>=97)&&(s[i]<=122)))
			{
				t+=s[i];
			}
		}
		for(int i=0;i<t.size();i++)
		{
			if(t[i]>=91)
			{
				t[i]-=32;
			}
		}
		string a;
		a=t;  
        reverse(t.begin(),t.end());  
        if(a!=t)  
        {  
            cout<<s<<endl;  
        }  
        else  
        {  
            cout<<"SETUP! "<<s<<endl;  
        }  
	}
	return 0;
}

