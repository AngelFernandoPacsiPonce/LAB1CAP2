#include <iostream>

using namespace std;

int main() {
    int entero;

    cout << "Ingrese un número entero de cuatro dígitos: ";cin >> entero;

    if (entero >= 1000 && entero <= 9999) {
        int digito4 = entero % 10;
        int digito3 = (entero / 10) % 10;
        int digito2 = (entero / 100) % 10;
        int digito1 = (entero / 1000) % 10;

        cout << "El número al revés es: " << digito4 << " " << digito3 << " " << digito2 << " " << digito1 << endl;
    } else {
        cout << "Oe, te he dicho de 4 dígitos." << endl;
    }

    return 0;
}


