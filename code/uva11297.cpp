#include<bits/stdc++.h>
#define X first
#define Y second
#define mpp make_pair
#define nl printf("\n")
#define SZ(x) (int)(x.size())
#define pb(x) push_back(x)
#define pii pair<int,int>
#define pll pair<ll,ll>
///---------------------
#define S(a) scanf("%d",&a)
#define P(a) printf("%d",a)
#define SL(a) scanf("%lld",&a)
#define S2(a,b) scanf("%d%d",&a,&b)
#define SL2(a,b) scanf("%lld%lld",&a,&b)
///------------------------------------
#define all(v) v.begin(),v.end()
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,-1,sizeof(a))
#define fr(i,a,n) for(int i=a;i<=n;i++)
using namespace std;
typedef long long ll;

///  Digit     0123456789012345678 ///
#define MX     705
#define inf    2000000010
#define eps    1e-9
///===============================///

pair<int, int>nd[(4 * MX)][(4 * MX)];
int n, m, leaf, xx, yy, ar[MX][MX];

void Buildy(int idx, int id, int l, int r) {
    if( l == r ) {
        if(leaf) {
            nd[idx][id] = mpp( ar[xx][l], ar[xx][l]);
        } else {
            nd[idx][id].X = max( nd[idx * 2][id].X, nd[idx * 2 + 1][id].X );
            nd[idx][id].Y = min( nd[idx * 2][id].Y, nd[idx * 2 + 1][id].Y );
        }
        return;
    }
    int md = (l + r) >> 1, lft = (id << 1), rgt = lft + 1;
    Buildy(idx, lft, l, md);
    Buildy(idx, rgt, md + 1, r);
    nd[idx][id].X = max(nd[idx][lft].X, nd[idx][rgt].X);
    nd[idx][id].Y = min(nd[idx][lft].Y, nd[idx][rgt].Y);
}

void Buildx(int id, int l, int r) {
    if( l == r ) {
        leaf = 1;
        xx = l;
        Buildy(id, 1, 1, m);
        return;
    }
    int md = (l + r) >> 1, lft = (id << 1), rgt = lft + 1;
    Buildx(lft, l, md);
    Buildx(rgt, md + 1, r);
    leaf = 0;
    Buildy(id, 1, 1, m);
}

void Updy(int idx, int id, int l, int r, int py, int vl) {
    if(l == py && r == py) {
        if(leaf) {
            nd[idx][id] = mpp( vl,vl );
        } else {
            nd[idx][id].X = max( nd[idx * 2][id].X, nd[idx * 2 + 1][id].X );
            nd[idx][id].Y = min( nd[idx * 2][id].Y, nd[idx * 2 + 1][id].Y );
        }
        return;
    }
    int md = (l + r) >> 1, lft = (id << 1), rgt = lft + 1;
    if( py <= md ) Updy(idx, lft, l, md, py, vl);
    else Updy(idx, rgt, md + 1, r, py, vl);
    nd[idx][id].X = max(nd[idx][lft].X, nd[idx][rgt].X);
    nd[idx][id].Y = min(nd[idx][lft].Y, nd[idx][rgt].Y);
}

void Updx(int id, int l, int r, int x, int y, int vl) {
    if( l == x && r == x ) {
        leaf = 1;
        Updy(id, 1, 1, m, y, vl);
        return;
    }
    int md = (l + r) >> 1, lft = (id << 1), rgt = lft + 1;
    if(x <= md) Updx(lft, l, md, x, y, vl);
    else Updx(rgt, md + 1, r, x, y, vl);
    leaf = 0;
    Updy(id, 1, 1, m, y, vl);
}

pii Qry(int idx, int id, int l, int r, int ly, int ry) {
    if(l == ly && r == ry) return nd[idx][id];
    int md = (l + r) >> 1, lft = (id << 1), rgt = lft + 1;
    if(ry <= md) return Qry(idx, lft, l, md, ly, ry);
    else if(ly > md) return Qry(idx, rgt, md + 1, r, ly, ry);
    else {
        pii a = Qry(idx, lft, l, md, ly, md);
        pii b = Qry(idx, rgt, md + 1, r, md + 1, ry);
        return mpp( max(a.X, b.X), min(a.Y, b.Y) );
    }
}

pii Qryx(int id, int l, int r, int lx, int rx, int ly, int ry) {
    if( l == lx && r == rx )return Qry(id, 1, 1, m, ly, ry);
    int md = (l + r) >> 1, lft = (id << 1), rgt = lft + 1;
    if(rx <= md) return Qryx(lft, l, md, lx, rx, ly, ry);
    else if(lx > md) return Qryx(rgt, md + 1, r, lx, rx, ly, ry);
    else {
        pii a = Qryx(lft, l, md, lx, md, ly, ry);
        pii b = Qryx(rgt, md + 1, r, md + 1, rx, ly, ry);
        return mpp(max(a.X, b.X), min(a.Y, b.Y));
    }
}


int main() {
    int i, j, k, x, y, l, q, a, b, c, d, vl;

    S(n);
    m=n;/// Column Size!!
    fr(i, 1, n) {
        fr(j, 1, n) {
            S(ar[i][j]);
        }
    }
    Buildx(1, 1, n);
    S(q);
    while(q--) {
        char op[2];
        scanf("%s",op);
        if(op[0]=='q') {
            S2(a,b);
            S2(c,d);
            pair<int, int> dt = Qryx(1, 1, n, a, c, b, d);
            printf("%d %d\n",dt.X,dt.Y);
        } else {
            S2(x,y);
            S(vl);
            Updx(1, 1, n, x, y, vl);
        }
    }
    return 0;
}
