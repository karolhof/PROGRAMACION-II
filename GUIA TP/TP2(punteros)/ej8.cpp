#include <iostream>
#include <cstring>
using namespace std;

void vocalesMinusculas(char *cadena, char* vocMin){
    int cont=0;
    int longitud=strlen(cadena);
    for (int i=0;i<longitud;i++){
        if (cadena[i]=='a'||cadena[i]=='e'||cadena[i]=='i'||cadena[i]=='o'||cadena[i]=='u'){
            vocMin[cont]=cadena[i];
            cont++;
        }
    }
}

int main(){
    const int longitudMaxima=50;
    char cadena[longitudMaxima];
    char vocMin[longitudMaxima];
    cout<<"Ingrese una cadena de caracteres: ";
    cin.getline(cadena, longitudMaxima);
    vocalesMinusculas(cadena,vocMin);
    int result=strlen(vocMin);
    cout<<vocMin<<endl;
    cout<<"La cantidad de vocales minusculas es: "<<result<<endl;
    return 0;
}