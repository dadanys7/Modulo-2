#include <iostream>
using namespace std;

int main()
{
    int pesoEnLibras, alturaEnPulgadas;

    cout << "Escribe tu peso en libras: ";
    cin >> pesoEnLibras;

    cout << "Escribe tu estatura en pulgadas: ";
    cin >> alturaEnPulgadas;

    int bmi = (pesoEnLibras * 703) / (alturaEnPulgadas * alturaEnPulgadas);

    cout << "Tu BMI es: " << bmi << endl;

    cout << "Valores del indice de masa corporal:" << endl;
    cout << "  Bajo peso:      menos de 18.5" << endl;
    cout << "  Normal:         entre 18.5 y 24.9" << endl;
    cout << "  Sobrepeso:      entre 25.0 y 29.9" << endl;
    cout << "  Obeso:          30.0 o mas" << endl;

    return 0;
}
