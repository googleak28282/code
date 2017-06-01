#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	unsigned long long int n,i, face, number[7] = {0};
	while(cin >> n)
	{
		memset(number,0,7);
		srand(time(NULL));
		for(i = 1; i <=n; i++)
		{	
			face = rand() % 6 + 1;
			number[face]++;
		}
		cout<<"點數\t次數\t機率\n";
		cout<<"------------------------\n";
		for(i = 1; i < 7; i++)
		{
			cout<<i<<'\t'<<number[i]<<'\t'<<(float)number[i]/n*100<<'%'<<endl;
		} 
	}
	return 0;
}

