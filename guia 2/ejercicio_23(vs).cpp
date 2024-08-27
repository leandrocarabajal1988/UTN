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
    /*   // solo un if  //

    if (nmes%2==0){
        bimes=(nmes/2);
    }
    else{
        bimes=(nmes/2)+1;
    }    
    */
        //  sin if  //

   resto=nmes%2;

switch (resto)
{
case 0:
    bimes=nmes/2;
    break;
case 1:
    bimes=(nmes/2)+1;
    break;
default:
    break;
}


    cout<<"el mes ingresado correspode al bimentre numero "<<bimes;

    getch ();
    return 0;


}