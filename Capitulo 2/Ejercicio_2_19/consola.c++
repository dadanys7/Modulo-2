#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Escribe tres numeros enteros separados por espacio: ";
    cin >> a >> b >> c;

    int suma = a + b + c;
    int promedio = suma / 3; 
    int producto = a * b * c;

    int menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    int mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;

    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Producto: " << producto << endl;
    cout << "Menor: " << menor << endl;
    cout << "Mayor: " << mayor << endl;

    return 0;
}
