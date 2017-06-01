#include<iostream>
using namespace std;
int main()
{
	long long int sum;
	long long int n;
	cin >> n;
	sum=n*n*n+2*n;
	cout << sum << endl;
	if(sum%3==0)
		cout << "Yes" << endl;
	else 
		cout << "No" << endl; 
}
