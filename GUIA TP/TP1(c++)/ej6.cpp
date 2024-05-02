#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool esSemiPrimo(int X) {
    for (int i = 2; i <= sqrt(X); i++) {
        if (esPrimo(i)) {
            if (X % i == 0) {
                int factor = X / i;
                if (esPrimo(factor)) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int X;
    cout << "Ingrese un numero entero: ";
    cin >> X;

    if (esSemiPrimo(X)) {
        cout << X << " es un numero semi-primo." << endl;
    } else {
        cout << X << " no es un numero semi-primo." << endl;
    }

    return 0;
}