#include <iostream>
#include "class.h"
using namespace std;

Punto::Punto(int _x, int _y){
    x=_x;
    y=_y;
}
Punto::Punto(){
    x=0;
    y=0;
}

void Punto::mostrar(){
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
}

Punto& Punto::operator++(){
    x+=1;
    y+=1;
    return *this;
}
Punto& Punto::operator--(){
    x-=1;
    y-=1;
    return *this;
}
Punto Punto::operator+(const Punto& otro){
    int nuevoX=x+otro.x;
    int nuevoY=y+otro.y;
    return Punto(nuevoX,nuevoY);
}
Punto Punto::operator-(const Punto& otro){
    int nuevoX=x-otro.x;
    int nuevoY=y-otro.y;
    return Punto(nuevoX,nuevoY);
}
Punto Punto::operator+(int entero){
    int nuevoX=x+entero;
    int nuevoY=y+entero;
    return Punto(nuevoX,nuevoY);
}
Punto Punto::operator-(int entero){
    int nuevoX=x-entero;
    int nuevoY=y-entero;
    return Punto(nuevoX,nuevoY);
}



