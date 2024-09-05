#include<iostream>
#include<conio.h>
using namespace std;
int main(){

bool bpar=true;
int ipos, ipar, iultimoprimo, inumero, ipospar, iposultimoprimo;
int contarprimo=0;
cout << "inrgesa el numero " << j << " de la lista de 7 numeros." << endl;
    cin >> inumero;
for (int j = ; j <inumero; j++)
{
 cout << "inrgesa el numero " << j << " de la lista de 7 numeros." << endl;
    cin >> inumero;
    
    
        if(inumero % j == 0){
            contarprimo++;
        }
     }
    if(contarprimo==2){
        iultimoprimo=inumero;
        iposultimoprimo=ipos;
    }


cout << "el ultimo numero primo ingresado es : " <<iultimoprimo << " ubicacion " << iposultimoprimo << endl;

getch ();
return 0;
}