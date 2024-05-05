#include <iostream>
#include"class.h"
using namespace std;
Complejo::Complejo(int _real, int _imaginario){
    real=_real;
    imaginario=_imaginario;
}

Complejo Complejo::operator+(const Complejo& otro){
    int nuevoReal=real+otro.real;
    int nuevoImaginario=imaginario+otro.imaginario;
    return Complejo(nuevoReal,nuevoImaginario);
}
Complejo Complejo::operator-(const Complejo& otro){
    int nuevoReal=real-otro.real;
    int nuevoImaginario=imaginario-otro.imaginario;
    return Complejo(nuevoReal,nuevoImaginario);
}
Complejo Complejo::operator*(const Complejo& otro){
    double nuevoReal = (real * otro.real) - (imaginario * otro.imaginario);
    double nuevoImaginario = (real * otro.imaginario) + (imaginario * otro.real);
    return Complejo(nuevoReal, nuevoImaginario);
}

void Complejo::mostrar(){
    cout<<real<<"+"<<imaginario<<"i"<<endl;
}