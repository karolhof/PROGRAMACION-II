#include <iostream>
#include "class.h"
using namespace std;

int main(){
    int longitud;
    string contraseña;
    Password O1;
    cout<<"Ingrese la longitud que desea para su contraseña"<<endl;
    cin>>longitud;
    O1.setLong(longitud);
    cout<<"Se generó una contraseña defauutl, para cambiarla, escriba a continuacion la contraseña que desee"<<endl;
    cin>>contraseña;
    O1.generarPassword(contraseña);
    O1.mostrar();
    return 0;
}