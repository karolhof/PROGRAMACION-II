#include <iostream>
using namespace std;

bool presente(int A[], int tama, int k) {
    for (int i = 0; i < tama; i++) {
        if (A[i] == k) {
            return true;
        }
    }
    return false;
}

int lugar(int A[], int k, int tama) {
    for (int i=0; i<tama; i++) {
        if (A[i]==k) {
        return i+1;}
    }
    return -1;
}


int main(){
    int k;
    int A[]={4,3,8,1,9,32,56,0};
    int tama=sizeof(A)/sizeof(A[0]);
    cout<<"Ingrese el numero que quiere buscar"<<endl;
    cin>>k;
    bool pres=presente(A,tama,k);
    if (pres){
        int result=lugar(A,k, tama);
        cout<<"EL numero está presente y se encuentra en la posicion "<<result<<" del arreglo"<<endl;
    } else{
        cout<<"El numero no está presente en el arreglo"<<endl;
    }
    return 0;
}