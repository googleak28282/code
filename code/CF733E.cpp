#include <bits/stdc++.h>
#define Clear(x,y) memset (x,y,sizeof(x))
#define FOR(a,b,c) for (int a = b; a <= c; a++)
#define REP(a,b,c) for (int a = b; a >= c; a--)
#define first fi
#define second se
#define pii pair<int, int>
#define pli pair<long long, int>
#define mp make_pair
#define pb push_back
using namespace std;
#define maxn 1000005

char s[maxn];
long long n, sum1, sum2;
long long l[maxn], r[maxn];
vector <long long> ans1, ans2, u, d;

int main () {
    //freopen ("more.in", "r", stdin);
    cin >> n >> s+1;
    l[0] = r[n+1] = 0;
    u.clear (); d.clear ();
    FOR (i, 1, n) {
        l[i] = l[i-1]+(s[i] == 'U');
        if (s[i] == 'U') u.pb (i);
        else d.pb (i);
    }
    REP (i, n, 1) {
        r[i] = r[i+1]+(s[i] == 'D');
    }
    int cut = n+1;
    FOR (i, 1, n) {
        if (l[i-1] < r[i+1] || (l[i-1] == r[i+1] && s[i] == 'D')) continue;
        else {
            cut = i;
            break;
        }
    }
    sum1 = sum2 = 0;
    ans1.clear (); ans2.clear ();
    int i = u.size()-1, j = 0;
    FOR (pos, 1, cut-1) {
        if (s[pos] == 'U') sum1 += pos*2;
        else sum2 -= pos*2;
        sum2 += d[j++]*2; 
        ans1.pb (sum2-sum1+pos);
    }
    sum1 = sum2 = 0;
    REP (pos, n, cut) {
        if (s[pos] == 'D') sum2 += pos*2;
        else if (s[pos] == 'U') sum1 -= pos*2;
        sum1 += u[i--]*2; 
        ans2.pb (sum2-sum1+n-pos+1);
    }
    for (int i = 0; i < ans1.size (); i++) cout << ans1[i] << " ";
    REP (i, ans2.size()-1, 0) {
        cout << ans2[i] << " ";
    } cout << endl;
    return 0;
}
