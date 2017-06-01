//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct cat
{
	string name;
	string level;
	int age;
};
bool operator<(cat a,cat b)
{
	return a.age<b.age;
}
cat a[10005];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].name>>a[i].level>>a[i].age;
	}
	return 0;
}

