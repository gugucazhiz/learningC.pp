#include <iostream>
using namespace std;

void trocar(int *a,int *b);

int main(){
    int abc =1, def =2;
    trocar(&abc,&def);
    cout << abc << def;
}


void trocar(int *a,int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}