#include <iostream>
#include "class.h"
using namespace std;

int main(){
    Cuadrado Cu(2,4);
    Triangulo Tr(2,5);
    Cilindro Ci(3,2);
    Caja Ca(2,4,2);
    cout<<"El Perímeto del cuadrado es: "<<Cu.perimetro()<<endl;
    cout<<"El área del cuadrado es: "<<Cu.area()<<endl;
    cout<<endl;
    cout<<"El Perímeto del triangulo es: "<<Tr.perimetro()<<endl;
    cout<<"El área del triangulo es: "<<Tr.area()<<endl;
    cout<<endl;
    cout<<"El volumen del cilindro es: "<<Ci.volumen()<<endl;
    cout<<endl;
    cout<<"El volumen de la caja es: "<<Ca.volumen()<<endl;
    return 0;
}