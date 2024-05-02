#include <iostream>
using namespace std;

void organizarImparesPares(int A[], int tama) {
    int impares = 0;
    for (int i=0; i<tama; i++) {
        if ((A[i]%2)!=0) {
            swap(A[i], A[impares]);
            impares++;
        }
    }
}

int main(){
    int A[] = {5, 3, 8, 2, 7, 4, 1, 6};
    int tama= sizeof(A)/sizeof(A[0]);
    organizarImparesPares(A,tama);
    for (int i=0; i<tama;i++){
        cout<<A[i];
    }
    return 0;
}