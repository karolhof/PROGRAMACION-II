#include <iostream>
using namespace std;

class Conjunto{
    private:
    int *elementos, tamañoMaximo, numElementos;
    public:
    Conjunto(int);
    ~Conjunto();
    Conjunto(const Conjunto& otro);
    void agregar(int);
    void eliminar(int);
    void mostrar();
    Conjunto operator+(const Conjunto& otro);
    Conjunto operator*(const Conjunto& otro);
    Conjunto operator-(const Conjunto& otro);
    Conjunto& operator=(const Conjunto& otro);
};