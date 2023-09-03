//FACTORES QEUEEEEE

#include <iostream>
using namespace std;

int main(){

    int ent1;
    int ent2;
    int ent3; 

    cout<<"Introduzca el primer entero: ";cin>>ent1;
    cout<<"Introduzca el segundo entero: ";cin>>ent2;
    cout<<"Introduzca el tercer entero: ";cin>>ent3;

    if (ent3%ent1==0 && ent3%ent2==0){

        cout<<ent1<<" y "<<ent2<<" Si son factores de "<<ent3<<endl;
    } else{
        cout<<ent1<<" y "<<ent2<<" NO son factores de "<<ent3<<endl;

    }

    return 0;
}