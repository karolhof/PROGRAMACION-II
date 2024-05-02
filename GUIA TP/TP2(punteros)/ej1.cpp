#include <iostream>
using namespace std;

int main(){
    int var1,var2;
    int *punt;
    cout<<"ingrese la variable 1: ";
    cin>>var1;
    cout<<"ingrese la variable 2: ";
    cin>>var2;
    punt=&var1;
    cout<<punt<<" , "<<*punt<<endl;
    punt=&var2;
    cout<<punt<<" , "<<*punt<<endl;
    return 0;
}