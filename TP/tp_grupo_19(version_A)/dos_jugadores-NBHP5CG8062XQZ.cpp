#include "un_jugador.h"
#include "dos_jugadores.h"
#include "dados.h"
#include "conio.h"
#include "rlutil.h"
#include <iostream>
#include "funciones_accesorios.h"

using namespace std;

int dos_jugadores(){

system("color C0");// le cambia el color de fondo y el de la letra
system("title GREED: MODO DOS JUGADORES");
system("cls");
int dados_defensores=2;
int dados_restantes1;
int dados_restantes2;
int puntos_totales1=0;
int puntos_totales2=0;
int cont_tirada1=0;
int cont_tirada2=0;
int cont_rondas=0;
int mayor_puntaje1=0;
int mayor_puntaje2=0;
string nombre1;
string nombre2;
//-----------------------------------------INGRESO DE JUGARORES----------------------------------------
plantilla (cont_rondas, "jugador misterioso", cont_rondas);
rlutil::locate(110, 12);
rlutil::setColor(rlutil::GREY);
cout<<"BIENVENIDOS JUGADORES!";
rlutil::locate(110, 14);
cout<<"jugador numero uno, Por favor..";
rlutil::locate(110, 16);
cout<< "dinos cual es tu nombre?";
rlutil::setColor(rlutil::BLUE);
rlutil::locate(110, 18);
cin.ignore();
getline(cin, nombre1);
rlutil::locate(110, 20);
rlutil::setColor(rlutil::GREY);
cout<<"Ahora es el turno del oponente";
rlutil::locate(110, 22);
cout<< "como es tu nombre?";
rlutil::locate(110, 24);
rlutil::setColor(rlutil::RED);
getline(cin, nombre2);
rlutil::locate(110, 26);
rlutil::setColor(rlutil::GREY);
cout<<nombre1<<" y "<<nombre2<<" SUERTE!!";
rlutil::locate(110, 28);
cout<<nombre1<<"  Tu vas a comenzar.";
rlutil::locate(110, 30);
cout<<"acomoda tu armadura";
rlutil::locate(110, 32);
cout<<"y preciona una tecla";
rlutil::anykey();

system("cls");
//------------------------------------------ETAPA DADOS DEFENSORES-----------------------------------
plantilla (cont_rondas, nombre1, cont_tirada1);

int vdefensa1[dados_defensores];

lanzar_Dados_Defensores(vdefensa1, dados_defensores, nombre1, 45, 12);
//borra pantalla.
plantilla (cont_rondas, nombre1, cont_tirada1);

    tirar_dados_sin_sombra(9, 24, dados_defensores, vdefensa1);

rlutil::locate(110, 12);
rlutil::setColor(rlutil::GREY);
cout<<"Ahora es tu turno "<<nombre2;
rlutil::locate(110, 14);
cout<<"Lanza tus dados defensores ";
rlutil::locate(110, 16);
cout<<"Toma tus dados y...";
rlutil::locate(110, 18);
cout<<"preciona cualquier tecla";
rlutil::anykey();

plantilla (cont_rondas, nombre2, cont_tirada2);
int vdefensa2[dados_defensores];

lanzar_Dados_Defensores(vdefensa2, dados_defensores, nombre2, 45, 12);//borra pantalla.

plantilla (cont_rondas, nombre2, cont_tirada2);

    tirar_dados_sin_sombra(9, 24, dados_defensores, vdefensa2);

rlutil::locate(110, 12);
rlutil::setColor(rlutil::GREY);
cout<<"EXCELENTE AMBOS!!";
rlutil::locate(110, 14);
cout<< "Avancemos con las ataques";
rlutil::locate(110, 16);
cout<< " y que gane el mejor!! ";
rlutil::locate(110, 18);
cout<<nombre1;
rlutil::locate(110, 20);
cout<< " presionen cualquier tecla";
rlutil::anykey();

//--------------------------------------ETAPA DADAOS ATACANTES JUGADOR UNO-----------------------------------
system("cls");

do{
cont_rondas++;
dados_restantes1=5;
dados_restantes2=5;
bool continuar1=1;
bool continuar2=1;
int duplicador;
do{//para jugador 1
    cont_tirada1++;
plantilla (cont_rondas, nombre1, cont_tirada1);

    tirar_dados_sin_sombra(9, 24, dados_defensores, vdefensa1);

int vataque1[dados_restantes1];
    lanzar_Dados_Atacantes(vataque1, dados_restantes1, nombre1,45 , 15);//borra la pantalla

plantilla (cont_rondas, nombre1, cont_tirada1);

    tirar_dados_sin_sombra(9, 24, dados_defensores, vdefensa1);
    tirar_dados_sin_sombra(40, 13, dados_restantes1, vataque1);

rlutil::locate(110, 12);
rlutil::setColor(rlutil::GREY);
cout<<"veamos los resultados,";
rlutil::locate(110, 14);
cout<<" presiona una tecla";
rlutil::anykey();
rlutil::setColor(rlutil::BLACK);
int cont_dado_eliminado1=0;
int puntos_ronda1=0;
int vdados_vivos1[dados_restantes1]{};


eliminar_dado(dados_defensores, dados_restantes1, vdefensa1, vataque1, vdados_vivos1);

for(int i=0; i<dados_restantes1; i++){
    if(vdados_vivos1[i]==0){
        cont_dado_eliminado1++;
    }
    else{
        duplicador=doble_puntos(vdados_vivos1, cont_dado_eliminado1, dados_restantes1);
        puntos_ronda1+=(vdados_vivos1[i]*duplicador);
    }
}

tirar_dados_sin_sombra(40, 33, dados_restantes1, vdados_vivos1);

dados_restantes1-=cont_dado_eliminado1;
if(dados_restantes1>0){
    puntos_totales1+=puntos_ronda1;
}

if(puntos_ronda1>mayor_puntaje1){
    mayor_puntaje1=puntos_ronda1;
}
if(duplicador==2){
        rlutil::locate(45, 10);
        cout<<"Tuviste suerte, duplicaste los puntos de la ronda!!"<<endl;
}
rlutil::locate(110, 12);
rlutil::setColor(rlutil::GREY);
cout<<"RESULTADO DE LA BATALLA"<<endl;
rlutil::locate(110, 14);
cout<<"Dados perdidos: "<<cont_dado_eliminado1<<"      ";
rlutil::setColor(rlutil::BLACK);
rlutil::locate(110, 4);
animo_vs(cont_dado_eliminado1, cont_tirada1, dados_restantes1, puntos_totales1, puntos_totales2, nombre1);

rlutil::locate(110, 18);
rlutil::setColor(rlutil::GREY);
cout<<"Puntos de ronda son: " <<puntos_ronda1;
rlutil::locate(110, 20);
cout<<"Puntos totales: "<<puntos_totales1;
rlutil::locate(110, 22);
cout<<"Dados restantes: "<<dados_restantes1;
rlutil::setColor(rlutil::BLACK);
cout<<endl;
if (dados_restantes1>0){
        if(duplicador==2){
            rlutil::locate(110, 28);
            rlutil::setColor(rlutil::RED);
            cout<<"Bonus por duplicar!";
            rlutil::locate(110, 30);
            cout<<"Mucha Suerte!!";
            rlutil::setColor(rlutil::BLACK);
            continuar1=1;
            rlutil::locate(110, 32);
            rlutil::setColor(rlutil::GREY);
            cout<<"presiona una tecla";
            rlutil::anykey();
            rlutil::setColor(rlutil::BLACK);
            system("cls");

        }
        else{
            rlutil::locate(110, 28);
            rlutil::setColor(rlutil::GREY);
            cout<<"Deseas seguir?"<<endl;
            rlutil::locate(110, 30);
            cout<<" 1-Seguir otra ronda.";
            rlutil::locate(110, 32);
            cout<<" 0-Abandonar partida!";
            cin>>continuar1;
            rlutil::setColor(rlutil::BLACK);
            cout<<endl;
            system("cls");
        }
}
else{
    continuar1=0;
    cont_tirada1=0;
    system("pause");
    system("cls");
}
}
while((duplicador==2) || ((continuar1==1) && (dados_restantes1>0)));
/////////////////////////////////////////////////////////////////////////////////
//-------------------------------------ETAPA DE ELIMINACION DE DADOS JUGADOR DOS---------------------------------

do{//para jugador 2
    cont_tirada2++;
plantilla (cont_rondas, nombre2, cont_tirada2);

    tirar_dados_sin_sombra(9, 24, dados_defensores, vdefensa2);

int vataque2[dados_restantes2];
    lanzar_Dados_Atacantes(vataque2, dados_restantes2, nombre2,45 , 15);//borra la pantalla

plantilla (cont_rondas, nombre2, cont_tirada2);

    tirar_dados_sin_sombra(9, 24, dados_defensores, vdefensa2);
    tirar_dados_sin_sombra(40, 13, dados_restantes2, vataque2);

rlutil::locate(110, 12);
rlutil::setColor(rlutil::GREY);
cout<<"veamos los resultados,";
rlutil::locate(110, 14);
cout<<" presiona una tecla";
rlutil::anykey();
rlutil::setColor(rlutil::BLACK);
int cont_dado_eliminado2=0;
int puntos_ronda2=0;
int vdados_vivos2[dados_restantes2]{};


eliminar_dado(dados_defensores, dados_restantes2, vdefensa2, vataque2, vdados_vivos2);

for(int i=0; i<dados_restantes2; i++){
    if(vdados_vivos2[i]==0){
        cont_dado_eliminado2++;
    }
    else{
        duplicador=doble_puntos(vdados_vivos2, cont_dado_eliminado2, dados_restantes2);
        puntos_ronda2+=(vdados_vivos2[i]*duplicador);
    }
}

tirar_dados_sin_sombra(40, 33, dados_restantes2, vdados_vivos2);

dados_restantes2-=cont_dado_eliminado2;
if(dados_restantes2>0){
    puntos_totales2+=puntos_ronda2;
}

if(puntos_ronda2>mayor_puntaje2){
    mayor_puntaje2=puntos_ronda2;
}
if(duplicador==2){
        rlutil::locate(45, 10);
        cout<<"Tuviste suerte, duplicaste los puntos de la ronda!!"<<endl;
}
rlutil::locate(110, 12);
rlutil::setColor(rlutil::GREY);
cout<<"RESULTADO DE LA BATALLA"<<endl;
rlutil::locate(110, 14);
cout<<"Dados perdidos: "<<cont_dado_eliminado2<<"      ";
rlutil::setColor(rlutil::BLACK);
rlutil::locate(110, 4);
animo_vs(cont_dado_eliminado2, cont_tirada2, dados_restantes2, puntos_totales1, puntos_totales2, nombre2);

rlutil::locate(110, 18);
rlutil::setColor(rlutil::GREY);
cout<<"Puntos de ronda son: " <<puntos_ronda2;
rlutil::locate(110, 20);
cout<<"Puntos totales: "<<puntos_totales2;
rlutil::locate(110, 22);
cout<<"Dados restantes: "<<dados_restantes2;
rlutil::setColor(rlutil::BLACK);
cout<<endl;
if (dados_restantes2>0){
        if(duplicador==2){
            rlutil::locate(110, 28);
            rlutil::setColor(rlutil::RED);
            cout<<"Bonus por duplicar!";
            rlutil::locate(110, 30);
            cout<<"Mucha Suerte!!";
            rlutil::setColor(rlutil::BLACK);
            continuar2=1;
            rlutil::locate(110, 32);
            rlutil::setColor(rlutil::GREY);
            cout<<"presiona una tecla";
            rlutil::anykey();
            rlutil::setColor(rlutil::BLACK);
            system("cls");

        }
        else{
            rlutil::locate(110, 28);
            rlutil::setColor(rlutil::GREY);
            cout<<"Deseas seguir?"<<endl;
            rlutil::locate(110, 30);
            cout<<" 1-Seguir otra ronda.";
            rlutil::locate(110, 32);
            cout<<" 0-Abandonar partida!";
            cin>>continuar2;
            rlutil::setColor(rlutil::BLACK);
            cout<<endl;
            system("cls");
        }
}
else{
    continuar2=0;
    cont_tirada2=0;
    system("pause");
    system("cls");
}
}
while((duplicador==2) || ((continuar1==1) && (dados_restantes1>0)));
}
while(cont_rondas<2);////////// MODIFICAR ESTO A 5 RONDAS AL FINALIZAR EL TP

system("cls");
cout<<endl;
plantilla (cont_rondas, "FINALES", cont_rondas);
rlutil::locate(40, 11);
cout<<"LAS RONDAS DE BATALLAS HAN FINALIZADO!";
if (puntos_totales1==puntos_totales2){
    rlutil::locate(40, 13);
    cout<<"ES UN EMPATE!!";
    rlutil::locate(40, 15);
    cout<<"Tenemos dos campeones!!"<<nombre1<<", "<<nombre2<<" avancen al podio para ver sus resultados"<<endl;
}
else if( puntos_totales1>puntos_totales2){
    rlutil::locate(40, 13);
    cout<<"Tenemos un ganador! "<<nombre1<<" felicidades, fuiste el vencedor!"<<endl;
    rlutil::locate(40, 15);
    cout<<" veamos los reslutados finales"<<endl;
}
else {
    rlutil::locate(40, 13);
    cout<<"Y tenemos un ganador! "<<nombre2<<" felicidades, fuiste el vencedor!"<<endl;
    rlutil::locate(40, 15);
    cout<<" veamos los reslutados finales"<<endl;
}
rlutil::locate(40, 18);
cout<<" Rondas totales "<<cont_rondas<<endl<<endl;
rlutil::locate(40, 20);
cout<<" Los puntos obtenidos por "<<nombre1<<" fueron "<<puntos_totales1<<endl<<endl;
rlutil::locate(40, 22);
cout<<" Mayor puntaje en una ronda "<<mayor_puntaje1<<endl<<endl;
rlutil::locate(40, 24);
cout<<" Los puntos obtenidos por "<<nombre2<<" fueron "<<puntos_totales2<<endl<<endl;
rlutil::locate(40, 26);
cout<<" Mayor puntaje en una ronda "<<mayor_puntaje2<<endl<<endl;
rlutil::locate(40, 28);
cout<<"========================================================"<<endl;
rlutil::locate(40, 29);
cout<<"         MUCHAS GRACIAS POR JUGAR CON NOSOTROS :)"<<endl;
rlutil::locate(40, 30);
cout<<"========================================================"<<endl;

rlutil::locate(40, 32);
cout<<"Para volver al menu principal presiona cualquier tecla";
getch();
}


