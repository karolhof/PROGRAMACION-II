#include <iostream>
#include "class.h"
using namespace std;

//CONSTRUCTORES
Producto::Producto(string _nombre, float _precio){
    nombre=_nombre;
    precio=_precio;
}
Perecedero::Perecedero(string _nombre, float _precio, int _diasCaducar):Producto(_nombre,_precio){
    diasCaducar=_diasCaducar;
}
NoPerecedero::NoPerecedero(string _nombre, float _precio, string _tipo):Producto(_nombre,_precio){
    tipo=_tipo;
}
//GETTERS Y SETTER
string Producto::getNombre(){
    return nombre;
}
float Producto::getPrecio(){
    return precio;
}
void Producto::setPrecio(float nuevoPrecio){
    precio=nuevoPrecio;
}

//MOSTRAR
void Producto::mostrar(){
    cout<<"Producto: "<<nombre<<endl;
    cout<<"Precio: "<<precio<<endl;
}
void Perecedero::mostrar(){
    Producto::mostrar();
    cout<<"Dias a caducar: "<<diasCaducar<<endl;
}
void NoPerecedero::mostrar(){
    Producto::mostrar();
    cout<<"Tipo: "<<tipo<<endl;
}

//MONTOS
float Producto::calcularMonto(int cantidad){
    return precio*cantidad;
}
float Perecedero::calcularMonto(int cantidad){
    if (diasCaducar==1){
       return Producto::calcularMonto(cantidad)/4;
    } else{
        if(diasCaducar==2){
            return Producto::calcularMonto(cantidad)/3;
        } else{
            if(diasCaducar==3){
                return Producto::calcularMonto(cantidad)/2;
            } else{
                return Producto::calcularMonto(cantidad);
            }
        }
    }
}
float NoPerecedero::calcularMonto(int cantidad){
    return Producto::calcularMonto(cantidad);
}
