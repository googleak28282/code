#include<iostream>
#include<cmath>
#include<iomanip>
#define F(x) (p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u)
int main()
{
    int p,q,r,s,t,u;
    while(std::cin>>p>>q>>r>>s>>t>>u)
    {
        double Max=1.0,Min=0.0,mid;
        for(int i=0;i<100;i++)
        {
            mid=(Max+Min)/2;
            if(F(mid)>0)
                Min=mid;
            else
                Max=mid;
        }
        if(abs(F(mid)-0)>1e-14)
            std::cout<<"No solution"<<std::endl;
        else
            std::cout<<std::setprecision(4)<<mid<<std::endl;
    }
    return 0;
}
