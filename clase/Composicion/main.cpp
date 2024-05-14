#include <iostream>
#include "class.h"

using namespace std;

int main(){
    Materia M1("Programacion", 1);
    Persona O1("julio", "gutierrez", 17884062, 56);
    Profesor P1("Julio", "Gutierrez", 17884062, 56, 2023, 0, M1);
    P1.mostrar();
    Materia M2("Computacion", 2);
    P1.asignarMateria(M2);
    P1.mostrar();
    return 0;
}