#include<iostream>
using namespace std;
int area(int l, int b){
    return (l*b);
}
int area(int a){
    return (a*a);
}
int area(int l,int b, int h){
    return ((2*(l*b)) + (2*(h*b)) +(2*(l*h)));
}
int main(){

    cout<<"Area of Rectriangle is "<<area(5,4)<<endl;
    cout<<"Area of Square is "<<area(7)<<endl;
    cout<<"Area of Cuboid is "<<area(6,4,7)<<endl;
    
    
    return 0;
}