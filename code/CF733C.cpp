#include<bits/sidc++.h>
using namespace std;
int a[550] , b[550] , c[550] , d[550];
int main() {
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    int k;
    cin >> k;
    for(int i = 1 ; i <= k ; i++) cin >> b[i];
    int count = 0;
    int sum = 0;
    int temp = 1;
    c[0] = 1;
    for(int i = 1 ; i <= n ; i++) {
        sum += a[i];
        if(sum == b[temp]) {
            temp++;
            sum = 0;
            c[++count] = i;
            continue;
        }
        if(sum > b[temp]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    if(temp < k + 1) {
        cout << "NO" << endl;
        return 0;
    }
    int gg = 1;
    int flag = 0;
    for(int i = 1 ; i <= count ; i++) {
        int MAX = a[gg];
        flag = 0;
        for(int j = gg ; j <= c[i] ; j++) {
            if(MAX < a[j]) {
                MAX = a[j];
                d[i] = j;
            }
            if(j < c[i]) {
                if(a[j] != a[j + 1])
                    flag = 1;
            }
            if(j > gg) {
                if(a[j] != a[j - 1])
                    flag = 1;
            }
        }
        if(c[i] - gg == 0) {
            flag = 1;
            d[i] = gg;
        }
        if((d[i] == gg || d[i] == 0 ) && flag == 1) {
            for(int j = gg ; j < c[i] ; j++) {
                if(a[j] == a[j + 1]) {
                    d[i] = j + 1;
                }
                else {
                    d[i] = j;
                    break;
                }
            }
        }
        gg = c[i] + 1;
        if(flag == 0)
            break;
    }
    if(flag == 0) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
        gg = 1;
        int ca = 0;
        for(int i = 1 ; i <= count ; i++) {
            int pos = d[i];
            int gll = d[i];
            gll -= ca;
            if(c[i] == gg) {
            }
            if(pos == gg) {
                for(int j = pos ; j < c[i] ; j++) {
                    cout << gll << ' ' << 'R' << endl;
                }
            }
            if(pos == c[i]) {
                for(int j = pos ; j > gg ; j--) {
                    cout << gll << ' ' << 'L' << endl;
                    gll--;
                    ca++;
                }
            }
            if(pos < c[i] && pos > gg) {
                if(a[d[i]] > a[d[i] - 1]) {
                    for(int j = pos ; j > gg ; j--) {
                        cout << gll << ' ' << 'L' << endl;
                        gll--;
                        ca++;
                    }
                    for(int j = pos ; j < c[i] ; j++) {
                        cout << gll << ' ' << 'R' << endl;
                    }
                }
                else {
                    for(int j = pos ; j < c[i] ; j++) {
                        cout << gll << ' ' << 'R' << endl;
                    }
                    for(int j = pos ; j > gg ; j--) {
                        cout << gll << ' ' << 'L' << endl;
                        gll--;
                        ca++;
                    }
                }
            }
            gg = c[i] + 1;
            ca += c[i] - pos;
        }
    }
    return 0;
}
