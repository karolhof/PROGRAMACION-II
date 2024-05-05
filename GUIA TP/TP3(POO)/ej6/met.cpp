#include <iostream>
#include "class.h"
#include <ctime>
#include <string>

using namespace std;

Password::Password(){
    longitud=8;
    contraseña="aaaaaaaa";
}
void Password::setLong(int _longitud){
    longitud=_longitud;
}
void Password::generarPassword(string _contraseña){
    contraseña=_contraseña;
}
bool Password::esFuerte() {
    int mayusculas=0, minusculas=0, numeros=0;
    for (char c:contraseña) {
        if (isupper(c))
            mayusculas++;
        else if (islower(c))
            minusculas++;
        else if (isdigit(c))
            numeros++;
    }
    return (mayusculas > 2 && minusculas > 1 && numeros > 5);
}
void Password::mostrar(){
    if (esFuerte()){
        cout<<"la contraseña: "<<contraseña<<" es fuerte"<<endl;
    } else{
        cout<<"La contraseña: "<<contraseña<<" no es fuerte"<<endl;
    }
}