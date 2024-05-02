#include <iostream>
#include <cctype> 
using namespace std;

void convertirAMayusculas(char *cadena) {
    // Iterar sobre la cadena y convertir cada carácter a mayúsculas
    while (*cadena) {
        *cadena = toupper(*cadena);
        cadena++;
    }
}

int main(){
char cadena[11];
cout<<"INgrese una cadena de caracteres (maximo 10)"<<endl;
cin.getline(cadena,11);
convertirAMayusculas(cadena);
cout<<cadena<<endl;
return 0;
}