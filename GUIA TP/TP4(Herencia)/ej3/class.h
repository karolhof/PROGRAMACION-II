#include <iostream>
using namespace std;

class Producto{
    private:
    string nombre;
    float precio;
    public:
    Producto(string,float);
    string getNombre();
    float getPrecio();
    void setPrecio(float);
    virtual void mostrar();
    virtual float calcularMonto(int);
};

class Perecedero:public Producto{
    private:
    int diasCaducar;
    public:
    Perecedero(string,float,int);
    float calcularMonto(int);
    void mostrar();
};

class NoPerecedero:public Producto{
    private:
    string tipo;
    public:
    NoPerecedero(string,float,string);
    float calcularMonto(int);
    void mostrar();
};