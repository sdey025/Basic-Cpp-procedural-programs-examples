#include<iostream>
//there are two types of header files
//1. system header files
//2. user defined header files
int global_c = 45;
using namespace std;
int main()
{
   /*  int a,b,c;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    c = a + b;
    cout<<"Enter the value of c is "<<c<<endl;

    cout<<::global_c<<endl; // cout<<::global_c use to print global variable
 */
    float value = 34.4f;
    long double value2 = 34.4l;
    cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4 is "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4 is "<<sizeof(34.4l)<<endl;

    /* TYPECASTING (kisi v ek variable ko doosre m change krna. jaise int ko char) */

    float a = 45.6f;
    int b = 43;
    cout<<"value of a is "<<(int)a<<endl;
    cout<<"value of a is "<<(float)b<<endl;
    cout<<"value of a+b is "<<a+b<<endl;



    return 0;
}
