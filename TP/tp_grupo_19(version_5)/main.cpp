#include "menu.h"
#include "un_jugador.h"
#include "ctime"
#include <iostream>

using namespace std;

int main()
{
    int opcion;
    srand(time(0));

    do
    {
        system("cls");
        opcion=seleccionar_Opcion();
        opcion_Elegida(opcion);

    }
    while(opcion!=0);

    return 0;
}
