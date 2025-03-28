/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int anosFuma,cigasDia,cartAmount,fumaCiga;
    cout << "Carteira Valendo 6,50"<< endl;
    cout << "A quantos anos voce fuma: " << endl;
    cin >> anosFuma;
    cout << "Quantos Cigarros Ao Dia? ";
    cin >> cigasDia;
    fumaCiga = (anosFuma*360)*cigasDia;
    cout << "Quantidade de Cigarros que voce fumou: ";
    cout << fumaCiga << endl;
    cartAmount = fumaCiga/10;
    cout << "Quantidade de Carteiras: ";
    cout << cartAmount << endl;
    cout << "Voce Gastou: ";
    cout << cartAmount * 6,50;
    return 0;
}