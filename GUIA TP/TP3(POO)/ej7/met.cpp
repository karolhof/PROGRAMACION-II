#include <iostream>
#include "class.h"
using namespace std;

Cuenta::Cuenta(int _numeroCuenta,double _tasaInteres){
    numeroCuenta=_numeroCuenta;
    tasaInteres=_tasaInteres;
    saldo=0.0;
}
void Cuenta::setSaldo(int _saldo){
    saldo=_saldo;
}

void Cuenta::interes(){
    double nuevoSaldo=saldo+((saldo*tasaInteres)/100);
    setSaldo(nuevoSaldo);
}
void Cuenta::deposito(double ingreso){
    int nuevoSaldo=saldo+ingreso;
    setSaldo(nuevoSaldo);
}
void Cuenta::extraccion(double egreso){
    int nuevoSaldo=saldo-egreso;
    setSaldo(nuevoSaldo);
}
void Cuenta::mostrar(){
    cout<<"Cuenta: "<<numeroCuenta<<endl;
    cout<<"Saldo: "<<saldo<<endl;
    cout<<"Tasa de interes: "<<tasaInteres<<endl;
}