//------------------------------------FUNSION ANIMO VERSUS---------------------------------
// la idea es comentar en funcion de la diferencia de puntos
void animo_vs (int cont_dado_eliminado, int cont_rondas, int dados_restantes, int puntos_totales1, int puntos_totales2, string nombre){

int ganando=0;
if (puntos_totales1==puntos_totales2){
    //van empatando
}
else if(puntos_totales1>puntos_totales2){
    //va ganando el jugador 1
    ganando=1;
}
else{
    //va ganando el jugador 2
    ganando=2;
}

if(dados_restantes>0){
    switch(cont_dado_eliminado)
    {
        rlutil::locate(40, 36);
        case 0:
            switch(cont_rondas){
            case 1:cout<<"Execelte comienzo!! "<< nombre;
                break;
            case 2:cout<<" ";
                break;
            case 3:cout<<" ";
                break;
            case 4:cout<<" ";
                break;
            case 7:cout<<" ";
                break;
            case 10:cout<<" ";
                break;
            default:cout<<" ";
                break;
            }
            break;
        case 1:
            switch(cont_rondas){
            case 1:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
                break;
            case 2:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 3:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 5:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 10:cout<<"Estas en modo dios?!!";
                break;
            default:cout<<"ufff!!";
                break;
            }
            break;
        case 2:
        switch(cont_rondas){
            case 1:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 2:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 3:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 5:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 10:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            default:cout<<"........ohhhh!!";
            break;
            }
            break;
        case 3:
        switch(cont_rondas){
            case 1:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 2:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 3:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            default:cout<<"lo siento :(";
            break;
            }
            break;
        case 4:
        switch(cont_rondas){
            case 1:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 2:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 3:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            default:cout<<"lo siento :(";
            break;
            }
            break;
        case 5:
        switch(cont_rondas){
            case 1:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 2:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 3:
                switch(ganando){
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            default:cout<<" recorrimos un largo camino";
            break;
            }
            break;
        default:cout<<"ya llegamos muy lejos";
            break;
}
}
else{
    switch(cont_rondas)
    {
        case 3:
            cout<<endl<<"......."<<endl;
            cout<<" Emm...bueno...quien tiene hambre? :)";
            break;
        case 5:
            cout<<endl<<"......."<<endl;
            cout<<"Como dijo mi ex....hasta aca llegamos :)";
            break;
        case 7:
            cout<<endl<<"......."<<endl;
            cout<<"YOU LOSE!";
            break;
        case 9:
            cout<<endl<<"......."<<endl;
            cout<<" Casi casi, lo siento :(";
            break;
        default:
            cout<<endl<<"......."<<endl;
            cout<<"Uy...perdimos......";
            break;
}
}
}
