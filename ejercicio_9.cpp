#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    // m=minutos ingresados, h=horas, mr=minutos restantes //

    int m, h, mr;

    cout << "ingrese la cantidad de minutos: " << endl;
    cin >> m;

    h=m/60;
    mr= m%60;

    cout << h << " horas y " << mr <<"minutos " << endl; 
  
    getch();

    return 0;
    



}