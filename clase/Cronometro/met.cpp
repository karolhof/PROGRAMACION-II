#include <iostream>
#include "class.h"

//Hora
Hora::Hora(){
    horas=0;
    minutos=0;
    segundos=0;
}
void Hora::setHora(int _horas , int _minutos, int _segundos){
    horas=_horas;
    minutos=_minutos;
    segundos=_segundos;
}
void Hora::setAlarma(int _horas , int _minutos, int _segundos){
    horas=_horas;
    minutos=_minutos;
    segundos=_segundos;
}
Hora& Hora::operator++(){
    segundos=(segundos+1)%60;
    if (segundos==0){
        minutos=(minutos+1)%60;
        if (minutos==0){
            horas=(horas+1)%24;
        }
    }
    return *this;
}
void Hora::mostrar(){
    cout<<"La hora es:"<<endl;
    cout<<horas<<":"<<minutos<<":"<<segundos<<endl;
}
bool Hora::operator==(const Hora& otro){

    if ((horas==otro.horas)&&(minutos==otro.minutos)&&(segundos==otro.segundos)){
        return true;
    }
    return false;
}
//Temperatura
Temperatura::Temperatura(){
    grados=0;
}
void Temperatura::setTemperaturaC(double _grados){
    grados=_grados;
}
void Temperatura::mostrar(){
    cout<<"La temperatura es: "<<endl;
    cout<<"C: "<<grados<<endl;
    cout<<"F: "<<(grados-32)*0.5556<<endl;
    cout<<"K: "<<grados+273.15<<endl;
}
