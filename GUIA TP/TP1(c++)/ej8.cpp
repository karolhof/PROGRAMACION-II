#include <iostream>
using namespace std;

void polinomio(int grad, int coef[], int &x){
    cout << "Ingrese un valor para x: ";
    cin >> x;
    int result = 0;
    int x_pow = 1;

    for(int i = 0; i <= grad; i++){
        result += coef[i] * x_pow;
        x_pow *= x;
    }

    cout << "El resultado del polinomio es: " << result << endl;
}

void menu(int &grad, int coef[], int&x){
    bool verif=true;
    while(verif){
    cout<<"Ingrese el grado del polinomio"<<endl;
    cin>>grad;
    if (grad>=1){
        int cont=0;
        while (cont<=grad){
            for (int i=0; i<=grad; i++){
            cout<<"Ingrese el coeficiente de la posicion: "<<cont<<endl;
            cin>>coef[i];
            cont++;
            }
        }
        polinomio(grad,coef,x);
        break;
    } else {
        cout<<"El coeficiente debe ser mayor a 0"<<endl;
        verif=false;
    }
    }
}

int main(){
    int grad,x;
    int coef[grad]; 
    menu(grad, coef, x);

    return 0;
}