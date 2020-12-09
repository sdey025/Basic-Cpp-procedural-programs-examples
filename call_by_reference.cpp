#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    
}
int main(){
    int a = 4, b = 5;
    cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;
    cout<<"after swaping"<<endl;
    swap(&a,&b);
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;
    return 0;
}