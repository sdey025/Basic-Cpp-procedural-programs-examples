#include<iostream>
using namespace std;

typedef struct employee
{
    int empId;
    char favChar;
    float salary;
} ep;

int main(){
    ep shivasish;
    shivasish.empId = 1;
    shivasish.favChar = 's';
    shivasish.salary = 3.8;
    
    cout<<"My ID: "<<shivasish.empId<<endl;
    cout<<"My Favourite Character: "<<shivasish.favChar<<endl;
    cout<<"My Salary: "<<shivasish.salary<<"LPA"<<endl;

    return 0;
}