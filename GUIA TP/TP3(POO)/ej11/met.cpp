#include <iostream>
#include <algorithm>
#include "class.h"

Conjunto::Conjunto(int _tamañoMaximo){
    tamañoMaximo=_tamañoMaximo;
    elementos=new int[tamañoMaximo];
    numElementos=0;
}
Conjunto::~Conjunto(){
    delete[] elementos;
}
Conjunto::Conjunto(const Conjunto& otro){
    tamañoMaximo=otro.tamañoMaximo;
    numElementos=otro.numElementos;
    elementos=new int[tamañoMaximo];
    copy(otro.elementos, otro.elementos+numElementos, elementos);
}
Conjunto& Conjunto::operator=(const Conjunto& otro){
    if (this!=&otro) {
        delete[] elementos;
        tamañoMaximo=otro.tamañoMaximo;
        numElementos=otro.numElementos;
        elementos=new int[tamañoMaximo];
        copy(otro.elementos, otro.elementos+numElementos, elementos);
    }
    return *this;
}
void Conjunto::eliminar(int elemento){
    auto pos=find(elementos, elementos+numElementos, elemento);
    if (pos!=elementos+numElementos) {
        *pos=elementos[--numElementos];
    }
}
void Conjunto::mostrar(){
    cout<<"Conjunto: { ";
    for (int i=0; i<numElementos; ++i) {
        cout<<elementos[i]<<" ";
    }
    cout<<"}"<<endl;
}
Conjunto Conjunto::operator+(const Conjunto& otro){
    Conjunto unionConjunto(tamañoMaximo);
    unionConjunto=*this;
    for (int i = 0; i < otro.numElementos; ++i) {
        unionConjunto.agregar(otro.elementos[i]);
    }
    return unionConjunto;
}
Conjunto Conjunto::operator*(const Conjunto& otro){
    Conjunto interseccionConjunto(tamañoMaximo);
    for (int i=0; i<numElementos; ++i){
        if (find(otro.elementos, otro.elementos+otro.numElementos, elementos[i])!=otro.elementos+otro.numElementos) {
            interseccionConjunto.agregar(elementos[i]);
        }
    }
    return interseccionConjunto;
}
Conjunto Conjunto::operator-(const Conjunto& otro){
    Conjunto diferenciaConjunto(tamañoMaximo);
    for (int i=0; i<numElementos; ++i) {
        if (find(otro.elementos, otro.elementos+otro.numElementos, elementos[i])==otro.elementos+otro.numElementos) {
            diferenciaConjunto.agregar(elementos[i]);
        }
    }
    return diferenciaConjunto;
}
void Conjunto::agregar(int elemento) {
    if (numElementos<tamañoMaximo) {
        if (find(elementos, elementos+numElementos, elemento)==elementos+numElementos) {
            elementos[numElementos++]=elemento;
        } else {
            cout<<"El elemento ya está en el conjunto."<<endl;
        }
    } else {
        cout<<"El conjunto está lleno."<<endl;
    }
}