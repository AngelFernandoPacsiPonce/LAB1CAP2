#include <iostream>
using namespace std;

int main() {
    double pesolibra, alturapulga;
    double IMC;


    cout << "Ingrese su peso en libras: ";cin >> pesolibra;
    cout << "Ingrese su altura en pulgadas: ";cin >> alturapulga;


    IMC = (pesolibra * 703) / (alturapulga * alturapulga);

 
    cout << "Su índice de masa corporal (IMC) es: " << IMC << endl;

  
    cout << "VALORES DEL IMC" << endl;
    cout << "Peso insuficiente: menos de 18.5" << endl;
    cout << "Normal: entre 18.5 y 24.9" << endl;
    cout << "Sobrepeso: entre 25 y 29.9" << endl;
    cout << "Obesidad: 30 o más" << endl;


    if (IMC < 18.5) {
        cout << "Su IMC indica Peso insuficiente." << endl;
    } else if (IMC >= 18.5 && IMC <= 24.9) {
        cout << "Su IMC indica Normal." << endl;
    } else if (IMC >= 25 && IMC <= 29.9) {
        cout << "Su IMC indica Sobrepeso." << endl;
    } else {
        cout << "Su IMC indica Obesidad." << endl;
    }

    return 0;
}
