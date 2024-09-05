#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int numero;
bool impar=0;
int contimpares=0;
for (int i = 1; i <=10; i++)
{
    cout << "ingrese el numero " << i << " del listado de 10 numeros" << endl;
    cin >> numero;
    if (impar){
        if(numero%2!=0){
            contimpares++;
        }
        else {
            impar=false;
        }
    }
    else if (numero%2!=0){
            impar=true;
    }

}
cout << "la cantidad de impares es: " << contimpares << endl;

getch ();
return 0;

}