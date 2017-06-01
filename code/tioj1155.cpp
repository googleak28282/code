//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
priority_queue<double> minheap;
int main()
{
    int n;scanf("%d",&n);
    while(n--)
    {
        char a[5];double b;
        scanf("%s %lf",a,&b);
        minheap.push(-b);
    }
    double penalty=0;
    while(minheap.size()>=2)
    {
        double a,b;
        a=minheap.top(); minheap.pop();
        b=minheap.top(); minheap.pop();
        penalty+=a+b;
        minheap.push(a+b);
    }
    printf("%.2f",-penalty);
    return 0;
}
