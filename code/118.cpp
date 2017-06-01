#include <iostream>
#include<vector>
using namespace std;

int main()
{
	int a,b,n,m;
	string s;
	while(cin>>n)
	{
		vector<int> v[n];
		int x[n];
		for(int i=0;i<n;i++)
		{
			x[i]=i;
			v[i].push_back(i);
		}
		while(cin>>s)
	    {
			bool k=0;
			m=0;
			if(s=="quit")
			{
				break;
			}
			else if(s=="move")
			{
				cin>>a>>s>>b;
				if(a==b||x[a]==x[b])
					continue;
				if(s=="onto")
				{
					for(int i:v[x[b]])
					{
						if(k)
						{
							x[i]=i;
							v[i].push_back(i);
							m++;
							continue;
						}
						if(i==b)
						{
							k=1;
						}
					}
					while(m--)
					{
						v[x[b]].pop_back();
					}
					k=0;
					m=0;
					for(int i:v[x[a]])
                    {
                        if(k)
                        {
                            x[i]=i;
                            v[i].push_back(i);
                            m++;
                            continue;
                        }
                        if(i==a)
                        {
                            k=1;
                            m++;
                        }
                    }
					while(m--)
					{
						v[x[a]].pop_back();
					}
					v[x[b]].push_back(a);
					x[a]=x[b];
				}
				else
                {
                    for(int i:v[x[a]])
                    {
                        if(k)
                        {
                            x[i]=i;
                            v[i].push_back(i);
                            m++;
                            continue;
                        }
                        if(i==a)
                        {
                               k=1;
                               m++;
                        }
                    }
                    while(m--)
                    {
                        v[x[a]].pop_back();
                    }
                    x[a]=x[b];
                    v[x[b]].push_back(a);
                }
			}
			else
			{
				cin>>a>>s>>b;
				if(a==b||x[a]==x[b])
				{
					continue;
				}
				if(s=="onto")
                {
                    for(int i:v[x[b]])
                    {
                        if(k)
						{
							x[i]=i;
							v[i].push_back(i);
							m++;
							continue;
						}
						if(i==b)
						{
							k=1;
						}
                    }
                    while(m--)
                    {
                        v[x[b]].pop_back();
                    }
                    k=0;
                    m=0;
                    v[x[b]].push_back(a);
                    for(int i:v[x[a]])
                    {
                        if(k)
                        {
                            x[i]=x[b];
							v[x[b]].push_back(i);
							m++;
							continue;
                        }
                        if(i==a)
                        {
                            k=1;
                            m++;
                        }
                    }
                    while(m--)
                    {
                        v[x[a]].pop_back();
                    }
                    x[a]=x[b];
                }
                else
                {
                    v[x[b]].push_back(a);
                    for(int i:v[x[a]])
                    {
                        if(k)
                        {
                            x[i]=x[b];
                            v[x[b]].push_back(i);
                            m++;
                            continue;
                        }
                        if(i==a)
                        {
                            k=1;
                            m++;
                        }
                    }
                    while(m--)
                        v[x[a]].pop_back();
                    x[a]=x[b];
                }
			}
		}
		for(int i=0;i<n;i++)
        {
            cout<<i<<":";
            for(int j:v[i])
                cout<<" "<<j;
            cout<<endl;
        }
	}
	return 0;
}

