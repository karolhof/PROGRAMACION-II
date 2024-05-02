#include <iostream>
using namespace std;

int distintos (int A[], int tama){
    int cont=0;
    for (int i=0; i<tama; i++){
        if (A[i]!=A[i+1]){
            cont++;
        }
    }
    return cont;
}

int main(){
    int A[] = {5, 3, 9, 2, 7, 4, 1, 8};
    int tama= sizeof(A)/sizeof(A[0]);
    cout<<"La cantidad de elementos distintos en el arreglo es: "<<distintos(A,tama)<<endl;
    return 0;
}