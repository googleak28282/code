//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char a[105],b[105];
int main()
21 {
22     while(~scanf("%s%s",a,b))
23     {
24         int len1 = strlen(a),len2 = strlen(b);
25         int i=0,j=0,ans;
26         while(i<len1 && j<len2)
27         {
28             if(a[i]-'0'+b[j]-'0'<=3)
29             {
30                 i++;
31                 j++;
32             }
33             else
34             {
35                 i = i-j+1;
36                 j = 0;
37             }
38         }
39         ans = len1+len2-j;
40         i=0,j=0;
41         while(i<len1 && j<len2)
42         {
43             if(a[i]-'0'+b[j]-'0'<=3)
44             {
45                 i++;
46                 j++;
47             }
48             else
49             {
50                 j = j-i+1;
51                 i = 0;
52             }
53         }
54         printf("%d\n",min(ans,len2+len1-i));
55     }
	return 0;
}

