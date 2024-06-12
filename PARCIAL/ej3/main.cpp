//Schahovskoy Hoferek Karol Alexia
//2303211

#include <iostream>
#include "class.h"
using namespace std;

int main() {
    CajaSeguridad C1(1234);
    Banco B1("Banco Nacion");
    Sucursal S1(1,"Karol Hoferek", C1, "Banco Galicia");

    cout<<"Banco: "<<S1.getNombre()<<endl;
    cout<<"Sucursal numero: "<<S1.getNumero()<<endl;
    cout<<"Responsable: "<<S1.getResponsable()<<endl;
    cout<<"Caja de Seguridad: "<<S1.getCajaSeguridad()<<endl;
    return 0;
}
