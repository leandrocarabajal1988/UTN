#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int numero, maximo, posicionmax, minimo, posicionminimo;

    cout << "ingrese el primer numero de 10" << endl;
        cin >> numero;
        maximo=numero;
        posicionmax=1;
        minimo=numero;
        posicionminimo=1;

    for (int i = 2; i <=10; i++)
    {
        cout << "ingrese el número " << i <<" de los 10 numeros" << endl;
        cin >> numero; 
        
        if (numero>maximo)
        {
            maximo=numero;
            posicionmax=i;
        }
        if (numero<minimo)
        {
            minimo=numero;
            posicionminimo=i;
        }
        
    }
    cout << "el numero mas grande es: " << maximo << endl;
    cout << "la posicion es: " << posicionmax << endl;
     cout << "el numero mas chico es: " << minimo << endl;
    cout << "la posicion es: " << posicionminimo;

    getch();
    return 0;

}