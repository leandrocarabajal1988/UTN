#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int numero, mayor1, mayor2;

cout << "ingrese un numero" << endl;
cin >> numero;
mayor1=numero;
cout << "ingrese otro numero" << endl;
cin >> numero;
if(numero>=mayor1){
    mayor2=mayor1;
    mayor1=numero;
}
else{
    mayor2=numero;
}

for (int i = 3; i <=5; i++)
{
    cout << "ingrese un numero" << endl;
    cin >> numero;
    if(numero>=mayor1){
        mayor2=mayor1;
        mayor1=numero;
    }
    else if(numero>=mayor2){
        mayor2=numero;
    }
}
cout << "el numero mayor es " << mayor1 << endl;
cout << "el segundo numero mayor es " << mayor2 << endl;
 getch();
 return 0;
}