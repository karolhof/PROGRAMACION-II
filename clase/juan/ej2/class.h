#include <iostream>
using namespace std;

class cronometro {
    private:
        int horas,minutos,segundos;
    public:
        cronometro (int,int,int);
        cronometro();
        void reset();
        cronometro& operator++();
        void mostrar ();
};
