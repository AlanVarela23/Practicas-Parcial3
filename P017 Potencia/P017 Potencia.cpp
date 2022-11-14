// P017 Potencia
//14/11/22 Alan Varela

#include <iostream>

using namespace std;

/*
2 elevado a 0 = 1
2 elevado a 1 = 2
2 elevado a 5 = 32
{
(2*2*2*2*2)=32
2*(2*(2*4)=16)=32
*/



int potencia(int base, int exponente) {
    if (exponente == 0) 
    {
        return 1;
    }
    if (exponente == 1) 
    {
        return base;
    }
    else 
    {
        return base * potencia(base, exponente - 1);
    }
}
int main() 
{
    int base, exponente;
    cout << "Calculadora de potencia " << endl << endl;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    cout << "\n" << base << " elevado a " << exponente << " es: " << potencia(base, exponente) << endl;

    return 0;
}