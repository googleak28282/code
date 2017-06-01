
#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int num[n];
        bool a=0;
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
        }
        while(--n)
        {
            if(num[i]!=num[i-1])
            {
                a=1;
                break;
            }
        }
        if(a)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
}
