#include<iostream>
#include<conio.h>
using namespace std;
int main(){

bool bpar=true;
int ipos, ipar, iultimoprimo, inumero, ipospar, iposultimoprimo;
int contarprimo=0;

for (int i = 1; i <=7; i++)
{
    cout << "inrgesa el numero " << i << " de la lista de 7 numeros." << endl;
    cin >> inumero;
    ipos=i;
    /*//analizo si es el primer par//
    if((inumero%2==0) && bpar){
        ipar=inumero;
        ipospar=i;
        bpar=false;
    }*/
    //busco el ultimo numero primo//
    for (int j = 1; j <=inumero; j++)
    {
        if(inumero % j == 0){
            contarprimo++;
        }
     }
    if(contarprimo==2){
        iultimoprimo=inumero;
        iposultimoprimo=ipos;
    }
}
cout << "el primer numero par ingresado es :" << ipar << " ubicacion " << ipospar <<endl;
cout << "el ultimo numero primo ingresado es : " <<iultimoprimo << " ubicacion " << iposultimoprimo << endl;

getch ();
return 0;
}