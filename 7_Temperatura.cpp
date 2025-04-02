#include<iostream>
using namespace std;
int main (){
    float celciu,fare;
    cout << "Temperatura em graus Celcius"<< endl;
    cin >> celciu;
    fare =(9*celciu+160)/5;
    cout << "Temperatura em Fare ";
    cout << fare;
}