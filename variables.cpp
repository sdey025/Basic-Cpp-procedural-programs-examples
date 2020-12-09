#include <iostream> 
using namespace std;
int global = 6;
void sum(){
    int a=54;
    cout<<"\n"<<global;
}

int main(){
    int a = 4;
    int b = 5;
    float pi = 3.14;
    char c = 'a';
    bool d = true;
    cout<<"value of a is "<<a<<"\nand value of b is "<<b;
    cout<<"\nvalue of pi is "<<pi;
    cout<<"\nvalue of c is "<<c;
    sum();
    cout<<"\nvalue of d is "<<d;
    return 0 ;
}