//aca van las funciones del menu

#include "menu.h"
#include "un_jugador.h"
#include "dos_jugadores.h"
#include <iostream>
#include "rlutil.h"
#include <cstdlib>


using namespace std;
//----------------------------------------------------------------------
int seleccionar_Opcion(){
int opc=-1,x=0;
rlutil :: hidecursor();
do {

  for (int i=0;i<10;i++){
    for (int i=0;i<1;i++){
    if (i%2==0){
        rlutil::setColor(rlutil::RED);
    }
    else{
        rlutil::setColor(rlutil::WHITE);
    }
    rlutil ::cls();
    rlutil :: locate(45,5);
    cout<<"******************************"<<endl;
    rlutil :: locate(45,6);
    cout<<"*           GREED            *"<<endl;
    rlutil :: locate(45,7);
    cout<<"******************************"<<endl;
    rlutil :: locate(45,8);
    cout<<endl<<endl;
    rlutil:: locate(50,9);
    cout<<"MENU DEL JUEGO"<<endl;
    rlutil :: locate(45,10);
    cout<<"-----------------------"<<endl;
    rlutil :: locate(50,11);
    cout<<"-MODO UN JUGADOR"<<endl;
    rlutil :: locate(50,12);
    cout<<"-MODO DOS JUGADORES"<<endl;
    rlutil :: locate(50,13);
    cout<<"-ESTADISTICAS"<<endl;
    rlutil :: locate(50,14);
    cout<<"-CREDITOS"<<endl;
    rlutil :: locate(50,15);
  cout<<"-SALIR"<<endl;
    rlutil :: locate(45,16);
    cout<<"-----------------------"<<endl;
    rlutil :: locate(50,17);
    rlutil::locate (48,11+x);
    cout<<(char)175;
    int key= rlutil::getkey ();

    switch(key){
 case 14: //UP
    if (x>0){
        x--;
    }
    else{
        x=4;
    }
     break;
 case 15://DOWN
    if (x<4){
      x++;
    }
    else{
        x=0;
    }
     break;
 case 1: //ENTER
     opc=x+1;
    break;
 }
  }
  }
  rlutil::msleep(450);
 } while (opc== -1);

// cout<<"key"<<key;


 return opc;
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

