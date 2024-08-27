#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    /*variables:
    e1: primeros 100Kw, e2: segundo escalon entre 101 hasta 200Kw, e3=consumo despues de los 201Kw, consumo*/

    float consumo, importe;

cout<<"ingrese el consumo: "<<endl;
cin>>consumo;

    if(consumo<=100){
        importe=consumo*10;
    }
    else if(consumo<=200){
        importe=1000+((consumo-100)*12);
    }
    else{
        importe=1000+1200+((consumo-200)*15);
    }
cout<<"el importe a pagar es: "<<importe;

getch();
return 0;
}