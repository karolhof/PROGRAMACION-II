#include <iostream>
#include "class.h"
using namespace std;

int main(){
    int horas,minutos,segundos;
    cout<<"desde que tiempo desea empezar el cronómetro?"<<endl;
    cin>>horas>>minutos>>segundos;
    Cronometro O1(horas,minutos,segundos);
    O1.mostrar();
    ++O1;
    O1.mostrar();
    ++O1;
    O1.mostrar();
    O1.reset();
    O1.mostrar();
    return 0;
}