#include <iostream>
#include <string>
using namespace std;

string W, T;
int pi[10001];	// prefix index for W string

void Compute_pi();
int KMP();

int main()
{
	ios::sync_with_stdio(false);
	int Case;
	cin >> Case;
	while (Case--) {
		cin >> W >> T;
		Compute_pi();
		cout << KMP() << endl;
	}
}
void Compute_pi()
{
	pi[0] = -1;
	for (int q = 1; q < W.size(); ++q) {
		if (W[q] == W[pi[q-1]+1])
			pi[q] = pi[q-1]+1;
		else if (W[q] == W[0])
			pi[q] = 0;
		else
			pi[q] = -1;
	}
}
int KMP()
{
	// q is index of W string, i is index of T string
	int result = 0;
	int q = -1;

	for (int i = 0; i < T.size(); ++i) {
		while (q >= 0 && W[q+1] != T[i])
			q = pi[q];
		if (W[q+1] == T[i])
			++q;
		if (q == W.size()-1) {
			++result;
			q = pi[q];
		}
	}
	return result;
}
