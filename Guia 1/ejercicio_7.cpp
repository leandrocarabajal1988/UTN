#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    //p=precio del articulo, d=descuento, t=total a pagar//

    float p, d, t;

    cout << "ingrese el valor del articulo: " << endl;
    cin >> p;
    cout << "ingrese el descuento : " << endl;
    cin >> d;
    t =p-(d*p)/100;
    
    cout << "el total a pagar es: " << t << endl;


    getch();

    return 0;

}
