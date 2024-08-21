#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    /*declaracion de variables
    n= numero*/

    float n;

    cout << "ingese un numero: " << endl;
    cin >> n;

    if (n<0)
    {
        cout << "es negativo" << endl;
    }
        else 
        if (n>0)
        {
            cout << "es positivo" << endl;
        }
        else {
        cout << "es cero";

    }

    getch();

    return 0;
    
}