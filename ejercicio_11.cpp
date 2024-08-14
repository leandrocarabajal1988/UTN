#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    //m=minutos, h=horas, d=dias, mr= minutos restantes//

    int m, d, rh, h, rd;

    cout << "ingrese los minutos: " << endl;
    cin >> m;

    d=m/1440;
    rd=m%1440;
    h=rd/60;
    rh=rd%60;

    cout << d << "dias " << h << "horas " << rh << "minutos" << endl;

    getch();
    return 0;


}