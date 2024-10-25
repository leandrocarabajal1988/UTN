#include "un_jugador.h"
#include "dos_jugadores.h"
#include "dados.h"
#include "conio.h"
#include "rlutil.h"
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

//------------------------------FUNSION LETRA A LETRA------------------------------------
void texto_letras(string text, int delay){
    for (char c: text) {
        cout << c ;
        usleep(delay); // Retraso en milisegundos
    }
}

//-----------------------------------MOVIMIENTO CURSOR---------------------------------------
void mover_cursor (int x, int y){
    rlutil::locate(x, y);

}

//--------------------------------- FUNCION ARMAR CUADRADOS----------------------------------
void armar_cuadro (int xinicial, int yinicial, int ancho, int largo, string color, string color_fondo){
rlutil::setColor(rlutil::BLACK);
rlutil::setBackgroundColor(rlutil::LIGHTRED);

//vertice inicial
rlutil::locate(xinicial, yinicial);
    cout<< (char) 220;
    for ( int i=1; i <largo; i++){
        rlutil::locate(xinicial, yinicial+i);
        cout<< (char) 219;
    }

//vertice final
rlutil::locate((xinicial+ancho), yinicial);
    cout<< (char) 220;
    for ( int i=1; i <largo; i++){
        rlutil::locate((xinicial+ancho), yinicial+i);
        cout<< (char) 219;
    }

//vertice inicial inferior
rlutil::locate(xinicial, (yinicial+largo));
    cout<< (char) 223;
    for ( int i=1; i <ancho; i++){
        rlutil::locate((xinicial+i), yinicial);
        cout<< (char) 220;
    }

//vertice final inferior
rlutil::locate((xinicial+ancho), (yinicial+largo));
    cout<< (char) 223;
    for ( int i=1; i <ancho; i++){
        rlutil::locate((xinicial+i), (yinicial+largo));
        cout<< (char) 223;
    }

}

//--------------------------------- FUNCION ARMAR CUADRADOS DOBLE LINEA----------------------------------
void armar_cuadro_doble (int xinicial, int yinicial, int ancho, int largo, string color, string color_fondo){
rlutil::setColor(rlutil::BLACK);
rlutil::setBackgroundColor(rlutil::LIGHTRED);

//vertice inicial
rlutil::locate(xinicial, yinicial);
    cout<< (char) 201;
    for ( int i=1; i <largo; i++){
        rlutil::locate(xinicial, yinicial+i);
        cout<< (char) 186;
    }

//vertice final
rlutil::locate((xinicial+ancho), yinicial);
    cout<< (char) 187;
    for ( int i=1; i <largo; i++){
        rlutil::locate((xinicial+ancho), yinicial+i);
        cout<< (char) 186;
    }

//vertice inicial inferior
rlutil::locate(xinicial, (yinicial+largo));
    cout<< (char) 200;
    for ( int i=1; i <ancho; i++){
        rlutil::locate((xinicial+i), yinicial);
        cout<< (char) 205;
    }

//vertice final inferior
rlutil::locate((xinicial+ancho), (yinicial+largo));
    cout<< (char) 188;
    for ( int i=1; i <ancho; i++){
        rlutil::locate((xinicial+i), (yinicial+largo));
        cout<< (char) 205;
    }

}
////-------------------------
void plantilla (int ronda_numero, string nombre, int tirada_numero){

armar_cuadro(3, 2, 30, 6, "BLACK", "GREY");
armar_cuadro_doble(35, 2, 70, 2, "BLACK", "GREY");
armar_cuadro_doble(35, 6, 70, 2, "BLACK", "GREY");

rlutil::locate(11, 5);
cout<<"RONDA NUMERO "<<ronda_numero;
rlutil::locate(64, 3);
cout<<"JUGADOR "<<nombre;
rlutil::locate(64, 7);
cout<<"TIRADA NUMERO"<<tirada_numero;

//cuadro dados defensores
armar_cuadro(3, 9, 30, 10, "BLACK", "GREY");
rlutil::locate(9, 11);
cout<<" DADOS DEFENSORES ";

//cuadro dados DE ATAQUE
armar_cuadro(3, 20, 30, 10, "BLACK", "GREY");
rlutil::locate(9, 23);
cout<<" DADOS DE ATAQUE ";

//cuadro dados DE RESULTADOS
armar_cuadro(3, 31, 30, 6, "BLACK", "GREY");
rlutil::locate(12,34);
cout<<"RESULTADOS ";
}
