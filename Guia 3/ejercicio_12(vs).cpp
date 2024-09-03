#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int numero, maximoneg, minimopos;
    bool primerpositivo=true, primernegativo=true;
   
for (int i = 1; i <=10; i++)
{
    cout << "ingrese el número " << i <<" de los 10 numeros" << endl;
        cin >> numero; 

    if(numero>0){
        if(primerpositivo){
            minimopos=numero;
            primerpositivo=false;
        }
        else if(numero<minimopos){
            minimopos=numero;
        }
    }
    if(numero<0){
        if(primernegativo){
            maximoneg=numero;
            primernegativo=false;
            }
        else if(numero>maximoneg){
            maximoneg=numero;
        }
    }
}
if(primerpositivo){
    cout <<"no se ingreso ningun numero positivo" << endl;
}
else{
    cout <<"el minimo positivo es. " << minimopos <<endl;
}
if(primernegativo){
    cout <<"no se ingreso ningun numero negativo" << endl;
}
else{
    cout <<"el maximo negativo es. " << maximoneg <<endl;
}


getch ();
return 0;
}