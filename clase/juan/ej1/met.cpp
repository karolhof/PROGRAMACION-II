#include <iostream>
#include "class.h"
using namespace std;

fecha::fecha(int _dia, int _mes, int _año) {
    dia = _dia;
    mes = _mes;
    año = _año;
}

void fecha::decirFecha() {
    cout << "La fecha es = " << dia << "/" << mes << "/" << año << endl;
}

void fecha::decirFechainversa() {
    cout << "La fecha en formato inverso es = " << año << "/" << mes << "/" << dia << endl;
}