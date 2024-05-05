#include <iostream>
#include "class.h"

Cronometro::Cronometro(int _horas, int _minutos, int _segundos){
    segundos=_segundos%60;
    minutos=(_minutos+(_segundos/60))%60;
    horas=_horas+((_minutos+(_segundos/60))/60);
}
Cronometro::Cronometro(){
    segundos=0;
    minutos=0;
    horas=0;
}
void Cronometro::mostrar(){
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutos: "<<minutos<<endl;
    cout<<"Segundos: "<<segundos<<endl;
}
void Cronometro::reset(){
    segundos=0;
    minutos=0;
    horas=0;
}

Cronometro& Cronometro::operator++(){
    segundos=(segundos+1)%60;
    if (segundos==0){
        minutos=(minutos+1)%60;
        if (minutos==0){
            horas=(horas+1)%24;
        }
    }
    return *this;
}
