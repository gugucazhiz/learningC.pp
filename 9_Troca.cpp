#include<iostream>
using namespace std;
int main (){
    int y,x,c;
    cout << "valor de Y" << endl ;
    cin >> y;
    cout << "valor de X" << endl;
    cin >> x;
    
    c = x;
    x = y;
    y = c;
    
    cout << "Valor de Y: ";
    cout << y << endl;
    cout << "Valor de X: ";
    cout << x;
}