#include<bits/stdc++.h>
using namespace std;
int winner(int len, int k) {
    int g, n;
    for(g = 0, n = 1; n <= len; n++) {
        g = (g + k) % n;
    }
    return g + 1;
}
int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		cout<<winner(m,n)<<endl;
	}
	return 0;
}
