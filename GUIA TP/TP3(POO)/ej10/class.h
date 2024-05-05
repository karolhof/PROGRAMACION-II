#include <iostream>
using namespace std;

class Matriz{
    private:
    int filas,columnas, **datos;
    public:
    Matriz(int,int);
    ~Matriz();
    void inicializarElemento();
    void mostrar();
    Matriz operator+(const Matriz& otro);
    Matriz operator-(const Matriz& otro);
    Matriz operator*(const Matriz& otro);
};