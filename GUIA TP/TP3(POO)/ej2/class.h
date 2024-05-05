#include <iostream>
using namespace std;

class Racional{
    private:
    int numerador, denominador;
    public:
    Racional(int,int);
    Racional operator+(const Racional& otro);
    Racional operator-(const Racional& otro);
    Racional& operator++();
    Racional& operator--();
    Racional& operator+=(int entero);
    Racional& operator-=(int entero);
    Racional simplificar();
    void mostrar();
    int mcd(int,int);
};