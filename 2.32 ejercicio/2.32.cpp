#include <iostream>
using namespace std;

int main() {
    int edad;


    cout << "Ingrese su edad: ";
    cin >> edad;

 
    double mhr1 = 220 - edad;
    double mhr2 = 208 - 0.7 * edad;
    double mhr3 = 207 - 0.7 * edad;
    double mhr4 = 211 - 0.64 * edad;


    cout << "MHR utilizando la ecuación 220 - edad: " << mhr1 << endl;
    cout << "MHR utilizando la ecuación 208 - 0.7 * edad: " << mhr2 << endl;
    cout << "MHR utilizando la ecuación 207 - 0.7 * edad: " << mhr3 << endl;
    cout << "MHR utilizando la ecuación 211 - 0.64 * edad: " << mhr4 << endl;


    double minMHR = mhr1; 
    double maxMHR = mhr1; 

    if (mhr2 < minMHR) {
        minMHR = mhr2;
    }
    if (mhr3 < minMHR) {
        minMHR = mhr3;
    }
    if (mhr4 < minMHR) {
        minMHR = mhr4;
    }

    if (mhr2 > maxMHR) {
        maxMHR = mhr2;
    }
    if (mhr3 > maxMHR) {
        maxMHR = mhr3;
    }
    if (mhr4 > maxMHR) {
        maxMHR = mhr4;
    }

    cout << "Rango de valores MHR SUGERIDOS: " << minMHR << " - " << maxMHR << endl;

    return 0;
}

