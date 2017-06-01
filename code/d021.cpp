//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	double a,b,c,d,e,f;
	double g;
	while(cin>>a>>b>>c>>d>>e>>f)
	{
		g=sqrt(pow(a-d,2)+pow(b-e,2));
		if(c+f>=g)
		{
			cout<<"Quick in"<<endl;
		}
		else
		{
			cout<<"Nearly"<<endl;
		}
	}
	return 0;
}

