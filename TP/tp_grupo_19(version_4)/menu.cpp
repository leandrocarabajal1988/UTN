//aca van las funciones del menu

#include "menu.h"
#include "un_jugador.h"
#include "dos_jugadores.h"
#include <iostream>
using namespace std;
//----------------------------------------------------------------------
int seleccionar_Opcion(){
    int opcion;

    cout<<"******************************"<<endl;
    cout<<"*           GREED            *"<<endl;
    cout<<"******************************"<<endl;
    cout<<endl<<endl;
    cout<<"menu del juego"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"1-modo un jugador"<<endl;
    cout<<"2-modo dos jugadores"<<endl;
    cout<<"3-estadisticas"<<endl;
    cout<<"4-creditos"<<endl;
    cout<<"0-salir"<<endl;
    cout<<"-----------------------"<<endl;
    cin>>opcion;

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

            break;
        case 0:
            cout<<endl<<"GRACIAS POR JUGAR CON NOSOTROS"<<endl;
            break;

    }
}
//--------------------------------------------------------------------

