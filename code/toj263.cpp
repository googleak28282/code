//by googleak28282
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int seg[400004];
void modify(int i,int v,int L,int R,int idx)
{
	if(L==R) seg[idx]=v;
	else
	{
		int mid=(L+R)/2;
		if(i<mid)
		{
			modify(i,v,L,mid,idx*2);
		}
		else
		{
			modify(i,v,mid+1,R,idx*2+1);
		}
		seg[idx]=max(seg[idx*2],seg[idx*2+1]);
	}
}
int query(int l,int r,int L,int R,int idx)
{
	if(l==r&&L==R) return seg[idx];
	else
	{
		int mid=(L+R)/2;
		if(r<=mid)
		{
			return query(l,r,L,mid,idx*2);
		}
		else if(l>mid)
		{
			return query(l,r,mid+1,R,idx*2+1);
		}
		else
		{
			return max(query(l,mid,L,mid,idx*2),query(mid+1,r,mid+1,R,idx*2+1));
		}
	}
}
int main()
{
	int n,q;
	cin>>n>>q;
	int t;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		modify(i,t,0,n-1,1);
	}
	while(q--)
	{
		int type;
		cin>>type;
		int a,b;
		if(type==1)
		{
			cin>>a>>b;
			a--;
			modify(a,b,0,n-1,1)
		}
		else if(type==2)
		{
			cin>>a>>b;
			a--;
			b--;
			cout<<query(a,b,0,n-1,1)<<endl;
		}
		else if(type==3)
		{
			cin>>a>>b;
			
		}
	}
	return 0;
}

