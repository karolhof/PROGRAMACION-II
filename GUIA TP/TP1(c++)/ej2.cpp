#include <iostream>
using namespace std;

void verif(int& a, int& b)
{
    if (a>b)
    {
        swap(a,b);
    }
}

void ingreso_valores(int& a,int& b,int& k)
{
    cout<<"ingresa el extremo a del entorno"<<endl;
    cin>>a;
    cout<<"ingresa el extremo b del entorno"<<endl;
    cin>>b;
    cout<<"ingrese el numero k"<<endl;
    cin>>k;
}

int numeros_divisibles(int a,int b,int k)
{
    int contador=0;
    for (int i=a; i <= b; i++)
    {
        if ((i%k)==0)
        {
            contador++;
        }
    }
    return contador;
}

int main()
{
    int a,b,k;
    ingreso_valores(a,b,k);
    verif(a,b);
    cout<<"la cantidad de numeros divisibles por "<<k<<" es: "<<numeros_divisibles(a,b,k);
}