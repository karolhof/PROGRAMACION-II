//Schahovskoy Hoferek Karol Alexia
//2303211

#include <iostream>
#include "class.h"

class CajaSeguridad;

//BANCO
Banco::Banco(string _nombre){
    nombre=_nombre;
}
string Banco::getNombre(){
    return nombre;
}

//CAJASEGURIDAD
CajaSeguridad::CajaSeguridad(int _codigo){
    codigo=_codigo;
}
CajaSeguridad::CajaSeguridad(){
}
int CajaSeguridad::getCodigo(){
    return codigo;
}

//SUCURSAL
Sucursal::Sucursal(int _numero, string _responsable, CajaSeguridad _seguridad, string _nombre) : Banco(_nombre){
    numero=_numero;
    responsable=_responsable;
    seguridad=_seguridad;
}
int Sucursal::getNumero(){
    return numero;
}
string Sucursal::getResponsable(){
    return responsable;
}
int Sucursal::getCajaSeguridad(){
    return seguridad.getCodigo();
}
string Sucursal::getNombre(){
    return Banco::getNombre();
}
