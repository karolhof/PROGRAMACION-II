#include <iostream>
#include <cstring>
using namespace std;

void copiarCadena(char *cadena, char*copia){
    int longitud=strlen(cadena);
    for (int i=0;i<longitud;i++){
        copia[i]=cadena[i];
    }
}

int main(){
    const int longitudMaxima=50;
    char cadena[longitudMaxima];
    char copia[longitudMaxima];
    cout<<"Ingrese una cadena de caracteres: ";
    cin.getline(cadena, longitudMaxima);
    copiarCadena(cadena,copia);
    cout<<"La cadena es: "<<copia<<endl;
    return 0;
}