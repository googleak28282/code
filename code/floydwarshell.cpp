//by googleak28282
#include<bits/stdc++.h>
#define INF 2147483647    // 用int的最大值做為無限大
using namespace std;
typedef long long LL;
int graph[N][N];          // 假設我們有N個點。這裡存的是邊(i,j)的距離(無向邊)
                          // 沒有邊時的距離就是INF
int dp[N][N];             // 用來做DP，紀錄距離的表格，初始化會等於graph[i][j]
int last[N][N];           // 記錄目前要把第i個點加入正確聯盟所需要的距離
void init(){              // 初始化
    int i, j;                       
    for ( i = 0 ; i < N ; i++ ){
        for ( j = 0 ; j < N ; j++ ){
            dp[i][j] = graph[i][j];   // 如果(i, j)有邊就會是該條邊，反之則會是INF
            last[i][j] = -1;          // -1代表沒經過任何點
    	}
    }
}
void floyd_warshall(){
    int i, j, k;  
    for ( k = 0 ; k < N ; k++ ){
        for ( i = 0 ; i < N ; i++ ){
            for ( j = 0 ; j < N ; j++ ){
                // 起點或終點是當前嘗試的點k   或是起點等於終點   就跳過
                if ( i == j || i == k || j == k ) continue; 
                if ( dp[i][k] + dp[k][j] < dp[i][j] ){   // 透過點k有更近就更新
                dp[i][j] = dp[i][k] + dp[k][j];
                last[i][j] = k;
            	}
            } 
        }
    }
}
int main()
{
	return 0;
}

