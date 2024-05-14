#include <iostream>
#include "class.h"
using namespace std;

void pedir_fecha(int& day, int& month, int& year){
        cout << "Ingrese el anio" << endl ;
        cin >> year ;
        cout << "Ingrese el mes " << endl ;
        cin >> month ;
        cout << "Ingrese el dia " << endl ;
        cin >> day ;
}

int main (){
    int day,month,year;
    pedir_fecha(day,month,year);
    fecha date(day,month,year);
    date.decirFecha();
    date.decirFechainversa();
    date.decirFecha();
    return 0;
}