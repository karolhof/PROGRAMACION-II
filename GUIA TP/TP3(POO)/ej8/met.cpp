#include <iostream>
#include "class.h"
using namespace std;

Persona::Persona(){
    nombre="aaaaa";
    sexo='H';
    peso=0.0;
    altura=0.0;
    DNI=00000000;
    diaNacimiento=0;
    mesNacimiento=0;
    añoNacimiento=0;
    edad=0;
    IMC=0;
    
}
Persona::Persona(string _nombre, int _edad, char _sexo){
    nombre=_nombre;
    edad=_edad;
    sexo=_sexo;
    sexo='H';
    peso=0.0;
    altura=0.0;
    DNI=00000000;
    IMC=0;
    diaNacimiento=00;
    mesNacimiento=00;
    añoNacimiento=2024-edad;
}
Persona::Persona(string _nombre, int _diaNacimiento, int _mesNacimiento, int _añoNacimiento, int _DNI, char _sexo,double _peso, double _altura){
    nombre=_nombre;
    diaNacimiento=_diaNacimiento;
    mesNacimiento=_mesNacimiento;
    añoNacimiento=_añoNacimiento;
    DNI=_DNI;
    sexo=_sexo;
    peso=_peso;
    altura=_altura;
}
void Persona::setEdad(int nuevaEdad){
    edad=nuevaEdad;
}
void Persona::setIMC(double nuevoIMC){
    IMC=nuevoIMC;
}
void Persona::calcularEdad(){
    int edad=2024-añoNacimiento;
    if (05<mesNacimiento|| (05==mesNacimiento&& 05<diaNacimiento)) {
        edad--;
    }
    setEdad(edad);
}
void Persona::calcularIMC(){
    setIMC(peso/(altura*altura));
}
bool Persona::esMayor(){
    if (edad>=18){
        return true;
    } else{
        return false;
    }
}
void Persona::mostrar(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Fecha de nacimiento: "<<diaNacimiento<<"/"<<mesNacimiento<<"/"<<añoNacimiento<<endl;
    cout<<"Peso: "<<peso<<endl;
    cout<<"Altura: "<<altura<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"IMC: "<<IMC<<endl;
    cout<<"Mayor de edad: ";
    if (esMayor()){
        cout<<"Si"<<endl;
    } else{
        cout<<"No"<<endl;
    }
}