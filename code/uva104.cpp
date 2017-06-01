#include<bits/stdc++.h>
int n;
double pro[30][30][30];
int pre[30][30][30];
void printPath(int s,int i,int j){
    if(s<=0)return ;
    int sb = pre[s][i][j];
    printPath(s-1,i,sb);
    printf(" %d",sb+1);
}
int main(){
    int i,j;
    int k,s;
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;++i){
            for(j=0;j<n;++j){
                if(i==j)pro[0][i][j] = 1.0;
                else scanf("%lf",&pro[0][i][j]);
                pre[0][i][j] = -1;
            }
        }
        for(s=1;s<n;++s){
            for(i=0;i<n;++i){
                for(j=0;j<n;++j){
                    pro[s][i][j] = -9999;
                }
            }
            for(k=0;k<n;++k){
                for(i=0;i<n;++i){
                    for(j=0;j<n;++j){
                        if(pro[s][i][j] < pro[s-1][i][k]*pro[0][k][j]){
                            pro[s][i][j] = pro[s-1][i][k]*pro[0][k][j];
                            pre[s][i][j] = k;
                        }
                    }
                }
            }
            for(i=0;i<n;++i){
                if(pro[s][i][i] > 1.01)break;
            }
            if(i<n)break;
        }
        if(s==n)puts("no arbitrage sequence exists");
        else {
            printf("%d",i+1);
            printPath(s,i,i);
            printf(" %d\n",i+1);
        }
    }
    return 0;
}

