#include<iostream>
#include "class.h"
using namespace std;
int main(){
    double numCuenta,tasaInteres, deposito, extraccion;
    cout<<"Ingrese el numero de cuenta y la tasa de interes"<<endl;
    cin>>numCuenta>>tasaInteres;
    Cuenta O1(numCuenta,tasaInteres);
    cout<<"Cuanto dinero desea depositar?"<<endl;
    cin>>deposito;
    O1.deposito(deposito);
    cout<<"Cuanto dinero desea extraer?"<<endl;
    cin>>extraccion;
    O1.extraccion(extraccion);
    O1.mostrar();
    cout<<"Los intereses han sido aplicados: "<<endl;
    O1.interes();
    O1.mostrar();
    return 0;
}