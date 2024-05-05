#include <iostream>
using namespace std;

class FIG_GEO{
    private:
    int x,y;
    public:
    FIG_GEO(int,int);
    int getX();
    int getY();
    virtual void mostrar();
};

class Circulo : public FIG_GEO{
    private:
    float radio;
    public:
    Circulo(int,int,float);
    float area();
    float perimetro();
    float areaPerim();
    void mostrar();
};

class Punto: public FIG_GEO{
    public:
    Punto(int,int);
    void mostrar();
};

class Cuadrado:public FIG_GEO{
    private:
    int lado;
    public:
    Cuadrado(int,int,int);
    float area();
    float perimetro();
    float areaPerim();
    void mostrar();
};