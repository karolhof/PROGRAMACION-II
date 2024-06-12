#include <iostream>
#include "class.h"

using namespace std;

class Materia;

Persona::Persona(string _nombre, string _apellido, int _dni, int _edad){
    nombre=_nombre;
    apellido=_apellido;
    edad=_edad;
    dni=_dni;
}
void Persona::mostrar(){
    cout<<"Nombre: "<<nombre<<" "<<apellido<<endl;
    cout<<"DNI: "<<dni<<endl;
    cout<<"Edad: "<<edad<<endl;
}

Materia::Materia(string _materia, int _semestre){
    materia=_materia;
    semestre=_semestre;
}

Materia::Materia(){
}

Profesor::Profesor(string _nombre,string _apellido,int _dni,int _edad,int _añoIngreso,int _aula, Materia _materia) : Persona(_nombre, _apellido, _dni, _edad){ 
    materia= _materia;
    añoIngreso=_añoIngreso;
}

void Profesor::asignarMateria(Materia _materia) {
    materia = _materia;
}

void Materia::mostrar(){
    cout<<"Materia: "<<materia<<endl;
    cout<<"Semestre: "<<semestre<<endl;
}

void Profesor::mostrar(){
    Persona::mostrar();
    cout<<"Año de ingreso: "<<añoIngreso<<endl;
    materia.mostrar();
}