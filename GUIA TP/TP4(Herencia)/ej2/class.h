#include <iostream>
using namespace std;

class Empleados{
    private:
    string nombre;
    int edad;
    long salario;
    public:
    Empleados(string,int,long);
    int getEdad();
    long getSalario();
    virtual void setSalario(long);
    virtual void toString();
};

class Repartidor :public Empleados{
    private:
    int zona;
    public:
    Repartidor(string,int,long,int);
    void plus();
    void toString();
};

class Comercial:public Empleados{
    private:
    float comision;
    public:
    Comercial(string,int,long,float);
    void plus();
    void toString();
};