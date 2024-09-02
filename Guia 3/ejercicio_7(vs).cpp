#include <iostream>
#include<conio.h>
using namespace std;

int main(){
    int numero;
    int contpos=0, contcero=0, contneg=0;
    
    for (int i = 1; i <=10; i++)
        {
        cout << "ingrese el numero " <<i<<" de los 10 números. " << endl;
        cin >> numero;
        if (numero>0)
        {
         contpos++;   
        }
    else if (numero<0)
    {
        contneg++;
    }
    else
    {
        contcero++;
    }
    }

    cout << "la cantidad de numeros negativos son. " << contneg << endl;
    cout << "la cantidad de numeros ceros son. " << contcero << endl;
    cout << "la cantidad de numeros positivos son. " << contpos << endl;

getch();
return 0;

}