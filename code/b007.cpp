//by googleak28282
#include<iostream>
#include<algorithm>
using namespace std;
int arr1[20009];
int arr2[20009];
void merge_sort (int l,int n,int arr[])
{
	int buf[n];
	if(l==n)
	{
		return;
	}
	else 
	{
		int m=(l+n)/2;
		merge_sort (l,m,arr);
		merge_sort (m+1,n,arr);
		int lptr=1,rptr=m+1;
		while(lptr<m+1||rptr<=n)
		{
			if(lptr<m+1&&rptr<=n)
			{
				if(arr[lptr]<arr[rptr])
				{
					buf[lptr-l+rptr-m-1]=arr[lptr];
					lptr+=1;
				}
			}
		}
		for(int i=0;i<n-l+1;)
		{
			arr[i+1]=arr[i];
		}
	}
}
int main()
{
	int n,m,ptr,ans;
	while(scanf("%d",&n)!=EOF)
	{
		ptr=0;
		ans=0;
		int flag=1;
		scanf("%d",&m);
		for(int i=0;i<n;i++)
		{
			scanf("%d",arr1[i]);
		}
		for(int i=0;i<m;i++)
		{
			scanf("%d",arr2[i]);
		}
		sort(arr1 + 1,arr1 + n + 1);  
    	sort(arr2 + 1,arr2 + m + 1);  
		for(int  i = 0;i <n;i ++)  {  
        if(ptr > m)    {  
            flag = 0;  
        }  
        else if(arr2[ptr] >= arr1[i])   {  
            ans += arr2[ptr];  
            ptr++;  
            continue;  
        }  
        	else    {  
            ptr ++;  
            i --;  
        }  
    	}  
    	if(n == 0)  {  
        	printf("0\n");  
    	}  
   		 else if(flag == 0)  {  
        printf("So sad.\n");  
    }  
    else    {  
        printf("%d\n",ans);  
    }  
	}
	return 0;
}

