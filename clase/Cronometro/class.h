#include <iostream>
using namespace std;

class Hora{
    private:
    int horas,minutos,segundos;
    public:
    Hora();
    void setHora(int,int,int);
    void setAlarma(int,int,int);
    void mostrar();
    Hora& operator++();
    bool operator==(const Hora& otro);
};
class Temperatura{
    private:
    double grados;
    public:
    Temperatura();
    void setTemperaturaC(double);
    void mostrar();
};