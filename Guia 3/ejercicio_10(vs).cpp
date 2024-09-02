#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int numero, maximo, posicion;

    cout << "ingrese el primer numero de 10" << endl;
        cin >> numero;
        maximo=numero;
        posicion=1;

    for (int i = 2; i <=10; i++)
    {
        cout << "ingrese el número " << i <<" de los 10 numeros" << endl;
        cin >> numero; 
        if (numero>maximo)
        {
            maximo=numero;
            posicion=i;
        }
    }
    cout << "el numero mas grande es: " << maximo << endl;
    cout << "la posicion es: " << posicion;

    getch();
    return 0;

}