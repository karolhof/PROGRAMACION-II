#include "class.h"
using namespace std;

Matriz::Matriz(int _filas, int _columnas){
    filas=_filas;
    columnas=_columnas;
    datos= new int*[filas];
    for (int i = 0; i < filas; ++i) {
        datos[i]=new int[columnas];
    }
}
Matriz::~Matriz() {
    for (int i=0; i<filas; ++i) {
        delete[] datos[i];
    }
    delete[] datos;
}
void Matriz::inicializarElemento() {
    for (int i=0;i<filas;i++){
        for (int j=0;j<columnas; j++){
            int valor;
            cout<<"Ingrese el valor del arreglo en la posicion ["<<i+1<<"]["<<j+1<<"]"<<endl;
            cin>>valor;
            datos[i][j]=valor;
        }
    }
}
Matriz Matriz::operator+(const Matriz& otro){
    Matriz suma(filas, columnas);
    for (int i=0; i<filas; ++i) {
        for (int j=0; j<columnas; ++j) {
            suma.datos[i][j]=datos[i][j]+otro.datos[i][j];
        }
    }
    return suma;
}
Matriz Matriz::operator-(const Matriz& otro){
    Matriz resta(filas, columnas);
    for (int i=0; i<filas; ++i) {
        for (int j=0; j<columnas; ++j) {
            resta.datos[i][j]=datos[i][j]-otro.datos[i][j];
        }
    }
    return resta;
}
Matriz Matriz::operator*(const Matriz& otro){
    Matriz producto(filas, otro.columnas);
    for (int i=0; i<filas; ++i) {
        for (int j=0; j<otro.columnas; ++j) {
            producto.datos[i][j]=0;
            for (int k=0; k<columnas; ++k) {
                producto.datos[i][j]+=datos[i][k]*otro.datos[k][j];
            }
        }
    }
    return producto;
}
void Matriz::mostrar() {
    for (int i=0; i<filas; ++i) {
        for (int j=0; j<columnas; ++j) {
            cout<<datos[i][j]<<" ";
        }
        cout<<endl;
    }
}