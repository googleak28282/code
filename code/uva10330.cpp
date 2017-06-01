#include<cstdio>
#include<cstdlib>
#include<vector>
#define INF 100000000
using namespace std;
vector<int> to[1000];
struct{ int a, b, val;} es[10001]; int ecnt;
int _n;
void init(int n){
    _n = n;
    for(int lx = 0;lx <= n;lx++)
        to[lx].clear();
    ecnt = 0;
    return;
}
void addedge(int a, int b, int val){
    //printf("%d~%d = %d\n", a, b, val);
    es[ecnt].a = a, es[ecnt].b = b, es[ecnt].val = val; to[a].push_back(ecnt++);
    es[ecnt].a = b, es[ecnt].b = a, es[ecnt].val = 0; to[b].push_back(ecnt++);
    return;
}
int que[10000];
int frm[10000];
int vis[10000];
int pth[10000]; int pathcnt;
int bfs(int s, int t){
    int n = _n;
    for(int lx = 0;lx <= n;lx++)
        frm[lx] = -1, vis[lx] =0;
    int qs = 0, qe = 1;
    que[0] = s, vis[s] = 1;
    while(qs < qe){
        int g = que[qs++];
        for(int lx = 0;lx < to[g].size();lx++){
            int lind = to[g][lx];
            int pind = es[lind].b;
            if(vis[pind]) continue;
            if(es[lind].val <= 0) continue;
            frm[pind] = lind;
            que[qe++] = pind;
            vis[pind] = 1;
        }
    }
    if(vis[t] == -1) return 0;
    int pp = t;
    pathcnt = 0;
    int min_val = INF;
    while(pp != s){
        int lind = frm[pp];
        pth[pathcnt++] = lind;
        min_val = min(min_val, es[lind].val);
        pp = es[lind].a;
    }
    for(int lx = 0;lx < pathcnt;lx++){
        int lind = pth[lx];
        es[lind].val -= min_val;
        es[lind^1].val += min_val;
    }
    return min_val;
}
int Ekarp(int s, int t){
    int f = 0, df = 1;
    while(df){
        df = bfs(s, t);
        f += df;
    }
    return f;
}

int now_ind;
int get_ind(){return now_ind++;}

int main()
{
    int n;
    while(scanf("%d", &n) == 1){
        int pmax[1000] = {0};
        int mat[101][101] = {0};
        int ss, tt;
        int starr[100];
        for(int lx = 0;lx < n;lx++)
            scanf("%d", pmax+lx);
        int m; scanf("%d", &m);
        while(m--){
            int a, b, val; scanf("%d %d %d", &a, &b, &val);
            mat[a-1][b-1] += val;
        }
        scanf("%d %d", &ss, &tt);
        for(int lx = 0;lx < ss+tt;lx++){
            scanf("%d", starr+lx);
            starr[lx]--;
        }
        now_ind = 0;
        int ms = get_ind(), mt = get_ind();
        //printf("ms %d, mt %d\n", ms, mt);
        int mpin[101], mpout[101];
        for(int lx = 0;lx < n;lx++)
            mpin[lx] = get_ind(), mpout[lx] = get_ind();
        init(get_ind());
        for(int lx = 0;lx < ss;lx++)
            addedge(ms, mpin[starr[lx]], INF);
        for(int lx = 0;lx < tt;lx++)
            addedge(mpout[starr[ss+lx]], mt, INF);
        for(int lx = 0;lx < n;lx++)
            addedge(mpin[lx], mpout[lx], pmax[lx]);
        for(int lx = 0;lx < n;lx++)
            for(int ly = 0;ly < n;ly++)
                if(mat[lx][ly])
                    addedge(mpout[lx], mpin[ly], mat[lx][ly]);
        printf("%d\n", Ekarp(ms, mt));
    }
    return 0;
}
