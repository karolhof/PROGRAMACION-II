#include <iostream>
using namespace std;

int main(){
int A[]={3,5,1,8,2};
int *punt;
for (int i=0; i<5;i++){
    punt=&A[i];
    if (i==4){
        cout<<punt;
    }else {cout<<punt<<" , ";}
}
    return 0;
}