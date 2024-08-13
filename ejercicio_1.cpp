#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    //cantidad de horas=ch, valor hora=va, total a pagar=t//
    int ch, vh, t;
    
    cout << "ingrese cantidad de horas:" << endl;
    cin >> ch;
    
    cout << "ingrese valor hora:" << endl;
    cin >> vh;
    
    t = ch*vh;
    
    cout << "el sueldo es:" << t;
    getch ();

    return 0;
}