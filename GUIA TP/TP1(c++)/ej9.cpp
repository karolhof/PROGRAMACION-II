#include <iostream>
using namespace std;

bool esPermutacion(int arr[], int size) {
    bool encontrado[size + 1] = {false};

    for (int i = 0; i < size; i++) {
        if (arr[i]<1 || arr[i]>size || encontrado[arr[i]]) {
            return false;
        }
        encontrado[arr[i]] = true;
    }

    for (int i=1; i<=size; i++) {
        if (!encontrado[i]) {
            return false;
        }
    }

    return true;
}

void menu(int size, int arr[]){
    cout<<"Ingrese los elementos del arreglo:"<<endl;
    
    for (int i=0; i<size; i++) {
        cin>>arr[i];
    }

    if (esPermutacion(arr, size)) {
        cout<<"El arreglo representa una permutación."<<endl;
    } else {
        cout<<"El arreglo no representa una permutación."<<endl;
    }
}

int main() {
    int size;
    cout<<"Ingrese el tamaño del arreglo:"<<endl;
    cin >> size;
    int arr[size];
    menu(size,arr);
    return 0;
}