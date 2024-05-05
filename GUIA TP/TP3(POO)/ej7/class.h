#include <iostream>
using namespace std;

class Cuenta{
    private:
    int numeroCuenta;
    double tasaInteres, saldo;
    public:
    Cuenta(int,double);
    void setSaldo(int);
    void interes();
    void deposito(double);
    void extraccion(double);
    void mostrar();
};