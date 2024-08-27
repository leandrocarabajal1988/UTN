#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    /*variables:
    nmes: numero de mes
    trimes: grupo de trimestre
    
    */
    int nmes;
    int trimes, resto;

    cout<<"ingrese el numero del mes: "<<endl;
    cin>>nmes;

    resto=nmes%3;

    switch (resto)
{
case 0:
    trimes=nmes/3;
    break;
default:
    trimes=(nmes/3)+1;
    break;
}
 cout<<"el mes ingresado correspode al trimestre numero "<<trimes;

    getch ();
    return 0;





}