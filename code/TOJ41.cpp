#include<bits/stdc++.h> 
using namespace std;
#define maxn 10005//�D�ص��w�I���d��
#define maxm 500005//�D�ص��w�䪺�d��
int n,m;//n-> �I���ƶq  m->�䪺�ƶq
struct Edge{
	int u,v,cost;//u,v���o���䪺��Ӻ��I�Acost�����䪺�v��
}es[maxm];//�Ҧ�����
bool cmp(Edge a,Edge b)//�H�䪺�v�����Ƨ�
{
	return a.cost<b.cost;
}
int pa[maxn];//�����C���I���W�@�N�����O��
int find(int x)//�M�䯪��
{
	if(pa[x]==x) return x;//�o�{�ۤv�N�O�o�Ӷ��X������(���)�A��return �ۤv�C
	return pa[x]=find(pa[x]);
	//return �o�Ӷ��X������(���)�A�ç�ۤv�s�h���(�o�D�`���n)�C
	//�Y�u���greturn find(pa[x]);�����׷|�걼
}
void U(int x,int y)//�N��Ӷ��X�X��
{
	pa[find(x)]=find(y);//�Nx�������s��y������
	//���O���i�g��pa[x]=y;
}
int kruskal()
{
	int ans=0;
	for(int i=0;i<n;++i) pa[i]=i;//�N�C���I�������w�]���ۤv
	sort(es,es+m,cmp);//sort��  
	for(int i=0;i<m;++i)
	{
		Edge e=es[i];
		if(find(e.u)!=find(e.v))//�Y���I�b���P�����X�h�X��
		{
			U(e.u,e.v);
			ans+=e.cost;//�⵪�ץ[�W���䪺cost
		}
	}
	for(int i=1;i<n;++i) if(find(i)!=find(i-1)) return -1;//�Y��������I���A�P�@�Ӷ��X�h�N���s�bMST
	return ans;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=0;i<m;++i)
	{
		cin>>es[i].u>>es[i].v>>es[i].cost;
	}
	cout<<kruskal()<<'\n';
}
