#include <iostream>
#include "clase.h"

Fecha::Fecha(int _dia, int _mes, int _año){
    dia=_dia;
    mes=_mes;
    año=_año;
}
Fecha::Fecha(){
    dia=01;
    mes=01;
    año=1900;
}

int Fecha::getDia(){
    return dia;
}

int Fecha::getMes(){
    return mes;
}

int Fecha::getAño(){
    return año;
}

void Fecha::operator++(){
    dia=*p+1;
    mes=*q;
    año=*k;

}

void Fecha::operator--(){
    dia=*p-1;
    mes=*q;
    año=*k;

}

void Fecha::operator+(int _dias){
    dia=*p+_dias;
}
void Fecha::operator-(int _dias){
    dia=*p-_dias;
}

