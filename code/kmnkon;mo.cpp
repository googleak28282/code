//by googleak28282
#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ll;

long long mod = 999983;
long long inv[1100000];    // precompute modular inverse
long long w[1100000];      // this is a_i
long long bw[1100000];     // this is b_i
long long bb[1100000];     // this is c_i
vector<int> arr[1100000];  // store tree structure

// modular inverse, modified from https://rosettacode.org/wiki/Modular_inverse
long long mod_inv(long long a) {
  long long b = mod;
  long long b0 = b, t, q;
  long long x0 = 0, x1 = 1;
  while (a > 1) {
    q = a / b;
    t = b, b = a % b, a = t;
    t = x0, x0 = x1 - q * x0, x1 = t;
  }
  if (x1 < 0) x1 += b0;
  return x1;
}

// dfs on tree, id is current node, pre is parent
void dfs(int id, int pre = -1) {
  long long wmul = 1;
  int zcnt = 0;
  int zid = -1;
  for (int kid : arr[id]) {
    if (kid == pre) continue;
    dfs(kid, id);
    if (w[kid] == 0) {
      zcnt++;             // count zeros
      zid = kid;          // remember the id for use if zcnt = 0
    } else {
      wmul = (wmul * w[kid]) % mod;  // b_i without multiplying any 0s
    }
  }
  w[id] = 1;
  bw[id] = 1;
  bb[id] = 0;
  for (int kid : arr[id]) {
    if (kid == pre) continue;
    w[id] = (w[id] * (w[kid] + bw[kid] + bb[kid])) % mod; // a_i
    bw[id] = (bw[id] * w[kid]) % mod;                     // b_i
    long long tmp = wmul;
    if (zcnt == 0) tmp *= inv[w[kid]];     // zcnt = 0: just * inv_mod
    else if (zcnt == 1 && zid == kid) {    // zcnt = 1 and id match, tmp = wmul
    } else if(zcnt == 1 && zid != kid) tmp = 0; // zcnt = 1 and id unmatch, tmp = 0
    else tmp = 0;                               // zcnt > 1, tmp = 0
    bb[id] = (bb[id] + ((tmp % mod) * bw[kid]) % mod) % mod; // c_i
  }
}

int main() {
  // precompute modular inverse, this can be REPLACED by a O(mod) algorithm
  for (int i = 1; i < mod; i++) inv[i] = mod_inv(i);
  int n;
  scanf("%d", &n);
  for (int i = 1; i < n; i++) {
    int a, b;
    scanf("%d%d", &a, &b);
    arr[a].push_back(b);
    arr[b].push_back(a);
  }
  dfs(0);
  printf("%d\n", (int)((w[0] + bw[0] + bb[0]) % mod));

  return 0;
}
