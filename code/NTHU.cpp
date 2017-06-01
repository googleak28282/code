#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string cmd;
    deque<int> A,B;
    while(getline(cin,cmd))
    {
        A.clear();B.clear();
        for(char c:cmd)
        {
            if(c=='<'){
                if(!A.empty()){
                    B.push_front(A.back());
                    A.pop_back();
                }
            }else if(c=='>'){
                if(!B.empty()){
                    A.push_back(B.front());
                    B.pop_front();
                }
            }else{
                A.push_back(c);
            }
        }
        for(char c:A)cout<<c;
        for(char c:B)cout<<c;
        cout<<endl;
    }
}
 
