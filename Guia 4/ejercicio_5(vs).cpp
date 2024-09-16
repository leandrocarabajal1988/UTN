#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int numeromayor, numeromenor,numero, i;

cout << "ingresa el primer nuemero: " << endl;
cin >> numeromayor;
cout << "ingresa otro numero: ";
cin >> numero;
if(numero>numeromayor){
    numeromenor=numeromayor;
    numeromayor=numero;
}
else{
    numeromenor=numero;
}
i=numeromenor;
cout << "los numeros entre ambos numeros son: " << endl;

while (i<=numeromayor)
{
    cout << i << endl;
    i++;
}
getch();
return 0;
}