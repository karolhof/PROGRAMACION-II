#include <iostream>
#include "class.h"
using namespace std;


//HORA
Hora::Hora(){
}
void Hora::setHora(int _horas, int _minutos, int _segundos){
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

//ALARMA

Alarma::Alarma(){
}
void Alarma::setAlarma(int _horas, int _minutos, int _segundos){
    horas=_horas;
    minutos=_minutos;
    segundos=_segundos;
}
int Alarma::getHoras(){
    return horas;
}
int Alarma::getMinutos(){
    return minutos;
}
int Alarma::getSegundos(){
    return segundos;
}

bool Hora::operator==(Alarma& otro){
    if ((horas==otro.getHoras())&&(minutos==otro.getMinutos())&&(segundos==otro.getSegundos())){
        return true;
    }
    return false;
}

//TEMPERATURA
Temperatura::Temperatura(){
}
void Temperatura::setTemperatura(float _grados){
    grados=_grados;
}
float Temperatura::getTemperatura(){
    return grados;
}
void Temperatura::mostrar(){
    cout<<"La temperatura es: "<<endl;
    cout<<"C: "<<grados<<endl;
    cout<<"F: "<<(grados-32)*0.5556<<endl;
    cout<<"K: "<<grados+273.15<<endl;
}

//DISPLAY
Display::Display(Hora _hora, Alarma _alarma, Temperatura _temperatura){
    hora=_hora;
    alarma=_alarma;
    temperatura=_temperatura;
}
void Display::mostrarResultados(){
    bool alarmaSonando;
    int segundosTranscurridos;
    while (true) {
        ++hora;
        hora.mostrar();
        temperatura.mostrar();
        if (hora==alarma) {
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