#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
// at=asientos totales, po=pasajes ocupados, ao=asientos ocupados, no=asientos no ocupados//

int at, po, ao, no;
cout << "ingrese total de asientos:" << endl;
cin >> at;
cout << "ingese cantidad de pasajes ocupados:" << endl;
cin >> po;
ao = (100*po)/at; 
cout <<"porcentaje de asientos ocupados:" << ao << "%" << endl;
no=(100*(at-po))/at;
cout <<"porcentaje de asientos libres:" <<no << "%" << endl;
getch();

return 0;


}