#include <iostream>
#include "class.h"
using namespace std;

cronometro::cronometro(int _horas , int  _minutos , int  _segundos){
    segundos = _segundos %60;
    minutos =(_minutos+(_segundos/60)%60);
    horas = _horas+((_minutos=(_segundos/60)/60));
}

cronometro::cronometro(){
    horas = 0 ;
    minutos = 0 ;
    segundos = 0 ;
}

void cronometro::reset(){
    horas = 0 ;
    minutos = 0 ;
    segundos = 0 ;
}

cronometro& cronometro ::operator++(){
    segundos= (segundos+1)%60;
    if (segundos == 0 ){
        minutos = (minutos+1)%60;
        if(minutos == 0){
            horas=(horas +1)  ;
        }
    }
    return *this;
}

void cronometro::mostrar(){
    cout << "horas = " << horas << endl ;
    cout << "minutos = " << minutos << endl ;
    cout << "Segundos = " << segundos << endl;
}