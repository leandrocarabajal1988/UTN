#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    /*variables:
    nmes: numero de mes
    bimes1: primer bimestre
    bimes2: segundo bimestre
    bimes3: tercer bimestre
    bimes4: cuarto bimestre
    bimes5: quinto bimestre
    bimes6: sexto bimestre
    */
    int nmes;
    int bimes, resto;

    cout<<"ingrese el numero del mes: "<<endl;
    cin>>nmes;

    resto=nmes%3;

    switch (resto)
{
case 0:
    bimes=nmes/2;
    break;
default:
    bimes=(nmes/3)+1;
    break;
}
 cout<<"el mes ingresado correspode al trimestre numero "<<bimes;

    getch ();
    return 0;





}