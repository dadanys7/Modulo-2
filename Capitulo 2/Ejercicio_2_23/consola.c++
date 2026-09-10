#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;

    cout << "Escribe cinco numeros enteros separados por espacio: ";
    cin >> a >> b >> c >> d >> e;

    int menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    if (d < menor) menor = d;
    if (e < menor) menor = e;

    int mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;
    if (d > mayor) mayor = d;
    if (e > mayor) mayor = e;

    cout << "Menor: " << menor << endl;
    cout << "Mayor: " << mayor << endl;

    return 0;
}
