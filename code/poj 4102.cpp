#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MAXN = 100000;
int N, M;
int A[MAXN];
int S[MAXN];

const int MAX_NN = (1 << 17);
int NN;
vector<int> seg[2 * MAX_NN - 1];

void build(int u, int l, int r) {
    if (l + 1 == r) {
        if (l < N)
            seg[u].push_back(A[l]);
        return;
    }

    int m = (l + r) / 2;
    build(u * 2 + 1, l, m);
    build(u * 2 + 2, m, r);
    seg[u].resize(r - l);
    merge(seg[u * 2 + 1].begin(), seg[u * 2 + 1].end(),
          seg[u * 2 + 2].begin(), seg[u * 2 + 2].end(),
          seg[u].begin());
}

// return the number of items in [a, b) is less than val
int query(int a, int b, int val, int u, int l, int r) {
    if (l >= b || r <= a) {
        return 0;
    }

    if (a <= l && r <= b) {
        return upper_bound(seg[u].begin(), seg[u].end(), val) -
                seg[u].begin();
    }

    int m = (l + r) / 2;
    int cnt1 = query(a, b, val, u * 2 + 1, l, m);
    int cnt2 = query(a, b, val, u * 2 + 2, m, r);
    return cnt1 + cnt2;
}

// find the k-th smallest number in [a, b)
int solve(int a, int b, int k) {
    // binary search on index of S
    // C(x) = is the number which is less than S[x] >= k - 1
    // 0 0 0 1 1 1, first 1

    int lb = 0, ub = N - 1;

    if (query(a, b, S[lb], 0, 0, NN) >= k)
        return S[lb];
    // if (query(a, b, S[ub], 0, 0, NN) < k - 1)
        // impossible;
    while (ub - lb > 1) {
        int mid = (lb + ub) / 2;
        if (query(a, b, S[mid], 0, 0, NN) >= k) ub = mid;
        else lb = mid;
    }

    return S[ub];
}

int main() {
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
        scanf("%d", &A[i]);

    copy(A, A + N, S);
    sort(S, S + N);

    NN = 1;
    while (NN < N)
        NN <<= 1;
    build(0, 0, NN);

    while (M--) {
        int a, b, k;
        scanf("%d %d %d", &a, &b, &k);
        a--; b--;
        printf("%d\n", solve(a, b + 1, k));
    }

    return 0;
}
