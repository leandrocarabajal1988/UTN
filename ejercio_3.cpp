#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
//av=autos vendidos, sb=sueldo basico, ts=total del sueldo//
int av;
float sb, ts;

    cout <<"ingrese cantidad de autos vendidos:" << endl;
    cin >> av;
    ts = 5000 + av*700;
    cout <<"el sueldo total es:" << endl;
    cout << ts;


    getch ();
    return 0;

}
