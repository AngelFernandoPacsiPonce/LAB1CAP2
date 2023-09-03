#include <iostream>

using namespace std;

int main() {
    int longitud = 0; 

    cout << "Longitud de la Cara \tÁrea de Superficie \tVolumen" << endl;
    cout << "del cubo (cm)\t\tde cubo (cm^2)\t\tde cubo (cm^3)" << endl;

    if (longitud >= 0) {
        int area_superficie = 6 * longitud * longitud;  
        int volumen = longitud * longitud * longitud; 

        cout << longitud << "\t\t\t" << area_superficie << "\t\t\t" << volumen << endl;
    }

    longitud = 1;

    if (longitud >= 0) {
        int area_superficie = 6 * longitud * longitud; 
        int volumen = longitud * longitud * longitud; 

        cout << longitud << "\t\t\t" << area_superficie << "\t\t\t" << volumen << endl;
    }

    longitud = 2;

    if (longitud >= 0) {
        int area_superficie = 6 * longitud * longitud; 
        int volumen = longitud * longitud * longitud;   

        cout << longitud << "\t\t\t" << area_superficie << "\t\t\t" << volumen << endl;
    }

    longitud = 3;

    if (longitud >= 0) {
        int area_superficie = 6 * longitud * longitud; 
        int volumen = longitud * longitud * longitud;   

        cout << longitud << "\t\t\t" << area_superficie << "\t\t\t" << volumen << endl;
    }

    longitud = 4;

    if (longitud >= 0) {
        int area_superficie = 6 * longitud * longitud;  
        int volumen = longitud * longitud * longitud;    

        cout << longitud << "\t\t\t" << area_superficie << "\t\t\t" << volumen << endl;
    }

    return 0;
}



//llamen a Dios