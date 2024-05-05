#include <iostream>
#include "class.h"
using namespace std;

int main(){
    int x1,y1,x2,y2,entero;
    cout<<"Ingrese las coordenadas de un punto (x,y)"<<endl;
    cin>>x1>>y1;
    Punto O1(x1,y1);
    cout<<"Ingrese las coordenadas de otro punto (x,y)"<<endl;
    cin>>x2>>y2;
    Punto O2(x2,y2);
    Punto O3=O1+O2;
    O3.mostrar();
    Punto O4;
    O4.mostrar();
    cout<<"Ingrese un entero: "<<endl;
    cin>>entero;
    Punto O5=O1+entero;
    O5.mostrar();
    ++O5;
    O5.mostrar();
    return 0;
}