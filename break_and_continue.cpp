#include<iostream>
using namespace std;

int main(){
    int i,j,k,l,m,n;

    for ( i = 0; i < 50; i++)
    {
        cout<<i<<endl;
        if(i == 10)
        break;
    }
    for ( j = 0; j < 40; j++)
    {
        if(j>10 && j<20)
            continue;
        
         cout<<j<<endl;
    }
    
       
    
    return 0;
}