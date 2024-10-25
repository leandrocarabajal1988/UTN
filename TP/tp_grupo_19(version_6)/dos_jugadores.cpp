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
cout<<endl;
cout<<"\t "<<"\t "<<"\t "<<"BIENVENIDOS JUGADORES!"<<endl<<endl;
cout<<"\t"<<"jugador numero uno, Por favor dinos tu nombre?"<<endl<<endl;
cin.ignore();
getline(cin, nombre1);
cout<< endl << endl;

cout<<"\t"<<"Ahora es el turno del jugador numero dos, como es tu nombre?"<<endl<<endl;
getline(cin, nombre2);
cout<< endl << endl;
cout<<"\t \t"<<nombre1<<" y "<<nombre2<<" !!Les deseamos mucha suerte a ambos!!"<<endl;
cout<< endl <<nombre1<<"  Tu vas a comenzar, cuando te sientas listo preciona cualquier tecla";
rlutil::anykey();

system("cls");
//------------------------------------------ETAPA DADOS DEFENSORES-----------------------------------
rlutil::locate(2, 2);

int vdefensa1[dados_defensores];
sleep(1);
lanzar_Dados_Defensores(vdefensa1, dados_defensores, nombre1, 45, 12);
//borra pantalla.

rlutil::locate(2, 7);

cout<<" DADOS DEFENSORES "<< endl;
cout<< "  "<< nombre1;
    tirar_dados_sin_sombra(21, 6, dados_defensores, vdefensa1);

rlutil::locate(2, 11);
cout<< endl << endl;
cout<<"Ahora es tu turno "<<nombre2<<" Lanza tus dados defensores "<<endl;
cout<<endl<<nombre2<<"  Cuando te sientas listo preciona cualquier tecla"<<endl;
rlutil::anykey();
cout<<endl;

int vdefensa2[dados_defensores];
sleep(1);
rlutil::locate(2, 4);
lanzar_Dados_Defensores(vdefensa2, dados_defensores, nombre2, 12, 17);
//borra pantalla.

rlutil::locate(2, 7);

cout<<" DADOS DEFENSORES "<< endl;
cout<< "  "<< nombre1;
    tirar_dados_sin_sombra(21, 6, dados_defensores, vdefensa1);

rlutil::locate(2, 15);

cout<<" DADOS DEFENSORES "<< endl;
cout<< "  "<< nombre2;
tirar_dados_sin_sombra(21, 14, dados_defensores, vdefensa2);

rlutil::locate(2, 20);
cout<<"\t \t"<< "Excelente!! Avancemos con las rondas de ataque y que gane el mejor!! "<<endl;
cout<<" Si ta estan listos presionen cualquier tecla";
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
cout<<endl;
cout<<"======================= RONDA NUMERO "<<cont_rondas<<" ======================="<<endl<<endl;
cout<<"========================= JUGADOR "<<nombre1<<"  ======================="<<endl;
cout<<"======================= TIRADA NUMERO "<<cont_tirada1<<" ======================="<<endl<<endl;

    int vataque1[dados_restantes1];
    lanzar_Dados_Atacantes(vataque1, dados_restantes1, nombre1,12 , 17);

//borra la pantalla
cout<<endl;
cout<<"======================= RONDA NUMERO "<<cont_rondas<<" ======================="<<endl<<endl;
cout<<"========================= JUGADOR "<<nombre1<<"  ======================="<<endl;
cout<<"======================= TIRADA NUMERO "<<cont_tirada1<<" ======================="<<endl<<endl;
    rlutil::locate(2, 8);

cout<<" DADOS DEFENSORES "<< endl;
cout<< "  "<< nombre1;
    tirar_dados_sin_sombra(21, 7, dados_defensores, vdefensa1);

rlutil::locate(2, 13);
cout<<" DADOS ATACANTES  ";
    tirar_dados_sin_sombra(21, 11, dados_restantes1, vataque1);

rlutil::locate(2, 18);
cout<<" DADOS RESTANTES" ;
sleep(1);

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

tirar_dados_sin_sombra(21, 17, dados_restantes1, vdados_vivos1);

dados_restantes1-=cont_dado_eliminado1;
if(dados_restantes1>0){
    puntos_totales1+=puntos_ronda1;
}

if(puntos_ronda1>mayor_puntaje1){
    mayor_puntaje1=puntos_ronda1;
}
if(duplicador==2){
        cout<<"Tuviste suerte, duplicaste los puntos de la ronda!!"<<endl;
}
rlutil::locate(2, 22);
cout<<"--------------ESTE ES EL RESULTADO DE LA BATALLA--------------"<<endl;

cout<< endl<<endl;
cout<<"Dados perdidos en la batalla "<<cont_dado_eliminado1<<endl;

animo_vs(cont_dado_eliminado1, cont_tirada1, dados_restantes1, puntos_totales1, puntos_totales2, nombre1);

