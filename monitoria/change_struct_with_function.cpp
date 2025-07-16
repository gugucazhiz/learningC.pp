#include <iostream>
using namespace std;

//mudar nota de aluno dentro de struct usando função

struct pessoa{
    int idade;
    string nome;
    int saldo;
};

void receita(pessoa *p);

int main(){
    pessoa p[3];
    
    for(int i =0 ;i <3 ;i++){
        receita(&p[i]);
    }
    for(int i =0;i<3;i++){
        cout << "Nome: "<<p[i].nome<<endl;    
    }
    
    
}

void receita(pessoa *p){
    cout << "Digite O nome do User: ";
    cin >>  p -> nome;
}
