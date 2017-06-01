//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void m_p();
void m_pf();
bool isPrime[1001]={};
int PrimeFactor[1001][16]={};
struct data{
     int n, s;
};
int main()
{
    m_p();
    m_pf();
    int n, m, T = 0;
    while(~scanf("%d%d", &n, &m)){
        if(n == 0)
            break;
        data Queue[100000]={};
        Queue[0].n = n, Queue[0].s = 0;
        int l = 0, r = 1, Ans[1001];
        for(int i = 1; i <= 1000; i++)
            Ans[i] = 999999;
        Ans[n] = 0;
        while(l < r){
            data temp = Queue[l];
            l++;
            if(temp.n == m)
                break;
            for(int i = 1; i <= PrimeFactor[temp.n][0]; i++){
                if(temp.n+PrimeFactor[temp.n][i] > m || temp.s+1 >= Ans[temp.n+PrimeFactor[temp.n][i]])
                    continue;
                Ans[temp.n+PrimeFactor[temp.n][i]] = temp.s+1;
                Queue[r].n = temp.n+PrimeFactor[temp.n][i], Queue[r].s = temp.s+1, r++;
            }
        }
        if(Ans[m] == 999999)
            printf("Case %d: -1\n", ++T);
        else
            printf("Case %d: %d\n", ++T, Ans[m]);
    }
    return 0;
}
void m_p(){
    isPrime[2] = true;
    for(int i = 3; i <= 1000; i += 2){
        int judge = 1;
        for(int j = 2; j*j <= i; j++)
            if(i%j == 0)
                judge = 0;
        if(judge)
            isPrime[i] = true;
    }
}
void m_pf(){
    for(int i = 2; i <= 1000; i++)
        for(int j = 2; j < i; j++)
            if(isPrime[j] && i%j == 0)
                PrimeFactor[i][++PrimeFactor[i][0]] = j;
}

