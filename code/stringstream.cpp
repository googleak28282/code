#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        int ans=0;
        stringstream ss(s);
        int t;
        while(ss>>t){
            ans++;
        }
        cout<<ans<<endl;
    }
}
