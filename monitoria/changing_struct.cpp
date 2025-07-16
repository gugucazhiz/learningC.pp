#include <iostream>
using namespace std;


struct aluno{
    string nome;
    float nota;
};
void teste(aluno *abc,float notaa);


int main(){
    aluno al;
    teste(&al,10.2);
    
    cout<<al.nome<<al.nota;
}


void teste(aluno *abc,float notaa){
    abc->nome = "Gustavo";
    abc->nota = notaa;
}
