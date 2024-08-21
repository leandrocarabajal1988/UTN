#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    // s1, s2, s3, s4 numero de semana; t= total de la recaudacion de las 4 semanas, p=promedio//

    float s1, s2, s3, s4, t, p, ps1, ps2, ps3, ps4;

    cout << "ingrese recaudacion de semana 1, semana 2, semana 3, semana 4:" << endl;
    cin >> s1 >> s2 >> s3 >> s4;
    
    t = s1+s2+s3+s4;
    p = t/4;
    ps1 = (s1*100)/t;
    ps2 = (s2*100)/t;
    ps3 = (s3*100)/t;
    ps4 = (s4*100)/t;

    cout << "la recaudacion promedio es: "<< p << endl;
    cout << "el porcentaje de la semana 1 es: "<< ps1 << "%" << endl;
    cout << "el porcentaje de la semana 2 es: "<< ps2 << "%" << endl;
    cout << "el porcentaje de la semana 3 es: "<< ps3 << "%" << endl;
    cout << "el porcentaje de la semana 4 es: "<< ps4 << "%" << endl;

    getch();
    
    return 0;


}