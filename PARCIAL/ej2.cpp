//Schahovskoy Hoferek Karol Alexia
//2303211

#include <iostream>
#include <string>
using namespace std;

void menu(int &tama){
    cout<<"Ingrese la cantidad de libros cuyos datos desea almacenar"<<endl;
    cin>>tama;
    cin.ignore();
}

void carga (int tama, string *autores, string *titulos){
    for (int i=0; i<tama; ++i) {
        cout<<"Ingrese el titulo del libro "<<i+1<<": "<<endl;
        getline(cin, titulos[i]);
        cout<<"Ingrese el autor del libro "<<i+1<<": "<<endl;
        getline(cin, autores[i]);
    }
}
void mostrar(int tama, string *autores, string *titulos){
    cout<<"Los libros ingresados fueron:"<<endl;
    for (int i=0; i<tama; ++i) {
        cout<<"Titulo: "<<titulos[i]<<", Autor: "<< autores[i]<<endl;
    }
}

int main(){
    int tama;
    menu(tama);
    string* titulos= new string[tama];
    string* autores= new string[tama];
    carga (tama, autores, titulos);
    mostrar(tama, autores , titulos);
    delete[] titulos;
    delete[] autores;
    return 0;
}