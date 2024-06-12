
#include <iostream>
using namespace std;

int main(){
    int A=1,B=2,C=3,*P1,*P2;
    P1=&A;
    P2=&C;

    cout << "Linea 1 a 3:" << endl;
    cout << "A: " << A << ", B: " << B << ", C: " << C << endl;

    *P1=(*P2)++;
    
    cout << "Linea 4:" << endl;
    cout << "A: " << A << ", B: " << B << ", C: " << C << endl;

    P1=P2;

    cout << "Linea 5:" << endl;
    cout << "A: " << A << ", B: " << B << ", C: " << C << endl;

    cout << "P1: " << *P1 << ", P2: " << *P2 << endl;

    cout << P1 << endl;

    P2=&B;

    cout << "Linea 6:" << endl;
    cout << "A: " << A << ", B: " << B << ", C: " << C << endl;

    *P1-=*P2;

    cout << "Linea 7:" << endl;
    cout << "A: " << A << ", B: " << B << ", C: " << C << endl;

    ++*P2;

    cout << "Linea 8:" << endl;
    cout << "A: " << A << ", B: " << B << ", C: " << C << endl;

    *P1 *= *P2;

    cout << "Linea 9:" << endl;
    cout << "A: " << A << ", B: " << B << ", C: " << C << endl;

    A=++*P2* *P1;

    cout << "Linea 10:" << endl;
    cout << "A: " << A << ", B: " << B << ", C: " << C << endl;

    P1=&A;

    cout << "Linea 11:" << endl;
    cout << "A: " << A << ", B: " << B << ", C: " << C << endl;

    *P2=*P1/=*P2;

    cout << "Linea 12:" << endl;
    cout << "A: " << A << ", B: " << B << ", C: " << C << endl;

    return 0;
}
