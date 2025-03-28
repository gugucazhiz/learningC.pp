#include<iostream>
using namespace std;
int main (){
    float valor1,percentual;
    cout << "Digite um valor ";
    cin >> valor1 ;
    cout << "Digite Um Percentual ";
    cin >> percentual;
    cout << valor1*((percentual+100)/100);
    return 0;
}