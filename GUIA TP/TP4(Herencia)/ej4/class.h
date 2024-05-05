#include <iostream>
using namespace std;

class Persona{
    private:
    string nombre;
    string apellido;
    long DNI;
    string estadoCivil;
    public:
    Persona(string,string,long,string);
    void setEstadoCivil(string);
    void setNombre(string);
    void setApellido(string);
    void setDNI(long);
    void cambioCivil(string);
    virtual void mostrar();
};
class Empleados:public Persona{
    private:
    int añoIngreso;
    int numOficina;
    public:
    Empleados(string,string,long,string,int,int);
    void setOficina(int);
    void cambioOficina(int);
    void mostrar();
};
class Profesores:public Empleados{
    private:
    string departamento;
    public:
    Profesores(string,string,long,string,int,int,string);
    void setDepartamento(string);
    void cambioDepartamento(string);
    void mostrar();
};
class Limpieza:public Empleados{
    private:
    string seccion;
    public:
    Limpieza(string,string,long,string,int,int,string);
    void setSeccion(string);
    void cambioSeccion(string);
    void mostrar();
};
class Estudiantes:public Persona{
    private:
    string curso;
    public:
    Estudiantes(string,string,long,string,string);
    void setCurso(string);
    void cambioCurso(string);
    void mostrar();
};