#include <iostream>
#include "class.h"
using namespace std;

int main(){
    int real1,imaginario1,real2,imaginario2;
    cout<<"Ingrese un numero complejo: "<<endl;
    cin>>real1>>imaginario1;
    Complejo O1(real1,imaginario1);
    cout<<"Ingrese otro numero complejo: "<<endl;
    cin>>real2>>imaginario2;
    Complejo O2(real2,imaginario2);
    Complejo O3=O1+O2;
    Complejo O4=O2-O1;
    Complejo O5=O1*O2;
    cout<<"Los resultados son: "<<endl;
    O3.mostrar();
    O4.mostrar();
    O5.mostrar();
    return 0;
}