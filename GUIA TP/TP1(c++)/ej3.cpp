#include<iostream>
using namespace std;

void division (int n,int A[], int m){
    for (int i=1; i<=n; i++){
        int res1=n%i;
        int res2=m%i;
        if (res1==0 && res2==0 ){
            for (int j=0; j<n; j++){
                A[j]=i;
            }
        }
    }
}

int comp(int A[], int n) {
    int mayor = A[0];
    for (int i = 1; i < n; ++i) {
        if (A[i] > mayor) {
            mayor = A[i];
        }
    }
    return mayor;
}

int main(){
    int n,m;
    cout<<"Ingrese dos numeros"<<endl;
    cin>>n>>m;
    int A[n];
    division (n,A,m);
    int result=comp(A,n);
    cout<<"El mayor comun divisor de los numeros es: "<<result<<endl;
    return 0;
}