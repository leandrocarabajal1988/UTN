#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int numero, primerimpar, segundoimpar=0,anteultimoimpar=0, ultimoimpar=0;
    bool pasouno=true, pasodos=true;
for (int i = 1; i <=7; i++)
{
    cout << "ingresa el numero " << i << " del listado de 7 numeros" << endl;
    cin >> numero;

    if(numero%2!=0){
        if (pasouno){
            primerimpar=numero;
            pasouno=false;
        }
        else if(pasodos){
            segundoimpar=numero;
            pasodos=false;
        }
        else {
            anteultimoimpar=ultimoimpar;
            ultimoimpar=numero;
        }     
    }
}
if(pasouno){
    cout << "no se ingreso ningun numero impar!" << endl;
}
else{
    cout <<"el primer numero impar es: " << primerimpar << endl;
}
if(pasodos){
    cout <<"solo se ingreso un numero impar: " << endl;
}
else{
    cout <<"el segundo numero impar es: " << segundoimpar << endl;
}
if (anteultimoimpar!=0){
    cout <<"el anteultimo numero impar es: " << anteultimoimpar << endl;
}
if(ultimoimpar!=0){
    cout <<"el ultimo numero impar es: " << ultimoimpar << endl;
}
getch();
return 0;
}
