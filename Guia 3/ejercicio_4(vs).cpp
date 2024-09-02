#include <iostream>
#include<conio.h>
using namespace std;

int main(){

    int numero;

    cout << "ingrese un número " << endl;
    cin >> numero, cout << endl;
    

    for (int i = 1; i <= numero; i++)
    {
        cout << i << endl;
    }
getch();   
return 0;
}