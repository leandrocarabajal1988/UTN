#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    // h=horas, d=dias, hr=horas restantes//

    int h, d;
    float hr;

    cout << "ingrese la cantidad de horas: " << endl;
    cin >>h;
    
    d=h/24;
    hr=h%24;

    cout << d <<" dias y " << hr <<" horas" <<endl;

    getch();

    return 0;


}