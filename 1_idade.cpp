#include <iostream>
using namespace std;
int main() {
    int dia,mes,ano,diasTotais,diasAnosTotais;

    cout << "DIA: ";
    cin >> dia;
    
    cout << "Mes: ";
    cin >> mes;
    
    diasTotais = (mes*30);

    cout << "ANOS: ";
    cin >> ano;

    diasAnosTotais = (ano*360);

    cout << "Quantidade de dias: ";
    cout << diasAnosTotais+diasTotais + dia;

    return 0;
}
