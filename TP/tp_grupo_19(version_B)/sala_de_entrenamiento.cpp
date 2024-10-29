#include "un_jugador.h"
#include "dados.h"
#include <conio.h>
#include <iostream>
#include <string.h>
#include "rlutil.h"
#include "funciones_accesorios.h"

using namespace std;

int sala_de_entrenamiento()
{
    system("cls");


    /*armar_cuadro(23, 2, 94, 10, "BLACK", "GREY");*/

//dibujo escudo

    int x=1;
    int y=1;

    for (int i=x+1; i<=4; i++)
    {
        rlutil::setColor(rlutil::CYAN);
        rlutil::setBackgroundColor(rlutil::GREY);
        rlutil::locate(i,y);
        cout<< (char)220;
    }
    rlutil::locate(x+2,y+1);
    cout<< (char)219;
    rlutil::locate(x+2,y+2);
    cout<< (char)223;
    rlutil::setColor(rlutil::GREY);
    rlutil::setBackgroundColor(rlutil::LIGHTRED);
    rlutil::locate(x,y);
    cout<< (char)219;
    rlutil::locate(x+4,y);
    cout<< (char)219;
    rlutil::locate(x,y+1);
    cout<< (char)219;
    rlutil::locate(x+4,y+1);
    cout<< (char)219;
    rlutil::locate(x+1,y+2);
    cout<< (char)219;
    rlutil::locate(x+3,y+2);
    cout<< (char)219;
    rlutil::locate(x+1,y+1);
    cout<< (char)219;
    rlutil::locate(x+3,y+1);
    cout<< (char)219;
    rlutil::setColor(rlutil::BLACK);
    rlutil::setBackgroundColor(rlutil::LIGHTRED);

    rlutil::locate(100, 38);
    system("pause");
    return 0;

}

