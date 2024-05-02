#include <iostream>
using namespace std;

void invertirArreglo(int A[], int tama) {
    for (int i=0; i<tama/2; i++) {
        int temp=A[i];
        A[i]=A[tama-1-i];
        A[tama- 1-i]=temp;
    }
}

void carga(int A[],int tama){
    for(int i=0;i<tama;i++){
        cout<<"Ingrese el elemento en la posicion "<<i+1<<endl;
        cin>>A[i];
    }
}
void mostrar(int A[], int tama){
    for(int i=0; i<tama; i++){
        if (i==tama-1){
            cout<<A[i];
        }else {cout<<A[i]<<",";}
    }
}

int main(){
    int tama;
    cout<<"Ingrese la cantidad de elementos del arreglo"<<endl;
    cin>>tama;
    int A[tama];
    carga(A,tama);
    invertirArreglo(A,tama);
    mostrar(A,tama);
    return 0;
}