#include <iostream>
using namespace std;

class Arreglo{
    private:
    int *datos;
    int tamaño;
    public:
    Arreglo(int);
    void inicializarElemento();
    ~Arreglo();
    Arreglo operator+(const Arreglo& otro);
    Arreglo operator-(const Arreglo& otro);
    int operator*(const Arreglo& otro);
    void mostrar();
};