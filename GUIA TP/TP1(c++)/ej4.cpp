#include <iostream>
using namespace std;

void menu (int& num){
        cout<<"Ingrese un número"<<endl;
    cin>>num;
}

int factorial(int num){
    int result=1;
    for (int i=2; i<=num; i++){
        result=result*i;
    }
    return result;
}

int main (){
    int num;
    menu (num);
    factorial(num);
    int resultado=factorial(num);
    cout<<"El resultado del factorial del numero es: "<<resultado<<endl;
    return 0;
}