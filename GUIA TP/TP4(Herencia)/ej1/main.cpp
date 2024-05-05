#include <iostream>
#include "class.h"
using namespace std;
int main(){
    int x,y,lado,radio,op;
    cout<<"que figura desea representar?"<<endl;
    cout<<"1-Circulo"<<endl;
    cout<<"2-Cuadrado"<<endl;
    cout<<"3-Punto"<<endl;
    cin>>op;
    if (op==1){
        cout<<"Ingrese las coordenadas (x,y) del centro del circulo"<<endl;
        cin>>x>>y;
        cout<<"Ingrese el radio del circulo"<<endl;
        cin>>radio;
        Circulo O1(x,y,radio);
        O1.mostrar();
    } else{
        if (op==2){
        cout<<"Ingrese las coordenadas (x,y) del centro del cuadrado"<<endl;
        cin>>x>>y;
        cout<<"Ingrese el lado del cuadrado"<<endl;
        cin>>lado;
        Cuadrado O2(x,y,lado);
        O2.mostrar();
        } else {
            if (op==3){
                cout<<"Ingrese las coordenadas (x,y) del punto"<<endl;
                cin>>x>>y;
                Punto O3(x,y);
                O3.mostrar();
            } else {
                cout<<"Opcion no valida"<<endl;
            }
        }
    }

    return 0;
}