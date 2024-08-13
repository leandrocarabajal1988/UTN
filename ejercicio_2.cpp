#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
// a=primer nuemero, b=segundo numero, c=pivote de a, d=pivote de b//
//declaro variables 
float a, b, c, d;

cout <<"ingrese el primer numero:" << endl;
cin >> a;
c = a;
cout <<"ingrese el segundo numero:" << endl;
cin >> b;
d = b;
cout <<"los numeros intercambiados son:" << endl;
cout << d << "-" << c;

getch ();

return 0;

}
