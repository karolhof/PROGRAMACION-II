#include <iostream>
#include "class.h"
using namespace std;

int main (){
    
    int _horas, _minutos, _segundos;
    cout << "¿Desde qué tiempo quiere iniciar el cronómetro? (inicie en el siguiente orden: horas, minutos, segundos) " << endl;
    cin >> _horas >> _minutos >> _segundos;
    cronometro c1(_horas, _minutos, _segundos);
    c1.mostrar();
    ++c1;
    c1.mostrar();
    ++c1;
    c1.mostrar();
    c1.reset();
    c1.mostrar();
    return 0;
}