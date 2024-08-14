#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    //p=precio del articulo, d=precio con descuento, t=total a pagar, pd=porcentaje de descuento//

    float p, d, pd, da;

    cout << "ingrese el valor del articulo: " << endl;
    cin >> p;
    cout << "ingrese el importe con descuento : " << endl;
    cin >> d;
    pd =(d*100)/p;
    da=100-pd;
    cout << "el descuento aplicado es del: " << da <<"%" << endl;


    getch();

    return 0;

}