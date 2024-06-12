//Schahovskoy Hoferek Karol Alexia
//2303211

#include <iostream>
using namespace std;

class Banco{
    private:
    string nombre;
    public:
    Banco(string);
    string getNombre();
};

class CajaSeguridad{
    private:
    int codigo;
    public:
    CajaSeguridad(int);
    CajaSeguridad();
    int getCodigo();
};

class Sucursal: public Banco{
    private:
    int numero;
    string responsable;
    CajaSeguridad seguridad;
    public:
    Sucursal(int,string,CajaSeguridad, string);
    int getNumero();
    string getResponsable();
    int getCajaSeguridad();
    string getNombre();
};