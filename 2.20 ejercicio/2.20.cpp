/*

2.20 (Diameter, Circumference and Area ofa Circle) Writc a program that reads in the radius of
a cirele as an integer and prints the circe's diameter, circumference and arca. Use the constant value
3.14159 for T. Do all alculations in ouspue statements. Nose In ehis chapre

we've discussed only
integer constants and variables. In Chapter 4 we discuss foating-point numbers, ie. values dhar
have decimal points.)


*/

#include<iostream>
using namespace std;

int main(){


    const double pi= 3.14159;
    int radio;

    cout<<"Por favor, introduzca el radio del círculo en número ENTERO: "; cin>>radio;


    double diametro= 2*radio;
    double circunferencia= 2*pi*radio;
    double area= pi*radio*radio;

    cout<<"EL DIAMETRO ES: "<<diametro<<endl;
    cout<<"LA CIRCUNFERENCIA ES: "<<circunferencia<<endl;
    cout<<"EL ÁREA ES: "<<area<<endl;


    return 0;
}