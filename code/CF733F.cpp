#include<bits/stdc++.h>
using namespace std;
#define N 200000 + 10
typedef long long ll;
const int MAXN = 19;
struct Edge{
    bool tag ;
    int u , v , w , c , h ;
} E[N] ;
struct Note {
    int h , v ;
} T[N] , P[N] ;
int fa[N] ;
int Node[2*N] , Next[2*N] , Len[2*N] , Num[2*N] , Head[N] , tot = 0 ;
int Deep[N] , f[N][MAXN] , g[N][MAXN] , h[N][MAXN] ;
int n , m , S , Cnt , ID ;
ll MST , ans ;
bool cmp( Edge a , Edge b ) { return a.w < b.w ; }
int Get( int x ) { return fa[x] == x ? x : fa[x] = Get( fa[x] ) ; }
void link( int u , int v , int w , int ID ) {
    Node[++tot] = v ;
    Next[tot] = Head[u] ;
    Len[tot] = w ;
    Num[tot] = ID ;
    Head[u] = tot ;
}
void DFS( int x , int F ) {
    for (int p = Head[x] ; p ; p = Next[p] ) {
        if ( Node[p] == F ) continue ;
        f[Node[p]][0] = x ;
        g[Node[p]][0] = Len[p] ;
        h[Node[p]][0] = Num[p] ;
        Deep[Node[p]] = Deep[x] + 1 ;
        DFS( Node[p] , x ) ;
    }   
}
int Find( int x , int y ) {
    ID = 0 ;
    int ret = 0 ;
    if ( Deep[x] < Deep[y] ) swap( x , y ) ;
    for (int i = MAXN - 1 ; i >= 0 ; i -- ) {
        if ( Deep[f[x][i]] >= Deep[y] ) {
            if ( g[x][i] > ret ) ID = h[x][i] ;
            ret = max( ret , g[x][i] ) ;
            x = f[x][i] ;
        }
    }
    if ( x == y ) return ret ;
    for (int i = MAXN - 1 ; i >= 0 ; i -- ) {
        if ( f[x][i] != f[y][i] ) {
            if ( g[x][i] > ret ) ret = g[x][i] , ID = h[x][i] ;
            if ( g[y][i] > ret ) ret = g[y][i] , ID = h[y][i] ;
            x = f[x][i] , y = f[y][i] ;
        }
    }
    if ( g[x][0] > ret ) ret = g[x][0] , ID = h[x][0] ;
    if ( g[y][0] > ret ) ret = g[y][0] , ID = h[y][0] ;
    return ret ;
}
int main() {
    scanf( "%d%d" , &n , &m ) ;
    for (int i = 1 ; i <= n ; i ++ ) fa[i] = i ;
    for (int i = 1 ; i <= m ; i ++ ) scanf( "%d" , &E[i].w ) ;
    for (int i = 1 ; i <= m ; i ++ ) scanf( "%d" , &E[i].c ) ;
    for (int i = 1 ; i <= m ; i ++ ) scanf( "%d%d" , &E[i].u , &E[i].v ) , E[i].h = i ;
    scanf( "%d" , &S ) ;
    sort( E + 1 , E + m + 1 , cmp ) ;
    for (int i = 1 ; i <= m ; i ++ ) {
        int fx = Get(E[i].u) ;
        int fy = Get(E[i].v) ;
        if ( fx != fy ) {
            fa[fx] = fy ;
            link( E[i].u , E[i].v , E[i].w , E[i].h ) ;
            link( E[i].v , E[i].u , E[i].w , E[i].h ) ;
            E[i].tag = 1 ;
            MST += E[i].w ;
            T[++Cnt].h = E[i].h ;
            T[Cnt].v = E[i].w ;
        }
    }
    Deep[1] = 1 ;
    DFS( 1 , 0 ) ;
    for (int j = 1 ; j < MAXN ; j ++ ) {
        for (int i = 1 ; i <= n ; i ++ ) {
            f[i][j] = f[f[i][j-1]][j-1] ;
            g[i][j] = max( g[i][j-1] , g[f[i][j-1]][j-1] ) ;
            if ( g[i][j-1] >= g[f[i][j-1]][j-1] ) h[i][j] = h[i][j-1] ;
            else h[i][j] = h[f[i][j-1]][j-1] ;
        }
    }
    ans = MST ;
    memcpy( P , T , sizeof(T) ) ;
    for (int i = 1 ; i <= m ; i ++ ) {
        if ( E[i].tag ) {
            if ( MST - S / E[i].c < ans ) {
                ans = MST - S / E[i].c ;
                for (int k = 1 ; k <= Cnt ; k ++ ) {
                    P[k] = T[k] ;
                    if ( P[k].h == E[i].h ) P[k].v -= S / E[i].c ;
                }
            }
        }
        else {
            int len = Find( E[i].u , E[i].v ) ;
            if ( MST - len + E[i].w - S / E[i].c < ans ) {
                ans = MST - len + E[i].w - S / E[i].c ;
                for (int k = 1 ; k <= Cnt ; k ++ ) {
                    P[k] = T[k] ;
                    if ( P[k].h == ID ) {
                        P[k].h = E[i].h ;
                        P[k].v = E[i].w - S / E[i].c ;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
    for (int i = 1 ; i <= Cnt ; i ++ ) printf( "%d %d\n" , P[i].h , P[i].v ) ;
    return 0 ;
}
