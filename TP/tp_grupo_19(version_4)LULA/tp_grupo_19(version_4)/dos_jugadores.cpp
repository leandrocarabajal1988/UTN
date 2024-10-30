#include "un_jugador.h"
#include "dos_jugadores.h"
#include "dados.h"
#include "conio.h"
#include <iostream>
#include "rlutil.h"
using namespace std;

int dos_jugadores(){

system("cls");
int dados_defensores=2;
int dados_restantes1=5;
int dados_restantes2=5;
int puntos_totales1=0;
int puntos_totales2=0;
int cont_rondas=0;
int mayor_puntaje1=0;
int mayor_puntaje2=0;
string nombre1;
string nombre2;
//-----------------------------------------INGRESO DE JUGARORES----------------------------------------
cout<<endl;
rlutil::locate (30,10);
cout<<"\t "<<"\t "<<"\t "<<"BIENVENIDOS JUGADORES!"<<endl<<endl;
rlutil::locate (30,11);
cout<<"\t"<<"jugador numero uno, Por favor dinos tu nombre?"<<endl<<endl;
rlutil::locate (30,12);
cin.ignore();
getline(cin, nombre1);
cout<< endl << endl;

cout<<"\t"<<"Ahora es el turno del jugador numero dos, como es tu nombre?"<<endl<<endl;
rlutil::locate (30,13);
getline(cin, nombre2);
cout<< endl << endl;
cout<<"\t \t"<<nombre1<<" y "<<nombre2<<" !!Les deseamos mucha suerte a ambos!!"<<endl;
rlutil::locate (30,14);
cout<< endl <<nombre1<<"  Tu vas a comenzar, cuando te sientas listo presiona cualquier tecla";
rlutil::locate (30,15);
getch();
system("cls");
cout<<endl;
//------------------------------------------ETAPA DADOS DEFENSORES-----------------------------------
cout<<"Lanzando dados defensores de "<<nombre1<<"....."<<endl;
rlutil::locate (30,16);
int vdefensa1[dados_defensores];
lanzar_Dados_Defensores(vdefensa1, dados_defensores, nombre1);

cout<< endl << endl;
cout<<"Ahora es tu turno "<<nombre2<<" Lanza tus dados defensores "<<endl;
rlutil::locate (30,17);
cout<<nombre2<<"  Cuando te sientas listo preciona cualquier tecla"<<endl;
rlutil::locate (30,18);
getch();
cout<<endl;
cout<<"Lanzando dados defensores de "<<nombre2<<"....."<<endl;
rlutil::locate (30,19);
int vdefensa2[dados_defensores];
lanzar_Dados_Defensores(vdefensa2, dados_defensores, nombre2);
cout<< endl << endl;

cout<<"\t \t"<< "Excelente!! Avancemos con las rondas de ataque y que gane el mejor!! "<<endl;
rlutil::locate (30,20);
cout<<" Si ta estan listos presionen cualquier tecla";
rlutil::locate (30,21);
getch();
//--------------------------------------ETAPA DADAOS ATACANTES JUGADOR UNO-----------------------------------
system("cls");

bool continuar1=1;
bool continuar2=1;
int duplicador;
do{
cont_rondas++;
do{
cout<<endl;
cout<<"======================= RONDA NUMERO "<<cont_rondas<<" ======================="<<endl<<endl;
rlutil::locate (30,22);
cout<<"========================= JUGADOR "<<nombre1<<"  ======================="<<endl<<endl;
rlutil::locate (30,23);


cout<<"lanzando los dados atacantes de "<<nombre1<<endl;
rlutil::locate (30,24);
int vataque1[dados_restantes1];
vtirada_atacantes(vataque1, dados_restantes1);
cout<<endl;

/////////////////////////////////////////////////////////////////////////////////
//-------------------------------------ETAPA DE ELIMINACION DE DADOS JUGADOR UNO---------------------------------
cout<<endl;
cout<<"-------------------RESULTADOS DE ATAQUE Y DEFENSA!----------------"<<endl;
cout<<"DADOS DEFENSORES "<<vdefensa1[0]<<"  "<<vdefensa1[1]<<endl;
cout<<"DADOS ATACANTES  ";
for (int i=0; i<dados_restantes1; i++){
    cout<<vataque1[i]<<"  ";
}
cout<<endl;

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

dados_restantes1-=cont_dado_eliminado1;
puntos_totales1+=puntos_ronda1;

if(puntos_ronda1>mayor_puntaje1){
    mayor_puntaje1=puntos_ronda1;
}
if(duplicador==2){
        cout<<"Tuviste suerte, duplicaste los puntos de la ronda!!"<<endl;
}
cout<<endl;
cout<<"--------------ESTE ES EL RESULTADO DE LA BATALLA--------------"<<endl;
for(int i=0; i<(dados_restantes1+cont_dado_eliminado1); i++){
cout<<vdados_vivos1[i]<<"  ";
}
cout<< endl<<endl;
cout<<"Dados perdidos en la batalla "<<cont_dado_eliminado1<<endl;

animo_vs(cont_dado_eliminado1, cont_rondas, dados_restantes1, puntos_totales1, puntos_totales2, nombre1);

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
            cout<<" 1-Seguir otra ronda, 0-Abandonar partida!"<<endl;
            cin>>continuar1;
            cout<<endl;
            system("cls");
        }
}
else{
    continuar1=0;
}
cout<<duplicador;
system("pause");
}
while(duplicador==2);
/////////////////////////////////////////////////////////////////////////////////
//-------------------------------------ETAPA DE ELIMINACION DE DADOS JUGADOR DOS---------------------------------
cout<<endl;
do{
cout<<"======================= RONDA NUMERO "<<cont_rondas<<" ======================="<<endl<<endl;
cout<<"========================= JUGADOR "<<nombre2<<"  ======================="<<endl<<endl;



cout<<"lanzando los dados atacantes de "<<nombre2<<endl;
int vataque2[dados_restantes2];
vtirada_atacantes(vataque2, dados_restantes2);
cout<<endl;
cout<<endl;
cout<<"-------------------RESULTADOS DE ATAQUE Y DEFENSA!----------------"<<endl;
cout<<"DADOS DEFENSORES "<<vdefensa2[0]<<"  "<<vdefensa2[1]<<endl;
cout<<"DADOS ATACANTES  ";
for (int i=0; i<dados_restantes2; i++){
    cout<<vataque2[i]<<"  ";
}
cout<<endl;

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

dados_restantes2-=cont_dado_eliminado2;
puntos_totales2+=puntos_ronda2;
if(puntos_ronda2>mayor_puntaje2){
    mayor_puntaje2=puntos_ronda2;
}
if(duplicador==2){
    cout<<"Tuviste suerte, duplicaste los puntos de la ronda!!"<<endl;
}
cout<<endl;
cout<<"--------------ESTE ES EL RESULTADO DE LA BATALLA--------------"<<endl;
cout<<"                 ";
for(int i=0; i<(dados_restantes2+cont_dado_eliminado2); i++){
    cout<<vdados_vivos2[i]<<"  ";
}
cout<< endl<<endl;
cout<<"Dados perdidos en la batalla "<<cont_dado_eliminado2<<endl;

animo_vs(cont_dado_eliminado2, cont_rondas, dados_restantes2, puntos_totales1, puntos_totales2, nombre2);
cout<<endl<<endl;

cout<<"tus puntos en esta ronda son: " <<puntos_ronda2<<endl<<"puntos totales "<<puntos_totales2<<endl;;
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
            cout<<" 1-Seguir otra ronda, 0-Abandonar partida!"<<endl;
            cin>>continuar2;
            cout<<endl;
            system("cls");
        }
}
else{
    continuar2=0;
    system("pause");
}
cout<<duplicador;
system("pause");
}
while(duplicador==2);
}
while((dados_restantes1>0) && (continuar1) && (dados_restantes2>0) && (continuar2));
system("cls");
cout<<endl;

cout<<"\t \t LAS RONDAS DE BATALLAS HAN FINALIZADO!"<<endl;
if (puntos_totales1==puntos_totales2){
    cout<< endl;
    cout<<"\t \t NO PUEDO CREER LO QUE VEN MIS OJOS!! ES UN EMPATE!!"<<endl;
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
