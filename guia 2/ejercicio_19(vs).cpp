#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    /*variables:
    horas: cantidad de horas, urgente, */

int horas;
char tipo;
bool urgente;
float importe=0;

cout<<"ingrese la cantidad de horas; "<<endl;
cin>>horas;
cout<<"ingrese el tipo de programa: "<<endl;
cin>>tipo;
cout<<"¿es urgente (si-1/no-0)? ";
cin>>urgente;


switch (tipo)
{
case 'c':
    importe=7500*horas;
    break;
case '#':
    importe=6100*horas;
    break;
case 'p':
    importe=5400*horas;
    break;
case 'g':
    break;
default:
    break;
}
if (urgente){
    importe=importe*2.2;
}
cout<<"el importe a pagar es: " <<importe;

getch();
return 0;



}