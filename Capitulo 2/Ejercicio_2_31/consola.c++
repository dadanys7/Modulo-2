#include <iostream>
using namespace std;

int main()
{
    int kilometros, costoPorLitro, kilometrosPorLitro, parqueadero, peajes;

    cout << "Kilometros que manejas al dia: ";
    cin >> kilometros;

    cout << "Costo de un litro de gasolina: ";
    cin >> costoPorLitro;

    cout << "Rendimiento del carro (kilometros por litro): ";
    cin >> kilometrosPorLitro;

    cout << "Costo del parqueadero al dia: ";
    cin >> parqueadero;

    cout << "Costo de peajes al dia: ";
    cin >> peajes;

    int litros = kilometros / kilometrosPorLitro; // ojo, aqui se pierde el decimal
    int costoDiario = (litros * costoPorLitro) + parqueadero + peajes;

    cout << "Costo total del dia: " << costoDiario << endl;

    return 0;
}
