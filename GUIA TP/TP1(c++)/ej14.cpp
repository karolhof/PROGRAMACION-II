#include <iostream>
using namespace std;

bool existeTripleteTriangular(int A[], int tama) {
    if (tama<3) {
        return false;
    }
    for (int i=0; i<tama-2; i++) {
        for (int j=i+1; j<tama-1; j++) {
            for (int k=j+1; k<tama; k++) {
                if (A[i]+A[j]>A[k] && A[j]+A[k]>A[i] && A[k]+A[i]>A[j]) {
                    return true;
                }
            }
        }
    }

    return false;
}

int main() {
    int A[] = {5, 2, 15, 3, 7, 4};
    int tama = sizeof(A) / sizeof(A[0]);

    if (existeTripleteTriangular(A, tama)) {
        cout << "Existe un triplete triangular en el arreglo." << endl;
    } else {
        cout << "No existe un triplete triangular en el arreglo." << endl;
    }

    return 0;
}