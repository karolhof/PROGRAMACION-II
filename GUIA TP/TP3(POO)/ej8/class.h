#include <iostream>
using namespace std;

class Persona{
    private:
    string nombre;
    char sexo;
    double peso,altura, IMC;
    int DNI, diaNacimiento, mesNacimiento, añoNacimiento, edad;
    public:
    Persona();
    Persona(string,int,char);
    Persona(string,int,int,int,int,char,double,double);
    void calcularIMC();
    void calcularEdad();
    bool esMayor();
    void mostrar();
    void setEdad(int);
    void setIMC(double);
};