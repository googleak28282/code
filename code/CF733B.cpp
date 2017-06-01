#include <bits/stdc++.h>
using namespace std;

const int maxn = 100000 + 4;
int l[maxn], r[maxn];
int n;

int main(){

    while(cin >> n){
        int L = 0, R = 0;
        for(int i = 1; i <= n; ++i){
            scanf("%d %d", l + i, r + i);
            L += l[i];
            R += r[i];
        }
        int ans = abs(L - R);
        int k = 0;
        for(int i = 1; i <= n; ++i){
            int t = abs(L - R + 2*r[i] - 2*l[i]);
            if(ans < t) k = i, ans = t;
        }
        cout << k << endl;
    }
    return 0;
}
