#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
void solve(int a,int b){
    int marked[3005] = {0};
    string str;
    printf("%d/%d = %d.", a, b, a/b);
    a = a % b;
    marked[a] = 1;
    int i;
    for(i = 2 ; ; i++)
    {
        a = a * 10;
        str.push_back(a/b + '0');
        a = a % b;
        if(marked[a])
            break;
        marked[a] = i;
    }
    int start = marked[a];
    int end = i;
    for(int i = 0 ; i < end-1 && i < 50 ; i++){
        if(i == start-1)
            printf("(");

        printf("%c",str[i]);
    }
    if(end-start >= 50)
        printf("...");

    printf(")\n");
    printf("   %d = number of digits in repeating cycle\n", end-start);
}


int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b) == 2)
    {
        solve(a,b);
        printf("\n");
    }
    return 0;
}
