#include<iostream>
using namespace std;
//in union we can use only one value
union money{
    int rupee;
    char dollar;
    float euro;
};
int main(){
    money m1;
    m1.rupee = 44;
    m1.euro = 4322.55;
    cout<<m1.rupee<<endl;
    cout<<m1.euro<<endl;
    
    
    return 0;
}