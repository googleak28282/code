#include <iostream>
using namespace std;
const int maxn=100000+5;
int Left[maxn],Right[maxn];
#define head 0
#define last 100003
void Link(int L,int R)
{
    Right[L]=R;
    Left[R]=L;
}
void initial(int N)
{
    Link(head,1);
    for(int i=1;i<N;i++)
    {
        Link(i,i+1);
    }
    Link(N,last);
}
int main()
{
    int boxN,cmdN;
    int caseN=1;
    while(cin>>boxN>>cmdN)
    {
        initial(boxN);//�걵N�ӼƦr
        bool Reverse=false;
        for(int i=0;i<cmdN;i++)
        {
            int cmd,x,y;
            cin>>cmd;
            if(cmd!=4)
            {
                cin>>x>>y;
            }
            else//��������
            {
                Reverse=!Reverse;
            }
            int Lx=Left[x],Rx=Right[x];
            int Ly=Left[y],Ry=Right[y];
            if(Reverse and cmd<3) cmd=3-cmd;
            switch(cmd)
            {
            case 1://��x���ʨ�y����
                if(Ly==x) break;//x�w�g�by����
                Link(Ly,x);
                Link(x,y);
                Link(Lx,Rx);
                break;
            case 2://��x���ʨ�y�k��
                if(Ry==x) break;//x�w�g�by�k��
                Link(y,x);
                Link(x,Ry);
                Link(Lx,Rx);
                break;
            case 3://x�Py����m�洫
                if(Lx==y)//y�bx����
                {
                    Link(Ly,x);
                    Link(x,y);
                    Link(y,Rx);
                }
                else if(Rx==y)//y�bx�k��
                {
                    Link(Lx,y);
                    Link(y,x);
                    Link(x,Ry);
                }
                else
                {
                    Link(Lx,y);
                    Link(y,Rx);
                    Link(Ly,x);
                    Link(x,Ry);
                }
                break;
            }
        }
        cout<<"Case "<<caseN++<<": ";
        long long sum=0;
        if(Reverse)
        {
            for(int i=Left[last] ,j=0; i!=head ; i=Left[i],j++)
            {
                if(!(j&1)) sum+=i;
            }
        }
        else
        {
            for(int i=Right[head],j=0 ; i!=last ; i=Right[i],j++)
            {
                if(!(j&1)) sum+=i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
