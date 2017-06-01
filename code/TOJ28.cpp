//BY Tfcis Snorlax 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int run_time;
int ask_time;
int ask_len;
int len;
int flag;
int yes_flag;
string input;
string ask;

int main()
{
	cin >> run_time;
	for(int i = 1;i <= run_time;i ++)	{
		cin >> input;
		len = input.length();
		for(int j = 1;j <= ask_time;j ++)	{
			cin >> ask;
			flag = 0;
			yes_flag = 0;
			ask_len = ask.length();
			for(int l = 0;l < len;l ++)	{
				if(ask[flag] == input[l])	{
					if(flag == ask_len - 1)	{
						cout << "y\n";
						yes_flag = 1;
					}
				}
				else	{
					flag = 0;
				}
			}	
			if(yes_flag != 1)	{
				cout << "n\n"; 
			}
		} 
	}
	return 0;
}

