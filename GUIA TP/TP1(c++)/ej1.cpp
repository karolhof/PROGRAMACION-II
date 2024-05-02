#include <iostream>
using namespace std;

int diferencia (int valorx, int valory){
    int dif=valory-valorx;
    return dif;
}

int calculo (int dif, int valord){
    int saltos=(dif/valord);
    if ((dif%valord)!=0){
        saltos++;
    }
    return saltos;
}

void verificacion (int &valorx,int &valory){
    while (valory<valorx){
    cout<<"Ingrese la posicion actual del grillo"<<endl;
    cin>>valorx;
    cout<<"Ingrese la posicion a la que debe llegar el grillo"<<endl;
    cin>>valory;
    }
}

int main(){
    int valord;
    int valory=0;
    int valorx=1;
    verificacion (valorx,valory);
    cout<<"Ingrese la distancia que se traslada el grillo con cada salto"<<endl;
    cin>>valord;
    int dif=diferencia (valorx, valory);
    cout<<"El grillo debe dar "<<calculo(dif,valord)<<" saltos"<<endl;
    return 0;
}