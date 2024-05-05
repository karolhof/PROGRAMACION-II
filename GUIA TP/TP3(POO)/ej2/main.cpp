#include <iostream>
#include "class.h"
using namespace std;

int main(){
    int numerador1,denominador1, numerador2,denominador2,entero;
    cout<<"ingrese un numero racion en el siguiente formato: numerador/denominador"<<endl;
    cin>>numerador1>>denominador1;
    Racional O1(numerador1,denominador1);
    cout<<"ingrese un numero racion en el siguiente formato: numerador/denominador"<<endl;
    cin>>numerador2>>denominador2;
    Racional O2(numerador2,denominador2);
    Racional O3=O2+O1;
    O3.mostrar();
    cout<<"Ingrese un entero: "<<endl;
    cin>>entero;
    O1+=entero;
    O1.mostrar();
    cout<<"Los racionales simplificados son: "<<endl;
    O1.simplificar();
    O3.simplificar();
    O1.mostrar();
    O3.mostrar();
    return 0;
}