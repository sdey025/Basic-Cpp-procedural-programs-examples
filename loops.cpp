#include<iostream>
using namespace std;
int main(){
    int i = 1;
    // printing 1 to 10 in for loop
/*     for(i=1; i<=10; i++){
        cout<<i<<endl;
    } */
    // printing 1 to 10 in while loop
/*     while(i=10){
        cout<<i<<endl;
        i++;
    } */
    // printing 1 to 10 in do while loop
   /*  do{
        cout<<i<<endl;
        i++;
    }while(i<=10); */
    for ( i = 1; i <= 10; i++)
    {
        int j = 4;
        int k = j*i;
        cout<<j<<"x"<<i<<"="<<k<<endl;
    }
    

    return 0;
}
