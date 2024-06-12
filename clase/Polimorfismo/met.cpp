#include <iostream>
#include "class.h"
#include <cmath>

Figura::Figura (){
    
}


Bidimensional::Bidimensional(float _base, float _altura){
    base=_base;
    altura=_altura;
}
float Bidimensional::getBase(){
    return base;
}
float Bidimensional::getAltura(){
    return altura;
}

Cuadrado::Cuadrado(float _base, float _altura):Bidimensional(_base, _altura){
}
float Cuadrado::perimetro(){
    float perim= Bidimensional::getBase()*2+Bidimensional::getAltura()*2;
    return perim;
}
float Cuadrado::area(){
    float area=Bidimensional::getAltura()*Bidimensional::getBase();
    return area;
}

Triangulo::Triangulo(float _base, float _altura):Bidimensional(_base, _altura){
}
float Triangulo::perimetro(){
    float lado=sqrt((((Bidimensional::getBase())/2)*((Bidimensional::getBase())/2))+(Bidimensional::getAltura()*Bidimensional::getAltura()));
    float perim= lado*3;
    return perim;
}
float Triangulo::area(){
    float area=(Bidimensional::getBase()*Bidimensional::getAltura()/2);
    return area;
}


Tridimensional::Tridimensional(float _profundidad){
    profundidad=_profundidad;
}
float Tridimensional::getProfundidad(){
    return profundidad;
}

Caja::Caja(float _base, float _altura, float _profundidad):Tridimensional(_profundidad){
    base=_base;
    altura=_altura;
}
float Caja::volumen(){
    float vol=(altura*base*Tridimensional::getProfundidad());
    return vol;
}

Cilindro::Cilindro(float _radio, float _profundidad):Tridimensional(_profundidad){
   radio=_radio;
}
float Cilindro::volumen(){
    float area=2*3.14*radio*radio;
    float vol=area*Tridimensional::getProfundidad();
    return vol;
}



