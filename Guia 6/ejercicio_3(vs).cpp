#include<iostream>
#include<conio.h>
using namespace std;

//realizo la funcion bool esPrimo//

bool esPrimo (int numero){
    int divisores=0;
    for (int i = 1; i <=numero; i++)
    {
        if(numero%i==0){
            divisores++;
        }
    }
    if (divisores==2){
        return true;
    }
    else {
        return false;
    }
    
}

//hago el programa donde ingrese un numero y con la funsion es primo saco el cartel si es primo o no//

int main (){
    int numero;
    
    cout<<"ingresa un numero distinto de cero: "<<endl;
    cin>>numero;

    if(esPrimo(numero)){
        cout<<"el numero "<<numero<<" es un numero primo";
    }
    else {
    cout<<"el numero "<<numero<<" NO es un numero primo";
    }
getch ();
return 0;
}