#include <iostream>
#include "class.h"
using namespace std;

FIG_GEO::FIG_GEO(int _x, int _y){
    x=_x;
    y=_y;
}
int FIG_GEO::getX(){
    return x;
}
int FIG_GEO::getY(){
    return y;
}

void FIG_GEO::mostrar(){
}

Circulo::Circulo(int _x,int _y,float _radio):FIG_GEO(_x,_y){
    radio=_radio;
}

Cuadrado::Cuadrado(int _x,int _y, int _lado):FIG_GEO(_x,_y){
    lado=_lado;
}
//POLIGONO REGULAR
float Cuadrado::area(){
    return lado*lado;
}
float Cuadrado::perimetro(){
    return lado*4;
}
float Cuadrado::areaPerim(){
    return (lado*lado)/(lado*4);
}
void Cuadrado::mostrar(){
    cout<<"Area: "<<Cuadrado::area()<<endl;
    cout<<"Perimetro: "<<Cuadrado::perimetro()<<endl;
    cout<<"Area sobre perimetro "<<Cuadrado::areaPerim()<<endl;
}
//CIRCULO
float Circulo::area(){
    return 3.14*(radio*radio);
}
float Circulo::perimetro(){
    return 2*3.14*radio;
}
float Circulo::areaPerim(){
    return (3.14*(radio*radio))/(2*3.14*radio);
}
void Circulo::mostrar(){
    cout<<"Area: "<<Circulo::area()<<endl;
    cout<<"Perimetro: "<<Circulo::perimetro()<<endl;
    cout<<"Area sobre perimetro "<<Circulo::areaPerim()<<endl;
}
//PUNTO
Punto::Punto(int _x, int _y):FIG_GEO(_x,_y){
}
void Punto::mostrar(){
    cout<<"Coordenada en x: "<<FIG_GEO::getX()<<endl;
    cout<<"Coordenada en y: "<<FIG_GEO::getY();
}
