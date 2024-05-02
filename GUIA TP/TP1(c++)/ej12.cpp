#include <iostream>
using namespace std;

void ordenar(int A[], int tama) {
    for (int i = 0; i < tama - 1; i++) {
        for (int j = 0; j < tama - 1 - i; j++) {
            if (A[j] < A[j + 1]) {  
                swap(A[j], A[j + 1]);
            }
        }
    }
}

int main(){
    int A[]={3,7,12,9,3,6,1,8};
    int tama=sizeof(A)/sizeof(A[0]);
    ordenar(A,tama);
    for(int i=0; i<tama; i++){
        if (i==tama-1){
            cout<<A[i];
        }else {cout<<A[i]<<",";}
    }
    return 0;
}
