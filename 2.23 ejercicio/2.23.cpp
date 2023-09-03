#include <iostream>

using namespace std;

int main() {
    int entero, menor, mayor;
    
    cout << "Ingrese el primer entero: ";
    cin >> entero;
    
    menor = mayor = entero;
    
    cout << "Ingrese el segundo entero: ";
    cin >> entero;
    if (entero < menor) {
        menor = entero;
    } else if (entero > mayor) {
        mayor = entero;
    }
    
    cout << "Ingrese el tercer entero: ";
    cin >> entero;
    if (entero < menor) {
        menor = entero;
    } else if (entero > mayor) {
        mayor = entero;
    }
    
    cout << "Ingrese el cuarto entero: ";
    cin >> entero;
    if (entero < menor) {
        menor = entero;
    } else if (entero > mayor) {
        mayor = entero;
    }
    
    cout << "Ingrese el quinto entero: ";
    cin >> entero;
    if (entero < menor) {
        menor = entero;
    } else if (entero > mayor) {
        mayor = entero;
    }
    
    cout << "El entero menor es: " << menor << endl;
    cout << "El entero mayor es: " << mayor << endl;

    return 0;
}
