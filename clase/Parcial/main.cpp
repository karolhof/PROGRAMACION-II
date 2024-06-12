#include <iostream>
#include "class.h"
using namespace std;

int main(){
    Hora H1;
    Alarma A1;
    Temperatura T1;
    T1.setTemperatura(30);
    H1.setHora(11,30,40);
    A1.setAlarma(11,30,41);
    Display D(H1,A1,T1);
    D.mostrarResultados();
    return 0;
}