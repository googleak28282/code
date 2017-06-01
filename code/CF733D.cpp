//by googleak28282
#include<bits/stdc++.h>
#define maxn 100010
using namespace std;
typedef long long ll;
struct ss{
	ll x,y,z,num;
}s[maxn];
bool cmp(ss a,ss b){
	if(a.x==b.x) return a.y>b.y;
	return a.x>b.x;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	ll M=0;
	int tp=0;
	for(int i=0;i<n;i++){
		ll a,b,c;
		cin>>a>>b>>c;
		ll sum=a+b+c;
		s[i].x = max(a , max(b , c));
        s[i].z = min(a , min(b , c));
        s[i].y = (sum - s[i].x - s[i].z);
        s[i].num = i;
        if(M< s[i].z) {
            tp = i;
            M = s[i].z;
        }
	}
	sort(s , s + n , cmp);
    ll sum2 = 0;
    int l = 0;
    int r = l;
    int l2 = l;
    for(int i = 0 ; i < n - 1 ; i++) {
        if(s[i].x == s[i + 1].x && s[i].y == s[i + 1].y) {
            l = i;
            sum2 = s[i].z + s[i + 1].z;
            if(M < min(sum2 , s[i].y)) {
                M = min(sum2 , s[i].y);
                r = i + 1;
                l2 = l;
            }
        }
    }
    if(r - l2 >= 1) {
        cout << r - l2 + 1 << endl;
        for(int i = l2 ; i <= r ; i++) {
            cout << s[i]. num + 1 << ' ';
        }
    }
    else {
        cout << 1 << endl;
        cout << tp + 1 << endl;
    }
	return 0;
}

