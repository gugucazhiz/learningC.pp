/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int input,parcelas;
    float valorCompra;
    
    cout << "Qual o valor da sua compra: "<< endl;
    cin >> valorCompra;
    cout << "Deseja pagar a vista ou parcelado"<<endl;
    cout << "1)A Vista"<<endl;
    cout << "2)Parcelado"<<endl;
    cin >> input;
    if (input == 1){
    cout << "Valor compra a Vista: ";
    cout << valorCompra;
    }else{
        cout << "Quantidade de parcelas Desejadas: "<<endl;
        cin >> parcelas;
        for(int a=0;a != parcelas;a++){
            cout << ""<<endl;
            cout << a;
            cout << ")Parcela ";
            cout << (valorCompra/parcelas);
        }    
    }
    return 0;
}