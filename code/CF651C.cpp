#include <bits/stdc++.h>  
using namespace std;  
struct N   
{  
    int a,b;  
}num[200100];  
bool cmp1(N a , N b)        //第一次排序  
{  
    if ( a.a == b.a)  
    {  
        return a.b < b.b;  
    }  
    return a.a < b.a;  
}  
bool cmp2(N a , N b)    //第二次排序  
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
        __int64 temp = 1;       //几?是相同的  
        __int64 tt = 1;         //重复的??  
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
                    res -= tt * (tt - 1) / 2;   //去重  
                    tt = 1;  
                }  
            }  
            else   
            {  
                res += temp * (temp -1 ) / 2;       //排列?合，?temp????合的??  
                res -= tt * (tt - 1) / 2;  
                tt = 1;  
                temp = 1;  
            }  
        }  
        if ( tt != 1)       //判??尾是不是有些?有去重  
        {  
            res -= tt * (tt -1 ) / 2;   
        }  
        tt = 1;  
        if ( temp != 1 )        //判??尾有些是不是?有?算  
        {  
            res += temp * (temp - 1) / 2;  
        }  
        //printf("%I64d\n",res);  
        temp = 1;  
        sort(num,num+n,cmp2);       //第二次排序  
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
