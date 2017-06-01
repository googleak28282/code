#include <bits/stdc++.h>
#define INF 1001000000
using namespace std;
struct Treap;
Treap *nul;
struct Treap{
	int pri,val,sz;
	Treap *l,*r;
	int mx;
	Treap(int v)
	{
		mx=val=v;
		pri=rand();
		l=r=nul;
		sz=1;
	}
	void up()
	{
		sz=l->sz+r->sz+1;
		mx=max({val,l->mx,r->mx});
	}
	~Treap()
	{
		if(l!=nul) delete l;
		if(r!=nul) delete r;
	}
};
Treap *merge(Treap *a,Treap *b)
{
	if(a==nul) return b;
	if(b==nul) return a;
	if(a->pri>b->pri)
	{
		a->r=merge(a->r,b);
		a->up();
		return a;
	}
	else
	{
		b->l=merge(a,b->l);
		b->up();
		return b;
	}
}
void split(Treap *t,Treap *&a,Treap *&b,int k)
{
	if(t==nul) {a=b=nul; return;}
	if(k<=t->l->sz)
	{
		b=t;
		split(t->l,a,t->l,k);
	}
	else
	{
		a=t;
		split(t->r,t->r,b,k-t->l->sz-1);
	}
	t->up();
}
int a[100000];
Treap *build(int l,int r)
{
	if(l==r) return new Treap(a[l]);
	int mid=(l+r)/2;
	return merge(build(l,mid),build(mid+1,r));
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	// srand(829);
	srand(time(0));

	nul=new Treap(-INF);
	nul->sz=0;

	int n,q;
	Treap *tr;
	while(cin>>n>>q)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		tr=build(0,n-1); //faster
		// tr=nul;
		// for(int i=0;i<n;i++)
		// {
		// 	int t;
		// 	cin>>t;
		// 	tr=merge(tr,new Treap(t));
		// }
		while(q--)
		{
			int type,x,y;
			cin>>type;
			if(type==1)
			{
				cin>>x>>y;
				Treap *a,*b,*c;
				split(tr,a,b,x-1);
				split(b,b,c,1);
				delete b;
				b=new Treap(y);
				tr=merge(merge(a,b),c);
			}
			else if(type==2)
			{
				cin>>x>>y;
				Treap *a,*b,*c;
				split(tr,a,c,y);
				split(a,a,b,x-1);
				cout<<b->mx<<endl;
				tr=merge(merge(a,b),c);
			}
			else if(type==3)
			{
				cin>>x>>y;
				Treap *a,*b,*c;
				split(tr,a,c,x-1);
				b=new Treap(y);
				tr=merge(merge(a,b),c);
			}
			else
			{
				cin>>x;
				Treap *a,*b,*c;
				split(tr,a,b,x-1);
				split(b,b,c,1);
				delete b;
				tr=merge(a,c);
			}
		}
		delete tr;
	}
}

