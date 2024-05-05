#include <iostream>
using namespace std;

class Cronometro {
    private:
    int horas,minutos,segundos;
    public:
    Cronometro(int,int,int);
    Cronometro();
    void mostrar();
    void reset();
    Cronometro& operator++();
};