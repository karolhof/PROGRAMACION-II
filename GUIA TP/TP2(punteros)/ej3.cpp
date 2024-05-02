#include <iostream>
using namespace std;

int main (){
int A[]={3,5,1,8,2};
int *puntin,*puntfin;
puntin=&A[0];
puntfin=&A[4];
int dif=puntfin-puntin;
cout<<dif;
    return 0;
}