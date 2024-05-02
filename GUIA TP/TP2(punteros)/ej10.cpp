#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;

void randomize(int tama, int *vector){
    srand(time(nullptr));
    for (int i=0; i<tama;i++){
        vector[i]=rand()%100+1;
    }
}

void mostrar(int tama, int *vector){
    for (int i=0;i<tama;i++){
        cout<<vector[i]<<" ";
    }
    cout<<endl;
}

void ordenar( int tama,int *vector) {
    for (int i=0; i<tama-1; i++) {
        for (int j=0; j<tama-1-i; j++) {
            if (vector[j]<vector[j + 1]) {  
                swap(vector[j], vector[j+1]);
            }
        }
    }
}

int main(){
    int tama;
    cout<<"Ingrese el tamaño del vector: ";
    cin>>tama;
    int *vector=new int[tama];
    randomize(tama,vector);
    mostrar(tama,vector);
    sleep(1);
    ordenar(tama,vector);
    mostrar(tama, vector);
    delete[]vector;
    return 0;
}