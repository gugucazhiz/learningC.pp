#include<iostream>
using namespace std;
int main (){
    float n1,n2,su1,su2,su3,somasu,ant1,ant2,somaant;
    
    cout << "Digite N1: ";
    cin >> n1;
    su1 = ++n1;
    somasu = su1;
    cout << su1; //
    su2 = ++su1;
    somasu += su2;
    cout << su2; //
    su3 = ++su2;
    somasu += su3;
    cout << su3; //
    cout << endl << somasu;
    cout << endl << "Digite N2: ";
    cin >> n2;
    ant1 = --n2;
    somaant = ant1;
    cout << ant1; //
    ant2 = --ant1;
    somaant += ant2;
    cout << ant2; //
    cout << endl << somaant;
}