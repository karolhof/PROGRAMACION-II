#include<iostream>
#include "class.h"
using namespace std;

int main() {
    Conjunto O1(5);
    O1.agregar(1);
    O1.agregar(2);
    O1.agregar(3);
    O1.agregar(4);
    O1.agregar(5);

    Conjunto O2(5);
    O2.agregar(3);
    O2.agregar(4);
    O2.agregar(5);
    O2.agregar(6);
    O2.agregar(7);

    cout<<"Conjunto 1: ";
    O1.mostrar();
    cout<<"Conjunto 2: ";
    O2.mostrar();

    Conjunto unionConjunto=O1+O2;
    cout<<"Unión de conjuntos: ";
    unionConjunto.mostrar();

    Conjunto interseccionConjunto=O1*O2;
    cout<<"Intersección de conjuntos: ";
    interseccionConjunto.mostrar();

    Conjunto diferenciaConjunto=O1-O2;
    cout<<"Diferencia de conjuntos (Conjunto 1 - Conjunto 2): ";
    diferenciaConjunto.mostrar();

    return 0;
}