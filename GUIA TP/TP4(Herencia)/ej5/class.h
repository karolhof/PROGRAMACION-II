#include <iostream>
#include <vector>
using namespace std;

class Personaje {
    private:
    string nombre;
    string raza;
    int fuerza;
    int inteligencia;
    int puntosVidaMax;
    int puntosVidaActuales;
    public:
    Personaje(string,string,int,int,int);
    string getNombre();
    int& getPuntosVidaActuales();
    void setPuntosVidaActuales(int);
    virtual void mostrar();
};

class Mago : public Personaje {
    private:
    vector<string> hechizos;
    public:
    Mago(string,string,int,int,int);
    void aprendeHechizo(string);
    void lanzaHechizo(Personaje&);
    void mostrar();
};

class Clerigo : public Personaje {
    private:
    string dios;
    public:
    Clerigo(string,string,int,int,int,string);
    void curar(Personaje&);
    void mostrar();
};