#include<iostream>
using namespace std;

int main(){

    int entero1;
    int entero2;

    cout<<"Ingrese el primer entero: ";cin>>entero1;

    cout<<"Ingrese el segundo entero: ";cin>>entero2;

//Pal primer entero
    if (entero1%2 !=0){

        cout<<entero1<<" Es impar "<<endl;
        
    } else{
        cout<<entero1<<" NO es impar "<<endl;   
    }

//Pal segundo entero
    if (entero2%2 !=0){

        cout<<entero2<<" Es impar "<<endl;
        
    } else{
        cout<<entero2<<" NO es impar "<<endl;   
    }    
//en el casos de sumar>

    int suma= entero1+entero2;


    if (suma%2 !=0){

        cout<<"La SUMA de "<<entero1<<" + "<<entero2<<" es un número impar "<<endl; 
    } else{

        cout<<"La SUMA de "<<entero1<<" + "<<entero2<<" NO es un número impar "<<endl; 
    }

    return 0;
}