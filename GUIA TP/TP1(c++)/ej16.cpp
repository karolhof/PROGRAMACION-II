#include <iostream>
using namespace std;

void carga_datos(int& filas, int& columnas, int& pos_fila, int& pos_columna){
    cout<<"Ingrese el número de filas de la matriz: ";
    cin>>filas;
    cout<<"Ingrese el número de columnas de la matriz: ";
    cin>>columnas;
    cout<<"Ingrese la fila del elemento: ";
    cin>>pos_fila;
    cout<<"Ingrese la columna del elemento: ";
    cin>>pos_columna;
}

void carga_matrix(int filas,int columnas, int M[][100]){
    cout<<"Ingrese los elementos de la matriz:"<<endl;
    for (int i=0; i<filas; i++) {
        for (int j=0; j<columnas; j++) {
            cin>>M[i][j];
        }
    }
}

void adyacentes(int filas, int columnas, int pos_fila, int pos_columna, int M[][100]) {
    if (pos_fila >= 0 && pos_fila < filas && pos_columna >= 0 && pos_columna < columnas) {
        int suma = 0;
        if (pos_fila - 1 >= 0) {
            suma += M[pos_fila - 1][pos_columna];
        }
        if (pos_fila + 1 < filas) {
            suma += M[pos_fila + 1][pos_columna];
        }
        if (pos_columna - 1 >= 0) {
            suma += M[pos_fila][pos_columna - 1];
        }
        if (pos_columna + 1 < columnas) {
            suma += M[pos_fila][pos_columna + 1];
        }

        cout << "Suma de elementos adyacentes al elemento en la posición (" << pos_fila << ", " << pos_columna << "): ";
        cout << suma << endl;
    } else {
        cout << "La posición ingresada está fuera de los límites de la matriz." << endl;
    }
}

int main() {
    int filas, columnas, pos_fila, pos_columna;
    carga_datos(filas,columnas, pos_fila, pos_columna);
    int M[100][100];
    carga_matrix(filas,columnas,M);
    adyacentes(filas,columnas,pos_fila, pos_columna,M);
    return 0;
}