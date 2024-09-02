#include <iostream>
#include<conio.h>
using namespace std;

int main(){
    int numero, maximo;

    cout << "ingrese el primer numero de 10" << endl;
        cin >> numero;
        maximo=numero;

    for (int i = 2; i <=10; i++)
    {
        cout << "ingrese el número " << i <<" de los 10 numeros" << endl;
        cin >> numero;
        if (numero>maximo)
        {
            maximo=numero;
        }
    }
cout << "el numero mas grande es: " << maximo;

getch ();
return 0;


}