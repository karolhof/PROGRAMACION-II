#include <iostream>
#include "class.h"
using namespace std;

void Conteo(Hora& H1, const Hora& H2, Temperatura T1) {
    bool alarmaSonando;
    int segundosTranscurridos;
    while (true) {
        ++H1;
        H1.mostrar();
        T1.mostrar();
        if (H1==H2) {
            alarmaSonando=true;
            segundosTranscurridos=0;
        }
        if (alarmaSonando && (segundosTranscurridos<20)) {
            cout << "ALARMA" << endl;
            for (int i=0; i<1200000000; ++i){
            }
            ++segundosTranscurridos;
        } else {
            alarmaSonando = false;
            for (int i=0; i<1200000000; ++i) {
        }
        }
    }
}

int main(){
    Hora H1;
    Hora H2;
    Temperatura T1;
    T1.setTemperaturaC(30);
    H1.setHora(11,30,40);
    H2.setAlarma(11,30,41);
    Conteo(H1,H2,T1);
    return 0;
}