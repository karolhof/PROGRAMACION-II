#include <iostream>
using namespace std;

class Password{
    private:
    int longitud;
    string contraseña;
    public:
    Password();//por defecto
    void setLong(int); //long parametro
    void generarPassword(string);//genera contraseña
    bool esFuerte();//2mayus,1minus y 5num
    void mostrar();//mostrar cseña y long
};