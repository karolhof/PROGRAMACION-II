#include <iostream>
using namespace std;

class Complejo{
    private:
    int real;
    int imaginario;
    public:
    Complejo(int,int);
    Complejo operator+(const Complejo& otro);
    Complejo operator-(const Complejo& otro);
    Complejo operator*(const Complejo& otro);
    void mostrar();
};