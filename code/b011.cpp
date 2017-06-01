//by googleak28282    
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
long long int arr[5];
int main()
{      
    int n,t,m;    
    scanf("N=%d",&n);
    {    
        t=n/5;    
        for(int i=0;i<5;i++)    
        {    
            arr[i]=t;    
        }    
        t=t*5;    
        m=n-t;    
        for(int i=0;i<m;i++)    
        {    
            arr[i]++;    
        }
		sort(arr,arr+5);    
        long long int ans=1;    
        for(int i=0;i<5;i++)    
        {    
            printf("%d\n",arr[i]);    
            ans*=arr[i];    
        }    
        printf("%d\n",ans);    
    }    
    return 0;    
}    
