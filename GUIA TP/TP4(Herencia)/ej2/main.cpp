#include <iostream>
#include "class.h"
using namespace std;

int main(){
    Comercial O1("juan",40,150000,15.2);
    Repartidor O2("Karol",23,150000,3);
    O2.toString();
    O1.toString();
    O1.plus();
    O1.toString();
    O2.toString();
    return 0;
}