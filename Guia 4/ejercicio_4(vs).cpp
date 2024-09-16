#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int numero, i;
cout << "ingrese un numero" << endl;
cin >> numero;
i=1;
cout << "los numeros entre el 1 y el numero ingresados son: ";

while (i<=numero)
{
    cout << i << endl;
    i++;

}


getch();
return 0;

}