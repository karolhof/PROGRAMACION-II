#include <iostream>
#include "class.h"

//CONSTRUCTORES
Persona::Persona(string _nombre, string _apellido, long _DNI, string _estadoCivil){
    nombre=_nombre;
    apellido=_apellido;
    DNI=_DNI;
    estadoCivil=_estadoCivil;
}
Empleados::Empleados(string _nombre, string _apellido, long _DNI, string _estadoCivil, int _añoIngreso, int _numOficina):Persona(_nombre,_apellido,_DNI,_estadoCivil){
    añoIngreso=_añoIngreso;
    numOficina=_numOficina;
}
Profesores::Profesores(string _nombre, string _apellido, long _DNI, string _estadoCivil, int _añoIngreso, int _numOficina, string _departamento):Empleados(_nombre,_apellido,_DNI,_estadoCivil, _añoIngreso,_numOficina){
    departamento=_departamento;
}
Limpieza::Limpieza(string _nombre, string _apellido, long _DNI, string _estadoCivil, int _añoIngreso, int _numOficina, string _seccion):Empleados(_nombre,_apellido,_DNI,_estadoCivil, _añoIngreso,_numOficina){
    seccion=_seccion;
}
Estudiantes::Estudiantes(string _nombre, string _apellido, long _DNI, string _estadoCivil, string _curso):Persona(_nombre,_apellido,_DNI,_estadoCivil){
    curso=_curso;
}
//SETTER Y GETTERS
void Persona::setEstadoCivil(string _estadoCivil){
    estadoCivil=_estadoCivil;
}
void Empleados::setOficina(int _numOficina){
    numOficina=_numOficina;
}

//METODOS
void Persona::cambioCivil(string nuevoEstado){
    setEstadoCivil(nuevoEstado);
}
void Empleados::cambioOficina(int nuevaOficina){
    setOficina(nuevaOficina);
}
void Estudiantes::setCurso(string _curso){
    curso=_curso;
}
void Estudiantes::cambioCurso(string nuevoCurso){
    setCurso(nuevoCurso);
}
void Profesores::setDepartamento(string _departamento){
    departamento=_departamento;
}
void Profesores::cambioDepartamento(string nuevoDepartamento){
    setDepartamento(nuevoDepartamento);
}
void Limpieza::setSeccion(string _seccion){
    seccion=_seccion;
}
void Limpieza::cambioSeccion(string nuevaSeccion){
    setSeccion(nuevaSeccion);
}
//MOSTRAR
void Persona::mostrar(){
    cout<<"Nombre: "<<nombre<<" "<<apellido<<endl;
    cout<<"DNI: "<<DNI<<endl;
    cout<<"Estado Civil: "<<estadoCivil<<endl;
}
void Empleados::mostrar(){
    Persona::mostrar();
    cout<<"Año de incorporación: "<<añoIngreso<<endl;
    cout<<"Oficina: "<<numOficina<<endl;
}
void Profesores::mostrar(){
    Empleados::mostrar();
    cout<<"Departamento: "<<departamento<<endl;
}
void Limpieza::mostrar(){
    Empleados::mostrar();
    cout<<"Seccion: "<<seccion<<endl;
}
void Estudiantes::mostrar(){
    Persona::mostrar();
    cout<<"Curso: "<<curso<<endl;
}