#include <iostream>
#include "class.h"

Racional::Racional(int _numerador, int _denominador){
    numerador=_numerador;
    denominador=_denominador;
}

Racional Racional::operator+(const Racional& otro){
    int nuevoNumerador=numerador*otro.denominador + otro.numerador*denominador;
    int nuemoDenominador=denominador * otro.denominador;
    return Racional(nuevoNumerador,nuemoDenominador);
}

Racional Racional::operator-(const Racional& otro){
    int nuevoNumerador=numerador*otro.denominador - otro.numerador*denominador;
    int nuemoDenominador=denominador * otro.denominador;
    return Racional(nuevoNumerador,nuemoDenominador);
}

Racional& Racional::operator++(){
    numerador+=denominador;
    return *this;
}

Racional& Racional::operator--(){
    numerador-=denominador;
    return *this;
}

Racional& Racional::operator+=(int entero) {
    numerador+=entero*denominador;
    return *this;
}
Racional& Racional::operator-=(int entero) {
    numerador-=entero*denominador;
    return *this;
}

Racional Racional::simplificar(){
    int nuevoDenominador=denominador/mcd(numerador,denominador);
    int nuevoNumerador=numerador/mcd(numerador,denominador);
    return Racional(nuevoNumerador,nuevoDenominador);
}

int Racional::mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void Racional::mostrar(){
    cout<<numerador<<"/"<<denominador<<endl;
}