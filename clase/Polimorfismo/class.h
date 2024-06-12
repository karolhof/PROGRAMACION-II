/*Programa que calcule area, permimetro y volumen de cualquier figura
analizar, defininir jerarquias y desarrollar un polimorfismo dinamico*/

#include <iostream>

class Figura{
    public:
    Figura ();
};

class Bidimensional: public Figura{
    private:
    float base, altura;
    public:
    Bidimensional(float, float);
    float perimetro();
    float area();
    float getBase();
    float getAltura();
};

class Cuadrado: public Bidimensional{
    public:
    Cuadrado(float, float);
    float perimetro();
    float area();
};

class Triangulo: public Bidimensional{
    public:
    Triangulo(float, float);
    float perimetro();
    float area();
};








class Tridimensional: public Figura{
    private:
    float profundidad;
    public:
    Tridimensional(float);
    float perimetro();
    float area();
    float getProfundidad();
};

class Cilindro : public Tridimensional{
    private:
    float radio;
    public:
    Cilindro(float, float);
    float volumen();
};

class Caja : public Tridimensional{
    private:
    float altura, base;
    public:
    Caja(float, float, float);
    float volumen();
};