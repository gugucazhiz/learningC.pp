#include<iostream>
using namespace std;
int main (){
    float nota1,nota2,nota3;
    
    cout << "Digite Nota 1: ";
    cin >> nota1;
    cout << endl << "Digite Nota 2: ";
    cin >> nota2;
    cout << endl << "Digite Nota 3: ";
    cin >> nota3;
    cout << "Media Aritimetica: " << (nota1 + nota2+nota3)/3 << endl;
    cout << "Media Ponderada: " << ((nota1*1)+(nota2*2)+(nota3*2))/5<< endl;
}