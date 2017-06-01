#include<bits/stdc++.h>
using namespace std;
struct Point{
    int X;
    int Y;
}point[501];
struct Edge {
    int a_index;
    int b_index;
    double Len;
}E[501 * 501];
int nOfE;
int Set[501];

bool cmp(const Edge &A, const Edge &B) {
    return A.Len < B.Len;
}
int Find_Root(int x)
{
    if (x == Set[x])
        return x;
    return Set[x] = Find_Root(Set[x]);
}
bool Union(const Edge &E, vector<double> &LenOfEdge)
{
    int a = Find_Root(E.a_index);
    int b = Find_Root(E.b_index);
    if (a != b) {
        Set[a] = b;
        LenOfEdge.push_back(E.Len);
        return true;
    }
    return false;
}
int main()
{
    int Case;
    int S, P;
    scanf("%d", &Case);
    while (Case--) {
        scanf("%d %d", &S, &P);
        for (int i = 0; i < P; ++i) {
            scanf("%d %d", &point[i].X, &point[i].Y);
            Set[i] = i;
        }
        nOfE = 0;
        for (int i = 0; i < P; ++i) {
            for (int j = i + 1; j < P; ++j) {
                double L = sqrt(pow(point[i].X - point[j].X, 2) + pow(point[i].Y - point[j].Y, 2));
                E[nOfE++] = {i, j, L};
            }
        }
        sort(E, E + nOfE, cmp);

        vector<double> LenOfEdge;
        for (int i = 0, nOfEdges = 0; nOfEdges != P - 1; ++i) {
            if (Union(E[i], LenOfEdge)) ++nOfEdges;
        }

        printf("%.2f\n", LenOfEdge[P-S-1]);
    }
}
