#include "un_jugador.h"
#include "dos_jugadores.h"
#include "dados.h"
#include <iostream>

using namespace std;

void puntos_suspensivos(string texto, int cantidad){
    bool estado=1;
    int contar=0;
    int contar2=0;
    do{
        if(contar<40){

            system("color 1f");
            cout<< texto;
        if(contar>=40){
            system("cls");
            system("color 10");
            cout<< texto;
            contar=0;
            }
        }
    contar2++;
    if(contar2==(cantidad)){
        estado=0;
    }
    }while(estado);
}



