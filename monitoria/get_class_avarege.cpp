#include <iostream>
using namespace std;


void teste(string *aluno1,float *nota1, string *aluno2,float *nota2, string *aluno3,float *nota3);


int main(){
    string aluno1="Gustavo",aluno2="Gugu",aluno3="Guguilaum";
    float nota1,nota2,nota3;
    float media1,media2,media3;
    cout<< "Digite as notas do primeiro aluno"<<endl;
    cin>> nota1>>nota2>>nota3;
    media1 = (nota1+nota2+nota3)/3;
    
    cout<< "Digite as notas do segundo aluno"<<endl;
    cin>> nota1>>nota2>>nota3;
    media2 = (nota1+nota2+nota3)/3;
    
    cout<< "Digite as notas do terceiro aluno"<<endl;
    cin>> nota1>>nota2>>nota3;
    media3 = (nota1+nota2+nota3)/3;
    
    teste(&aluno1,&media1,&aluno2,&media2,&aluno3,&media3);
    
}


void teste(string *aluno1,float *nota1, string *aluno2,float *nota2, string *aluno3,float *nota3){
    cout << *nota1<<" " << *nota2<< " "<<*nota3<<endl;
    float media = (*nota1+*nota2+*nota3)/3;
    cout <<"Media geral: "<< media<<endl;
    if((*nota1>=*nota2)&&(*nota1>=*nota3)){
        cout<<"maior nota do Aluno: "<<*aluno1<< " "<<*nota1<<endl;
     }else{
         if((*nota2>=*nota1)&&(*nota2>=*nota3)){
         cout<<"maior nota do Aluno: "<<*aluno2<< " "<<*nota2<<endl;
         }else{
            if((*nota3>=*nota1)&&(*nota3>=*nota2)){
            cout<<"maior nota do Aluno: "<<*aluno3<< " "<<*nota3<<endl;
            }
        }
    }
    if((*nota1<=*nota2)&&(*nota1<=*nota3)){
        cout<<"menor nota do Aluno: "<<*aluno1<< " "<<*nota1<<endl;
     }else{
         if((*nota2<=*nota1)&&(*nota2<=*nota3)){
         cout<<"menor nota do Aluno: "<<*aluno2<< " "<<*nota2<<endl;
         }else{
            if((*nota3<=*nota1)&&(*nota3<=*nota2)){
            cout<<"menor nota do Aluno: "<<*aluno3<< " "<<*nota3<<endl;
            }
        }
    }
    
}