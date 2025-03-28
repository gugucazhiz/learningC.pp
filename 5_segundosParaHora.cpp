#include<iostream>
using namespace std;
int main (){
    float horasEvento;
    cout << "Duracao do evento Em segundos: ";
    cin >> horasEvento;
    cout << "Minutos: ";
    cout << (horasEvento/60)<< endl;
    cout << "Horas: ";
    cout << (horasEvento/60)/60;
}