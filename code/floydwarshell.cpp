//by googleak28282
#include<bits/stdc++.h>
#define INF 2147483647    // ��int���̤j�Ȱ����L���j
using namespace std;
typedef long long LL;
int graph[N][N];          // ���]�ڭ̦�N���I�C�o�̦s���O��(i,j)���Z��(�L�V��)
                          // �S����ɪ��Z���N�OINF
int dp[N][N];             // �ΨӰ�DP�A�����Z�������A��l�Ʒ|����graph[i][j]
int last[N][N];           // �O���ثe�n���i���I�[�J���T�p���һݭn���Z��
void init(){              // ��l��
    int i, j;                       
    for ( i = 0 ; i < N ; i++ ){
        for ( j = 0 ; j < N ; j++ ){
            dp[i][j] = graph[i][j];   // �p�G(i, j)����N�|�O�ӱ���A�Ϥ��h�|�OINF
            last[i][j] = -1;          // -1�N��S�g�L�����I
    	}
    }
}
void floyd_warshall(){
    int i, j, k;  
    for ( k = 0 ; k < N ; k++ ){
        for ( i = 0 ; i < N ; i++ ){
            for ( j = 0 ; j < N ; j++ ){
                // �_�I�β��I�O��e���ժ��Ik   �άO�_�I������I   �N���L
                if ( i == j || i == k || j == k ) continue; 
                if ( dp[i][k] + dp[k][j] < dp[i][j] ){   // �z�L�Ik�����N��s
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

