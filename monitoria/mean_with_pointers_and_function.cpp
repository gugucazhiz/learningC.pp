#include <iostream>
using namespace std;

void somar(int *vetor,int tamanho,float *soma, float *media);

int main(){
    int vetor[]{1,5,5,5,5};
    float soma = 0;
    float media =0;
    somar(vetor,5,&soma,&media);
    cout<<"Soma total: "<< soma<<endl;
    cout<<"Media: "<<media;
    
}


void somar(int *vetor,int tamanho,float *soma, float *media){
    for(int i =0; i < tamanho; i++){
        *soma += vetor[i];
    }
    *media = *soma/5;
}