#include<iostream>
#include<conio.h>
using namespace std;
int main(){

bool bpar=true;
int iorden, ipar, iultimoprimo, inumero, ipospar, iposultimoprimo;
int contdivisor=0;

for (int i = 1; i <=7; i++)
{
    cout <<"ingrese el numero " << "i" <<" de la lista de 7 numeros." << endl;
    cin >> inumero;
    iorden=i;

    //busco el ultimo N primo //
    for (int j=1; j <=inumero; j++)
    {
        if(j==1){
            contdivisor=0;
            if(inumero%j==0){
                contdivisor++;
            }
        }
        else if(inumero%j==0){
            contdivisor++;
    }
    }
    if (contdivisor==2){
        iultimoprimo=inumero;
        iposultimoprimo=iorden;
    }
    //busco el primer N par//
    if (bpar){
        if(inumero%2==0){
        ipar=inumero;
        ipospar=iorden;
        bpar=false;
        }
    }
}
//resultados//
cout << "el primer numero par ingresado es: " << ipar << " en la ubicacion: " << ipospar << endl;    
cout << "el ultimo numero primo ingresado es : " << iultimoprimo << " en la ubicacion: " << iposultimoprimo << endl;


getch ();
return 0;
}