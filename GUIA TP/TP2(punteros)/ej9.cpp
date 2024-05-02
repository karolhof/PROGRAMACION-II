#include <iostream>
using namespace std;

void cargaVector(int tama, int *vector){
    cout<<"Ingrese los elementos del vector:"<<endl;
    for (int i=0; i<tama; ++i) {
        cout<<"Elemento "<<i+1<<": ";
        cin>>vector[i];
    }
}
void vectorial(int tama, int *vector){
    cout<<"Contenido del vector usando notacion vectorial:"<<endl;
    for (int i=0; i<tama; ++i) {
        cout<<vector[i]<<" ";
    }
    cout<<endl;
}

void aritmetica(int tama, int *vector){
    cout<<"Contenido del vector usando aritmetica de punteros:"<<endl;
    for (int i=0; i<tama; ++i) {
        cout<<*(vector+i)<<" ";
    }
    cout<<endl;
}

int main() {
    int tama;
    cout<<"Ingrese el tamaño del vector: ";
    cin>>tama;
    int *vector=new int[tama];
    cargaVector(tama,vector);
    vectorial(tama,vector);
    aritmetica(tama,vector);
    delete[] vector;
    return 0;
}