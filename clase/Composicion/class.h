#include <iostream>
using namespace std;

class Materia{
    private:
    int semestre;
    string materia;
    public:
    Materia(string,int);
    Materia();
    void mostrar();
};

class Persona{
    private:
    string nombre, apellido;
    int dni,edad;
    public:
    Persona(string,string,int,int);
    virtual void mostrar();
};

class Profesor : public Persona{
    private:
    int añoIngreso, aula;
    Materia materia;
    public:
    Profesor(string,string,int,int,int,int, Materia);
    void asignarMateria(Materia);
    void mostrar();
};