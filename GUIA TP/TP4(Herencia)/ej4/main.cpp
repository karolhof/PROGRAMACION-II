#include <iostream>
#include "class.h"
using namespace std;

int main(){
    Profesores O1("Juan","Bergia",45697778,"Casado",2023,5,"Ingeniería");
    Estudiantes O2("Agustina", "Bosia",45697779,"Soltera","Analisis Matematico I");
    Limpieza O3("Alejandro","Simoncini",46385087,"Soltero",2023,2,"biblioteca");
    O1.mostrar();
    O2.mostrar();
    O3.mostrar();
    O2.cambioCurso("Algebra");
    O1.cambioCivil("Soltero");
    O3.cambioOficina(7);
    O1.mostrar();
    O2.mostrar();
    O3.mostrar();
    return 0;
}