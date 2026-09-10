#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Escribe dos numeros enteros separados por espacio: ";
    cin >> num1 >> num2;

    if (num2 == 0) {
        cout << "No se puede dividir entre 0." << endl;
        return 0;
    }

    if (num1 % num2 == 0)
        cout << num1 << " es multiplo de " << num2 << endl;
    else
        cout << num1 << " NO es multiplo de " << num2 << endl;

    return 0;
}
