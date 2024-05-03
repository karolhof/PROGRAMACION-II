#include <iostream>
using namespace std;

void carga(int tama, float *vector){
    for (int i=0;i<tama;i++){
        cout<<"Ingrese el elemento "<<i+1<<": ";
        cin>>vector[i];
    }
}

float encontrarMaximo(float *vector, int tama) {
    int maximo=vector[0];
    for (int i=1; i<tama; ++i) {
        if (vector[i]>maximo) {
            maximo=vector[i];
        }
    }
    return maximo;
}

float encontrarMininmo(float *vector, int tama) {
    int minimo=vector[0];
    for (int i=1; i<tama; ++i) {
        if (vector[i]<minimo) {
            minimo=vector[i];
        }
    }
    return minimo;
}

float media(float *vector, int tama){
    float suma=0;
    for(int i=0;i<tama;i++){
        suma+=vector[i];
    }
    return suma/tama;
}

void results(int tama, float *vector){
    cout<<"El máximo de los numeros es: "<<encontrarMaximo(vector,tama)<<endl;
    cout<<"El menor de los numeros es: "<<encontrarMininmo(vector,tama)<<endl;
    cout<<"La media aritmética de los numeros es: "<<media(vector,tama)<<endl;
}

int main(){
    int tama;
    cout<<"ingrese la cantidad de datos"<<endl;
    cin>>tama;
    float *vector=new float[tama];
    carga(tama,vector);
    results(tama,vector);
    delete[]vector;
    return 0;
}