#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(nullptr));
    int *punt;
    int A[15];
    for (int i=0; i<15;i++){
        A[i]=rand()%100+1;
        punt=&A[i];
        cout<<"Elemento: "<<i+1<<" Valor: "<<*punt<<" direccion: "<<punt<<endl;
    }
    return 0;
}