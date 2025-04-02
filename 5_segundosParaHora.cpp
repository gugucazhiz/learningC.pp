#include<iostream>
using namespace std;
int main (){
    int evento,horas,minutos,segundos;
    cout << "Duracao do evento Em segundos: ";
    cin >> evento;
    horas = evento/3600;
    minutos = (evento%3600)/60;
    segundos = (evento%3600)%60;
    cout << "horas" << horas << "minutos" << minutos << "segundos" << segundos;
    
    
}