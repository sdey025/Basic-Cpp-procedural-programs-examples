#include<iostream>
using namespace std;

int main(){
    int i,j,k,l,m,n;
    int marks[4] = {23,21,24,22};
    int *p = marks;
    cout<<"the value of p is "<<p<<endl;
    cout<<"the value of *p is "<<*p<<endl;
    cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
/*     cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl; */
    return 0;
}