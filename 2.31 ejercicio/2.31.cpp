#include <iostream>

using namespace std;

int main() {
    
    double millasPorDia;
    double costoGasolina;
    double millasPorGalon;
    double tarifasEstacionamiento;
    double peajes;
    
    
    cout << "Ingrese las millas totales recorridas por día: ";cin >> millasPorDia;
    
    cout << "Ingrese el costo por galón de gasolina: S/.";cin >> costoGasolina;
    
    cout << "Ingrese el promedio de millas por galón: ";cin >> millasPorGalon;
    
    cout << "Ingrese las tarifas de estacionamiento por día: S/.";cin >> tarifasEstacionamiento;
    
    cout << "Ingrese los peajes por día: S/.";cin >> peajes;
  



    double costoDiario = (millasPorDia / millasPorGalon) * costoGasolina + tarifasEstacionamiento + peajes;
    
    
    cout << "El costo diario de conducción al trabajo es: S/." << costoDiario << endl;
    
    return 0;
}
