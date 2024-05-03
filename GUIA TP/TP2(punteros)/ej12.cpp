#include <iostream>
using namespace std;

void ingreso(int filas, int columnas, float**arreglo){
    cout << "Ingrese los datos del arreglo:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Ingrese el dato para la fila " << i+1 << " y la columna " << j+1 << ": ";
            cin >> arreglo[i][j];
        }
    }
}

void mostrar(int filas, int columnas, float** arreglo){
    cout << "Contenido del arreglo:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << arreglo[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int filas,columnas;
    cout<<"Ingrese las filas"<<endl;
    cin>>filas;
    cout<<"Ingrese las columnas"<<endl;
    cin>>columnas;
//a
float  **arreglo;
//b
arreglo= new float *[filas];
//c
for (int i=0;i<filas;i++){
    arreglo[i]= new float[columnas];
}
//d
ingreso(filas,columnas,arreglo);
mostrar(filas,columnas,arreglo);
//e
delete[]arreglo;
    return 0;
}