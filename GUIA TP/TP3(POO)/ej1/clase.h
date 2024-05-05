#include <iostream>
using namespace std;

class Fecha {
private:
    int dia;
    int mes;
    int año;
    int *p=&dia;
    int *q=&mes;
    int *k=&año;

public:
    Fecha(int, int, int);
    Fecha();
    int getDia();
    int getMes();
    int getAño();
    void operator++();
    void operator--();
    void operator+(int);
    void operator-(int);
};