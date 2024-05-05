#include <iostream>
#include <vector>
#include "class.h"
using namespace std;

int main() {
    //inicializar los personajes
    Mago magoA("Mago A", "humano", 10, 18, 100);
    Mago magoB("Mago B", "elfo", 15, 17, 100);
    Clerigo clerigoC("Clérigo C", "humano", 20, 14, 100, "Dios de la curación");
    //mostrar personajes
    cout<<"Datos de los personajes:"<<endl;
    magoA.mostrar();
    cout <<endl;
    magoB.mostrar();
    cout << endl;
    clerigoC.mostrar();
    cout << endl;
    //Mago "A" aprende hechizos
    
    magoA.aprendeHechizo("Bola de fuego");
    magoA.aprendeHechizo("Rayo");
    //Mago "B" aprende un hechizo
    magoB.aprendeHechizo("Congelación");
    // Mostrar magos
    cout<<"Datos de los magos:"<<endl;
    magoA.mostrar();
    cout<<endl;
    magoB.mostrar();
    cout<<endl;
    //Mago "A2 lanza un hechizo sobre el mago "B"
    magoA.lanzaHechizo(magoB);
    //Mago "B" lanza un hechizo sobre el mago "A"
    magoB.lanzaHechizo(magoA);
    //Clerigo cura al mago "B"
    clerigoC.curar(magoB);
    //Mago "A" lanza otro hechizo sobre el mago "B"
    magoA.lanzaHechizo(magoB);
    //Mostrar personajes
    cout<<"Datos de los personajes después de las acciones:"<<endl;
    magoA.mostrar();
    cout<<endl;
    magoB.mostrar();
    cout<<endl;
    clerigoC.mostrar();
    return 0;
}
