#include <bits/stdc++.h>  
using namespace std;  
struct N   
{  
    int a,b;  
}num[200100];  
bool cmp1(N a , N b)        //�Ĥ@���Ƨ�  
{  
    if ( a.a == b.a)  
    {  
        return a.b < b.b;  
    }  
    return a.a < b.a;  
}  
bool cmp2(N a , N b)    //�ĤG���Ƨ�  
{  
    if ( a.b == b.b)  
    {  
        return a.a < b.a;  
    }  
    return a.b < b.b;  
}  
int main()  
{  
    int n;  
    while (~scanf("%d",&n ) )  
    {  
        for (int i = 0 ; i < n ; i++ )  
        {  
            scanf("%d%d",&num[i].a,&num[i].b);  
        }  
        sort(num,num+n,cmp1);  
        __int64 temp = 1;       //�L?�O�ۦP��  
        __int64 tt = 1;         //���`��??  
        __int64 res = 0;  
        for (int i = 1 ; i < n ; i++ )  
        {  
            if(num[i].a == num[i-1].a)      //xi == xi-1  
            {  
                temp ++;  
                if ( num[i].b == num[i-1].b)          
                {  
                    tt++;  
                }  
                else   
                {  
                    res -= tt * (tt - 1) / 2;   //�h��  
                    tt = 1;  
                }  
            }  
            else   
            {  
                res += temp * (temp -1 ) / 2;       //�ƦC?�X�A?temp????�X��??  
                res -= tt * (tt - 1) / 2;  
                tt = 1;  
                temp = 1;  
            }  
        }  
        if ( tt != 1)       //�P??���O���O����?���h��  
        {  
            res -= tt * (tt -1 ) / 2;   
        }  
        tt = 1;  
        if ( temp != 1 )        //�P??�����ǬO���O?��?��  
        {  
            res += temp * (temp - 1) / 2;  
        }  
        //printf("%I64d\n",res);  
        temp = 1;  
        sort(num,num+n,cmp2);       //�ĤG���Ƨ�  
        for (int i = 1 ; i < n ; i++ )  
        {  
            if(num[i].b == num[i-1].b)  
            {  
                temp ++;  
            }  
            else   
            {  
                res += temp * (temp -1 ) / 2;  
                temp = 1;  
            }  
        }  
        if ( temp != 1 )  
        {  
            res += temp * (temp - 1) / 2;  
        }  
        printf("%I64d\n",res);  
    }  
    return 0;  
}  
