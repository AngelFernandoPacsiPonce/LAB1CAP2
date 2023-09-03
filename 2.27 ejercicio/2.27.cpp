#include <iostream>

using namespace std;

int main() {
    
    char caracter;
    
    cout << "Ingresa un carácter: ";cin >> caracter;
    

    int tablaentero = static_cast<int>(caracter);
    cout << "El entero en la tabla ASCII de '" << caracter << "' es: " << tablaentero << endl;
    
    return 0;
}
