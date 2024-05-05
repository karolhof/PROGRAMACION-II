#include <iostream>

class Punto{
    private:
    int x,y;
    public:
    Punto(int,int);
    Punto();
    void mostrar();
    Punto& operator++();
    Punto& operator--();
    Punto operator+(const Punto& otro);
    Punto operator+(int otro);
    Punto operator-(const Punto& otro);
    Punto operator-(int otro);
};