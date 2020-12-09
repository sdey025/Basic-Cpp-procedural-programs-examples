#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int age;
    cout<<"Enter yout age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"Your age is 18"<<endl;
        break;
    case 22:
        cout<<"Your age is 22"<<endl;
        break;
    case 2:
        cout<<"Your age is 2"<<endl;
        break;
    
    default:
        cout<<"No special cases";
        break;
    }
    return 0;
}
