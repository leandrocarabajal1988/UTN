#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    /* varaiables:
    i=importe, d=descuento, t=total*/

    float i, d, t;
    float d1, d2, d3;

    d1=5, d2=10, d3=15;

    cout<<"ingrese el importe de la venta: ";
    cin>>i, cout<<endl;

    if(i<100){
        t=i*(1-(d1/100));
        d=d1;
    }
        else if(i<500){
        t=i*(1-(d2/100));
        d=d2;
    }
        else{
        t=i*(1-(d3/100));
        d=d3;
    }

    cout<<"------------------" << endl;
    cout<<"importe de la compra: " <<i <<endl;
    cout<<"importe con el "<<d <<"% de descuento"<< endl;
    cout<<"importe a pagar: " << t;

    getch ();
    return 0;

}
