#include <iostream>
#include<conio.h>
using namespace std;

int main(){

int cantidadnumeros, numero; 
int contpos=0;

cout << "ingrese cuantos numeros componen la lista: " << endl;
cin>>cantidadnumeros, cout << endl;

for (int i = 1; i <= cantidadnumeros; i++)
{
    cout << "ingrese un numero de la lista " <<endl;
    cin >>numero;
    if(numero>0){
        contpos++;
    }
}
cout<<"la cantidad de numeros positivos ingresados es: " << contpos;

getch();
return 0;
}