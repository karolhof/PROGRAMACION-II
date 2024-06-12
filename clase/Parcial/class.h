#include <iostream>
using namespace std;

class Alarma{
    private:
    int horas,minutos,segundos;
    public:
    Alarma();
    void setAlarma(int,int,int);
    int getHoras();
    int getMinutos();
    int getSegundos();
};

class Hora{
    private:
    int horas,minutos,segundos;
    public:
    Hora();
    void setHora(int,int,int);
    int getHoras();
    int getMinutos();
    int getSegundos();
    void mostrar();
    Hora& operator++();
    bool operator==(Alarma& otro);
};

class Temperatura{
    private:
    float grados;
    public:
    Temperatura();
    void setTemperatura(float);
    float getTemperatura();
    void mostrar();
};

class Display {
    private:
    Hora hora;
    Alarma alarma;
    Temperatura temperatura;
    public:
    Display(Hora, Alarma, Temperatura);
    void mostrarResultados();
};