#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int numero, maximopar;
bool primero=true;

for (int i = 1; i <= 10; i++)
{
    cout << "ingrese en numero " << i << " del listado de 10" << endl;
    cin >> numero;
    if (numero%2==0){
        if (primero){
            maximopar=numero;
            primero=false;
        }
        else if (numero > maximopar){
            maximopar=numero;
        }
    }
}

cout << "el maximo de los pares es; " <<maximopar << endl;

getch ();
return 0;

}