//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define eps 1e-6
int main() {
	double A[16][64], B[16][64];
	for (int M = 0; M <= 9; M++) {
		for (int E = 1; E <= 30; E++) {
			double p = 1 - pow(2, -M - 1);
			double q = pow(2, E) - 1;
			double logsum = log10(p) + log10(2) * q;
			double b = floor(logsum);
			double a = pow(10, logsum - b);
			A[M][E] = a, B[M][E] = b;
		}
	}
	char s[128];
	while (scanf("%s", s) == 1) {
		if (!strcmp(s, "0e0"))
			break;
		for (int i = 0; s[i]; i++)
			if (s[i] == 'e')	s[i] = ' ';
		double p, q;
		sscanf(s, "%lf %lf", &p, &q);
		for (int i = 0; i <= 9; i++)
			for (int j = 1; j <= 30; j++)
				if (fabs(A[i][j] - p) < eps && fabs(B[i][j] - q) < eps)
					printf("%d %d\n", i, j);
	}
	return 0;
}
