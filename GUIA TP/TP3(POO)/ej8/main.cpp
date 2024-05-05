#include <iostream>
#include "class.h"

int main(){
    string nombre;
    char sexo;
    int DNI,edad,diaNacimiento,mesNacimiento,añoNacimiento;
    double peso,altura;
    Persona O1;
    Persona O2("Karol",18,'M');
    cout<<"ingrese los siguientes datos:"<<endl;
    cout<<"Nombre: ";
    cin>>nombre;
    cout<<endl;
    cout<<"Fecha de nacimiento (dd/mm/aaa): ";
    cin>>diaNacimiento>>mesNacimiento>>añoNacimiento;
    cout<<endl;
    cout<<"DNI: ";
    cin>>DNI;
    cout<<endl;
    cout<<"Peso: ";
    cin>>peso;
    cout<<endl;
    cout<<"Altura: ";
    cin>>altura;
    cout<<endl;
    cout<<"Sexo: ";
    cin>>sexo;
    cout<<endl;
    Persona O3(nombre,diaNacimiento,mesNacimiento,añoNacimiento,DNI,sexo,peso,altura);
    O3.calcularEdad();
    O3.calcularIMC();
    O1.mostrar();
    cout<<endl;
    O2.mostrar();
    cout<<endl;
    O3.mostrar();
    return 0;
}