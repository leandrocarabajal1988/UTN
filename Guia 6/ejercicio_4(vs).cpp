#include<iostream>
#include<conio.h>
using namespace std;

//priemero quiero saber si el numero es primo// 

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
//SI es primo analizo si esPrimoSophieGermain (2*n+1)//

bool esPrimoSophieGermain(int numero){
    int numero2;
        if (esPrimo(numero)){
            numero2=(2*numero)+1;
            if(esPrimo(numero2)){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
}

//resuelvo el ejercicio//
int main(){
    int numero;

    cout<<"ingrese un numero: "<<endl;
    cin>>numero;
    if (esPrimoSophieGermain(numero)){
        cout<<"en numero "<<numero<<" es un numero primo Sophie Germain: VERDADERO";
    }
    else{
         cout<<"en numero "<<numero<<" es un numero primo Sophie Germain: FALSO";
    }
getch();
return 0;
}