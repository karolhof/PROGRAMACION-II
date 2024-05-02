#include <iostream>
#include <cstring>
using namespace std;

void invertirCadena(char *cadena) {
    int longitud=strlen(cadena);
    for (int i=0; i<longitud/2; ++i) {
        char temp=cadena[i];
        cadena[i]=cadena[longitud-i-1];
        cadena[longitud-i-1]=temp;
    }
}

int main() {
    const int longitudMaxima=50;
    char cadena[longitudMaxima];
    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(cadena, longitudMaxima);
    invertirCadena(cadena);
    cout << "La cadena invertida es: " << cadena << endl;
    return 0;
}