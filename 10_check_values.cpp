#include<iostream>
using namespace std;
int main (){
    int a,b;
    bool d,c;
    cout << "valor de A" << endl ;
    cin >> a;
    cout << "valor de B" << endl;
    cin >> b;
    cout << "Adicao ";
    cout << a+b << endl;
    cout << "mutiplicaçao ";
    cout << a*b << endl;
    cout << "Resto ";
    cout << a%b <<endl;
    
    cout << "Digite o valor de C";
    cin >> c;
    cout << "Digite o valor de D";
    cin >> d;
    cout << "" << endl;
    cout << "Negação de C " << !c << endl;
    cout << "Negação de D " << !d << endl;
    cout << "Conjução: " << (c && d) << endl;
    cout << "Disjunção: " << (c || d) << endl;
}