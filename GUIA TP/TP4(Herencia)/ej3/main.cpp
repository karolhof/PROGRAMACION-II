#include <iostream>
#include "class.h"
using namespace std;

int main(){
    int cantidad;
    Perecedero O1("carne",500,4);
    NoPerecedero O2("fideos",800,"pastas");
    O2.mostrar();
    cout<<"Cuanto de "<<O2.getNombre()<<" desea comprar?"<<endl;
    cin>>cantidad;
    O2.calcularMonto(cantidad);
    cout<<"El total de"<<O2.getNombre()<<"es: "<<O2.calcularMonto(cantidad)<<endl;
    cout<<"Cuanto de "<<O1.getNombre()<<" desea comprar?"<<endl;
    cin>>cantidad;
    cout<<"El total de"<<O1.getNombre()<<"es: "<<O1.calcularMonto(cantidad)<<endl;
    return 0;
}