cout<<endl<<endl;
cout<<"tus puntos en esta ronda son: " <<puntos_ronda1<<endl<<"puntos totales "<<puntos_totales1<<endl;
cout<<"te restan "<<dados_restantes1<<" dados para seguir jugando...."<<endl<<endl<<"\t \t";
cout<<endl;
if (dados_restantes1>0){
        if(duplicador==2){
            cout<<"Como duplicamos estamos obligados a volver a jugar, suerte!" <<endl;
            continuar1=1;
            cout<<endl;
            system("pause");
            system("cls");

        }
        else{
            cout<<"\t\t Deseas seguir?"<<endl;
            cout<<" 1-Volver a tirar, 0-Abandonar tirada!"<<endl;
            cin>>continuar1;
            if(continuar1==0){
                cont_tirada1=0;
            }
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
cout<<endl;
do{//para jugador 2
    cont_tirada2++;
cout<<endl;
cout<<"======================= RONDA NUMERO "<<cont_rondas<<" ======================="<<endl<<endl;
cout<<"========================= JUGADOR "<<nombre2<<"  ======================="<<endl;
cout<<"======================= TIRADA NUMERO "<<cont_tirada2<<" ======================="<<endl<<endl;

    int vataque2[dados_restantes2];
    lanzar_Dados_Atacantes(vataque2, dados_restantes2, nombre2, 15, 9);

//borra la pantalla
cout<<endl;
cout<<"======================= RONDA NUMERO "<<cont_rondas<<" ======================="<<endl<<endl;
cout<<"========================= JUGADOR "<<nombre2<<"  ======================="<<endl;
cout<<"======================= TIRADA NUMERO "<<cont_tirada2<<" ======================="<<endl<<endl;
    rlutil::locate(2, 8);

cout<<" DADOS DEFENSORES "<< endl;
cout<< "  "<< nombre2;
    tirar_dados_sin_sombra(21, 7, dados_defensores, vdefensa2);

rlutil::locate(2, 13);
cout<<" DADOS ATACANTES  ";
    tirar_dados_sin_sombra(21, 11, dados_restantes2, vataque2);

rlutil::locate(2, 18);
cout<<" DADOS RESTANTES" ;
sleep(1);

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

tirar_dados_sin_sombra(21, 17, dados_restantes2, vdados_vivos2);

dados_restantes2-=cont_dado_eliminado2;
if(dados_restantes2>0){
    puntos_totales2+=puntos_ronda2;
}

if(puntos_ronda2>mayor_puntaje2){
    mayor_puntaje2=puntos_ronda2;
}
if(duplicador==2){
        cout<<"Tuviste suerte, duplicaste los puntos de la ronda!!"<<endl;
}
rlutil::locate(2, 22);
cout<<"--------------ESTE ES EL RESULTADO DE LA BATALLA--------------"<<endl;

cout<< endl<<endl;
cout<<"Dados perdidos en la batalla "<<cont_dado_eliminado2<<endl;

animo_vs(cont_dado_eliminado2, cont_tirada2, dados_restantes2, puntos_totales1, puntos_totales2, nombre2);

cout<<endl<<endl;
cout<<"tus puntos en esta ronda son: " <<puntos_ronda2<<endl<<"puntos totales "<<puntos_totales2<<endl;
cout<<"te restan "<<dados_restantes2<<" dados para seguir jugando...."<<endl<<endl<<"\t \t";
cout<<endl;
if (dados_restantes2>0){
        if(duplicador==2){
            cout<<"Como duplicamos estamos obligados a volver a jugar, suerte!" <<endl;
            continuar2=1;
            cout<<endl;
            system("pause");
            system("cls");

        }
        else{
            cout<<"\t\t Deseas seguir?"<<endl;
            cout<<" 1-Volver a tirar, 0-Abandonar tirada!"<<endl;
            cin>>continuar2;
            if(continuar2==0){
                cont_tirada2=0;
            }
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

cout<<"\t \t LAS RONDAS DE BATALLAS HAN FINALIZADO!"<<endl;
if (puntos_totales1==puntos_totales2){
    cout<< endl;
    cout<<"\t \t NO PUEDO CREER, ES UN EMPATE!!"<<endl;
    cout<<"\t \t Tenemos dos campeones!!"<<nombre1<<", "<<nombre2<<" avancen al podio para ver sus resultados"<<endl;
}
else if( puntos_totales1>puntos_totales2){
    cout<< endl;
    cout<<"\t \t Y tenemos un ganador! "<<nombre1<<" felicidades, fuiste el vencedor!"<<endl;
    cout<<" veamos los reslutados finales"<<endl;
}
else {
    cout<< endl;
    cout<<"\t \t Y tenemos un ganador! "<<nombre2<<" felicidades, fuiste el vencedor!"<<endl;
    cout<<" veamos los reslutados finales"<<endl;
}
cout<<" Rondas totales "<<cont_rondas<<endl<<endl;
cout<<" Los puntos obtenidos por "<<nombre1<<" fueron "<<puntos_totales1<<endl<<endl;
cout<<" Mayor puntaje en una ronda "<<mayor_puntaje1<<endl<<endl;
cout<<" Los puntos obtenidos por "<<nombre2<<" fueron "<<puntos_totales2<<endl<<endl;
cout<<" Mayor puntaje en una ronda "<<mayor_puntaje2<<endl<<endl;
cout<<endl;
cout<<"========================================================================================="<<endl;
cout<<"                            MUCHAS GRACIAS POR JUGAR CON NOSOTROS :)"<<endl;
cout<<"========================================================================================="<<endl;
cout<<"Para volver al menu principal y tomar revancha presiona cualquier tecla";
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
