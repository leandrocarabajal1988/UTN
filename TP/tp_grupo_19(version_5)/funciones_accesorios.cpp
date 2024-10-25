#include "un_jugador.h"
#include "dos_jugadores.h"
#include "dados.h"
#include "conio.h"
#include <iostream>
#include <unistd.h>

using namespace std;


//------------------------- FUNCION PUNTOS SUSPENSIVO ----------------------------------
void puntos_suspensivos(string texto, int cantidad, int segundos){

    for(int i=1; i<=cantidad; i++){
        cout<<texto;
        sleep(segundos);
    }
}
//------------------------------ FUNCION PENSANDO -------------------------------------------

void pensando(int tiempo){

    for(int i=1; i<=tiempo; i++){
        cout<<"/";
        sleep(1);
        cout<<"\b";
        cout<<"-";
        sleep(1);
        cout<<"\b";
        cout<<"|";
        sleep(1);
        cout<<"\b";
    }
}

