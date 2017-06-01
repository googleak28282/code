#include<iostream>
#include<iomanip> 
#include <stdio.h> 
#include <stdlib.h>  
using namespace std;
int main() { 
	int N;
	cin>>N;
    int square[36][36] ; 
    for(int i=0;i<36;i++)
    {
    	for(int j=0;j<36;j++)
    	{
    		square[i][j]=0; 
		}
	}
    int i = 0; 
    int j = (N+1) / 2;
	if(N==1)
	{
		square[1][1]=1 ;
	}
	else
	{
		int key;
   		for(key = 1; key <= N*N; key++) { 
        	if((key % N) == 1) 
            	i++; 
        	else { 
            	i--; 
            	j++; 
        	} 
        	if(i == 0) 
            	i = N; 
        	if(j > N) 
            	j = 1; 
        	square[i][j] = key; 
    	} 
	}
    for(int i=N;i>=1;i--)    
    {    
        for(int j=1;j<=N;j++)    
        {    
            if(j==N)    
                cout<<"+---+";    
            else    
                cout<<"+---";    
        }    
        cout<<endl;    
        for(int j=1;j<=N;j++)    
        {    
            if(j==1)    
            {    
                cout<<"|";    
            }    
            cout<<setw(3)<<square[i][j]<<"|";    
        }    
        cout<<endl;    
            
    }    
    for(int j=1;j<=N;j++)    
        {    
            if(j==N)    
                cout<<"+---+";    
            else    
                cout<<"+---";    
        }    
    cout<<endl;  
    return 0; 
} 
