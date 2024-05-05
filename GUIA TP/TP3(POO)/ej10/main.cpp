#include <iostream>
#include "class.h"
using namespace std;

int main(){
    int filas1,columnas1,filas2,columnas2;
    cout<<"Ingrese filas y columnas de la matriz 1"<<endl;
    cin>>filas1>>columnas1;
    Matriz O1(filas1,columnas1);
    O1.inicializarElemento();
    cout<<"Ingrese filas y columnas de la matriz 2"<<endl;
    cin>>filas2>>columnas2;
    Matriz O2(filas2,columnas2);
    O2.inicializarElemento();
    Matriz O3=O1+O2;
    cout<<"Suma:"<<endl;
    O3.mostrar();
    Matriz O4=O2-O1;
    cout<<"Resta:"<<endl;
    O4.mostrar();
    if (columnas1==filas2){
        Matriz O5=O1*O2;
        cout<<"Producto:"<<endl;
        O5.mostrar();
        O5.~Matriz();
    } else{
        Matriz O5(0,0);
        cout<<"No es posible calcular el producto ya que las columnas de la matriz 1 y las filas de la matriz dos no son iguales"<<endl;
        O5.~Matriz();
    }
    O1.~Matriz();
    O2.~Matriz();
    O3.~Matriz();
    O4.~Matriz();
    return 0;
}