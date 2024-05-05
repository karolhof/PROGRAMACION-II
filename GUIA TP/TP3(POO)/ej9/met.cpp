#include <iostream>
#include "class.h"
using namespace std;

Arreglo::Arreglo(int _tamaño){
    tamaño=_tamaño;
    datos=new int[tamaño];
}
void Arreglo::inicializarElemento() {
    for (int i=0;i<tamaño;i++){
        int valor;
        cout<<"Ingrese el valor del arreglo en la posicion "<<i+1<<endl;
        cin>>valor;
        datos[i] = valor;
    }
}
Arreglo::~Arreglo(){
    delete[]datos;
}
Arreglo Arreglo::operator+(const Arreglo& otro){
    Arreglo resultado(tamaño);
    for (int i=0; i<tamaño; ++i){
        resultado.datos[i]=datos[i]+otro.datos[i];
    }
    return resultado;
}
Arreglo Arreglo::operator-(const Arreglo& otro){
    Arreglo resultado(tamaño);
    for (int i=0; i<tamaño; ++i){
        resultado.datos[i]=datos[i]-otro.datos[i];
    }
    return resultado;
}
int Arreglo::operator*(const Arreglo& otro){
    int suma=0;
    for (int i=0; i<tamaño; ++i){
        suma+=datos[i]*otro.datos[i];
    }
    return suma;
}

void Arreglo::mostrar(){
    for (int i=0;i<tamaño;i++){
        cout<<datos[i]<<" ";
    }
    cout<<endl;
}