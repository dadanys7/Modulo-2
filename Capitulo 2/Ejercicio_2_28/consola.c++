#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Escribe un numero de cinco digitos: ";
    cin >> numero;

    int resto = numero;

    int digito1 = resto / 10000;
    resto = resto % 10000;

    int digito2 = resto / 1000;
    resto = resto % 1000;

    int digito3 = resto / 100;
    resto = resto % 100;

    int digito4 = resto / 10;
    resto = resto % 10;

    int digito5 = resto;

    cout << digito1 << "   " << digito2 << "   " << digito3 << "   " << digito4 << "   " << digito5 << endl;

    return 0;
}
