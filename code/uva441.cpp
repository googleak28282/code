#include<iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int N, S[100], choosed[100], ans[100];
void func(int len, int pos)
{
    if (len == 6){
        for (int i = 0; i < 5; ++i)
            cout<<ans[i]<<" ";
        cout<<ans[5]<<endl;
        return;
    }
    for (int i = pos; i < N; ++i) {
        if (!choosed[i]) {
            choosed[i] = 1;
            ans[len] = S[i];
            func(len+1, i + 1);
            choosed[i] = 0;
        }
    }
}
int main()
{
    int Case = 0;
    while (scanf("%d", &N) && N) {
        if (Case++) printf("\n");
        for (int i = 0; i < N; ++i){
            cin>>S[i];
            choosed[i] = 0;
        }
        func(0,0);
    }
    return 0;
}

