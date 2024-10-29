//aca van las funciones del menu

#include "menu.h"
#include "un_jugador.h"
#include "dos_jugadores.h"
#include "creditos.h"
#include "funciones_accesorios.h"
#include "sala_de_entrenamiento.h"
#include "rlutil.h"
#include <iostream>

using namespace std;
//----------------------------------------------------------------------

int seleccionar_Opcion(){
    system("color C0");// le cambia el color de fondo y el de la letra
    system("title GREED: MENU PRINCIPAL");// le pone nombre a la barra de la ventana
    //dibujos
    armar_cuadro(23, 2, 94, 10, "BLACK", "GREY");

    int opcion;

rlutil::locate(35, 3);
    texto_letras("***********************************************************************", 1000);
rlutil::locate(35, 4);
    texto_letras("***           ****           ****        ****        ****          ****", 1000);
rlutil::locate(35, 5);
    texto_letras("***   ************   *****   ****   *********   *********   *****   ***", 1000);
rlutil::locate(35, 6);
    texto_letras("***   ************   *****   ****   *********   *********   *****   ***", 1000);
rlutil::locate(35, 7);
    texto_letras("***   ***     ****   ***   ******        ****        ****   *****   ***", 1000);
rlutil::locate(35, 8);
    texto_letras("***   *****   ****   *****  *****   *********   *********   *****   ***", 1000);
rlutil::locate(35, 9);
    texto_letras("***   *****   ****   *****   ****   *********   *********   *****   ***", 1000);
rlutil::locate(35, 10);
    texto_letras("***           ****   ******   ***        ****        ****          ****", 1000);
rlutil::locate(35, 11);
    texto_letras("***********************************************************************", 1000);

armar_cuadro_doble(58, 15, 23, 3, "BLACK", "GREY");
    rlutil::locate(62, 17);
    cout<< " MENU DEL JUEGO"<<endl;

    rlutil::locate(60, 19);
    cout<< "1-modo un jugador"<< endl;
    rlutil::locate(60, 20);
    cout<< "2-modo dos jugadores"<< endl;
    rlutil::locate(60, 21);
    cout<< "3-estadisticas"<< endl;
    rlutil::locate(60, 22);
    cout<< "4-creditos"<< endl;
    rlutil::locate(60, 23);
    cout<< "0-salir"<< endl << endl;
    rlutil::locate(60, 25);
    cout<< "Seleccione una opcion"<< endl;

    cin>> opcion;

    return opcion;
}
//-------------------------------------------------------------------------
void opcion_Elegida(int opcion){
switch(opcion)
    {
        case 1:
        un_jugador();
            break;
        case 2:
        dos_jugadores();
            break;
        case 3:

            break;
        case 4:
        creditos();
            break;
        case 10:
        sala_de_entrenamiento();
            break;
        case 0:
            cout<<endl<<"GRACIAS POR JUGAR CON NOSOTROS"<<endl;
            break;
        default:

            rlutil::locate(62, 20);
            rlutil::setColor(rlutil::RED);
            rlutil::setBackgroundColor(rlutil::WHITE);
            cout<< " NO ES UNA OPCION VALIDA.";
            sleep(1);

            break;

    }
}
//--------------------------------------------------------------------

