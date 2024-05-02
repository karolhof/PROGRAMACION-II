#include <iostream>
using namespace std;

void menu(int &x, int &y){
    cout<<"Ingrese dos valores"<<endl;
    cin>>x>>y;
}

void intercambio (int &x, int &y){
    if (x<y){
        swap(y,x);
    }
}

int main(){
    int x,y;
    menu(x,y);
    intercambio(x,y);
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
    return 0;
}