#include<iostream>
using namespace std;
int main (){
    float fabrica,cliente;
    cout << "Custo De Fabrica: "<<endl;
    cin >> fabrica;
    cliente = (fabrica *1.28)*1.45;
    cout << "Custo Cliente: ";
    cout << cliente;
}