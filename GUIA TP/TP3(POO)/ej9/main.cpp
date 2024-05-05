#include<iostream>
#include "class.h"
using namespace std;
int main(){
    int tamaño;
    cout<<"que cantidad de datos desea que tenga el arreglo?"<<endl;
    cin>>tamaño;
    Arreglo O1(tamaño);
    O1.inicializarElemento();
    Arreglo O2(tamaño);
    cout<<"Inicialice el segundo arreglo"<<endl;
    O2.inicializarElemento();
    Arreglo O3=O1+O2;
    O3.mostrar();
    Arreglo O4=O2-O1;
    O4.mostrar();
    int result=O1*O2;
    cout<<result<<endl;
    return 0; 
}