#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int numero, contpos=0, contneg=0;

cout << "ingresa un numero " << endl;
    cin >> numero;

while (numero!=0)
{
        if(numero>0){
        contpos++;
    }
    else{
        contneg++;
    }
    cout << "ingresa otro numero: " << endl;
    cin >> numero;
}
cout <<"la cantidad de numeros negativos son: " <<contneg << endl;
cout <<"la cantidad de numeros positivos son: " <<contpos << endl;

getch();
return 0;
}