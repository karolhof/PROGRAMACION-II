#include <iostream>
#include "clase.h"

int main() {
    int dia,mes,año;
    cout<<"ingrese una fecha en el siguiente formato: dd/mm/aa"<<endl;
    cin>>dia>>mes>>año;
    Fecha fechaDada(dia,mes,año);
    ++fechaDada;
    cout<<"La fecha dada ha sido incrementada en un dia, la nueva fecha es: "<<endl;
    cout<<fechaDada.getDia()<<"/"<<fechaDada.getMes()<<"/"<<fechaDada.getAño()<<endl;
    return 0;
}