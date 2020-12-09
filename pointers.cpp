#include<iostream>
using namespace std;

int main(){
    int a = 45;
    int *b = &a;
    int **c = &b;

    cout<<"value of a is "<<a<<endl;
    cout<<"address of a is "<<b<<endl;
    cout<<"value at a is "<<*b<<endl;
    cout<<"address of b is "<<c<<endl;
    cout<<"value at address b is "<<*c<<endl;
    cout<<"value at address value at(value at(c)) of b is "<<**c<<endl;
    //cout<<"value at address value at(value at(c)) of b is "<<***c<<endl;

    

    
    return 0;
}