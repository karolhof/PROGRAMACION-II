#include <iostream>
#include <cmath>
using namespace std;

void carga(int &a, int &b){
    cout << "Ingrese el valor A: ";
    cin >> a;

    cout << "Ingrese el valor B: ";
    cin >> b;

    if(b<a){
        swap (a,b);
    }
}

void divisoresA(int& a, int A[]){
    for (int i=1; i<=a; i++){
        if ((a%i)==0){
            A[i]=i;
        }
    }
}

void divisoresB(int& b, int B[]){
    for (int i=1; i<=b; i++){
        if ((b%i)==0){
            B[i]=i;
        }
    }
}

void esPrimo(int num, int primos[], int &contador) {
    if (num <= 1) return;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return;
        }
    }
    primos[contador++] = num;
}

void esPrimoA(int A[], int primA[], int a) {
    int contador = 0;
    for (int i = 2; i <= a; i++) {
        if (A[i] != 0) {
            esPrimo(A[i], primA, contador);
        }
    }
}

void esPrimoB(int B[], int primB[], int b) {
    int contador = 0;
    for (int i = 2; i <= b; i++) {
        if (B[i] != 0) {
            esPrimo(B[i], primB, contador);
        }
    }
}

void comp(int primA[], int primB[]){
    bool equal=true;

    for (int i=0; i<100; i++){
        if (primA[i]!=primB[i]){
            equal=false;
            break;
        } 
    }
    
    if (equal){
        cout<<"Los conjuntos de divisores primos son los mismos"<<endl;
    } else {
        cout<<"Los conjuntos de divisores primos no son los mismos"<<endl;
    }
}

int main (){
    int a,b;
    carga(a, b);
    int A[100] = {0};
    int B[100] = {0};
    divisoresA(a, A);
    divisoresB(b, B);
    int primA[100] = {0};
    int primB[100] = {0};
    esPrimoA(A, primA, a);
    esPrimoB(B, primB, b);
    comp(primA, primB);
    return 0;
}