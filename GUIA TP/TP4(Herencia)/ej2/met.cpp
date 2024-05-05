#include <iostream>
#include "class.h"

//CONSTRUCTORES
Empleados::Empleados(string _nombre, int _edad, long _salario){
    nombre=_nombre;
    edad=_edad;
    salario=_salario;
}

Repartidor::Repartidor(string _nombre, int _edad, long _salario, int _zona):Empleados(_nombre, _edad, _salario){
    zona=_zona;
}
Comercial::Comercial(string _nombre, int _edad, long _salario, float _comision):Empleados(_nombre, _edad, _salario){
    comision=_comision;
}
void Empleados::toString(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Salario: "<<salario<<endl;
}

//GETTERS
int Empleados::getEdad(){
    return edad;
}
long Empleados::getSalario(){
    return salario;
}

//SETTERS
void Empleados::setSalario(long nuevoSalario){
    salario=nuevoSalario;
}

//METODOS
void Comercial::plus(){
    if ((getEdad()>=30)&&(comision>=12)){
        setSalario(getSalario()+3000);
    }
}

void Repartidor::plus(){
    if ((getEdad()<25)&&(zona==3)){
        setSalario(getSalario()+3000);
    }
}
void Comercial::toString(){
    Empleados::toString();
    cout<<"Comision: "<<comision<<endl;
}
void Repartidor::toString(){
    Empleados::toString();
    cout<<"Zona: "<<zona<<endl;
}