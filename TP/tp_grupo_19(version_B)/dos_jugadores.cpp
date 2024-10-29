#include "un_jugador.h"
#include "dos_jugadores.h"
#include "dados.h"
#include "conio.h"
#include "rlutil.h"
#include <iostream>
#include "funciones_accesorios.h"

using namespace std;

int dos_jugadores()
{

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
    plantilla (cont_rondas, "jugador misterioso 1", cont_tirada1, dados_restantes1, dados_defensores);

    rlutil::setColor(rlutil::GREY);
    rlutil::locate(108, 12);
    texto_letras("BIENVENIDOS JUGADORES!", 10000);
    rlutil::locate(108, 14);
    texto_letras("Primer lanzador", 1000);
    rlutil::locate(108, 16);
    texto_letras("Por favor dinos tu nombre", 10000);
    rlutil::locate(108, 18);
    rlutil::setColor(rlutil::BLUE);
    cout<< "Yo soy ";
    cin.ignore();
    getline(cin, nombre1);
    rlutil::setColor(rlutil::GREY);
    rlutil::locate(108, 20);
    texto_letras("Siguiente lanzador", 10000);
    rlutil::locate(108, 22);
    texto_letras("como te llamas?", 10000);
    rlutil::locate(108, 24);
    rlutil::setColor(rlutil::RED);
    cout<< "Mi nombre es ";
    getline(cin, nombre2);
    rlutil::locate(108, 26);
    rlutil::setColor(rlutil::GREY);
    texto_letras("Suerte a ambos!!", 10000);
    rlutil::locate(108, 28);
    cout<<nombre1;
    texto_letras(" vas a comenzar", 10000);
    rlutil::locate(108, 30);

    cout<<"Preciona cualquier tecla";
    rlutil::anykey();
    rlutil::setColor(rlutil::BLACK);
    system("cls");
//---------------------------------------LANZAMIENTO DE DADOS DEFENSIVOS jugador 1------------------------
    plantilla (cont_rondas, nombre1, cont_tirada1, dados_restantes1, dados_defensores);
    int vdefensa1[dados_defensores];
    lanzar_Dados_Defensores(vdefensa1, dados_defensores, nombre1, 45, 15);//borra pantalla.
    plantilla (cont_rondas, nombre1, cont_tirada1, dados_restantes1, dados_defensores);
    tirar_dados_sin_sombra(5, 26, dados_defensores, vdefensa1);
//----------------------------------------PANTALLA DE MENSAJE DE SISTEMA--------------------------
    borrar_mensajes_sistemas(),
    rlutil::setColor(rlutil::GREY);
    rlutil::locate(108, 12);
    texto_letras("Es tu turno ", 10000);
    cout<<nombre2;
    rlutil::locate(108, 14);
    texto_letras("Lanza tus dados defensores", 10000);
    rlutil::locate(108, 16);
    texto_letras("Presiona cualquier tecla", 10000);
    rlutil::anykey();
    rlutil::setColor(rlutil::BLACK);
    rlutil::cls();
//---------------------------------------LANZAMIENTO DE DADOS DEFENSIVOS jugador 2------------------------
    plantilla (cont_rondas, nombre2, cont_tirada2, dados_restantes2, dados_defensores);
    int vdefensa2[dados_defensores];
    lanzar_Dados_Defensores(vdefensa2, dados_defensores, nombre2, 45, 15);//borra pantalla.
    plantilla (cont_rondas, nombre2, cont_tirada2, dados_restantes2, dados_defensores);
    tirar_dados_sin_sombra(5, 26, dados_defensores, vdefensa2);
//----------------------------------------PANTALLA DE MENSAJE DE SISTEMA--------------------------
    borrar_mensajes_sistemas();
    rlutil::setColor(rlutil::GREY);
    rlutil::locate(108, 12);
    texto_letras("Excelente!!", 10000);
    rlutil::locate(108, 14);
    cout<<nombre1;
    texto_letras(" atacas primero", 10000);
    rlutil::locate(108, 16);
    cout<<"Presiona cualquier tecla";
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

        do //para jugador 1
        {
            cont_tirada1++;

            plantilla (cont_rondas, nombre1, cont_tirada1, dados_restantes1, dados_defensores);
            tirar_dados_sin_sombra(5, 26, dados_defensores, vdefensa1);
            int vataque1[dados_restantes1];
            lanzar_Dados_Atacantes(vataque1, dados_restantes1, nombre1, 40, 15);//borra la pantalla
          //---------------------(CADA VEZ QUE LANZO LOS DADOS LIMPIO LA PANTALLA)----------------
            plantilla (cont_rondas, nombre1, cont_tirada1, dados_restantes1, dados_defensores);
            tirar_dados_sin_sombra(40, 13, dados_restantes1, vataque1);

            int cont_dado_eliminado1=0;
            int puntos_ronda1=0;
            int vdados_vivos1[dados_restantes1] {};

            eliminar_dado(dados_defensores, dados_restantes1, vdefensa1, vataque1, vdados_vivos1);

            for(int i=0; i<dados_restantes1; i++)
            {
                if(vdados_vivos1[i]==0)
                {
                    cont_dado_eliminado1++;
                }
                else
                {
                    duplicador=doble_puntos(vdados_vivos1, cont_dado_eliminado1, dados_restantes1);
                    puntos_ronda1+=(vdados_vivos1[i]*duplicador);
                }
            }
             //-----------------------------BATALLA GRAFICA DE DADOS-----------------------------
            espadas_restantes(46, 9 , dados_restantes1);
            tirar_dados_sin_sombra(56, 25, dados_defensores, vdefensa1);
            escudos_restantes(60, 24, dados_defensores);
            tirar_dados_sin_sombra(40, 33, dados_restantes1, vdados_vivos1);

             //-----------------------PANTALLA DE MENSAJE DE SISTEMA--------------------------
            borrar_mensajes_sistemas();
            tirar_dados_sin_sombra(40, 33, dados_restantes1, vdados_vivos1);
            dados_restantes1-=cont_dado_eliminado1;

            if(dados_restantes1>0)
            {
                puntos_totales1+=puntos_ronda1;
            }

            if(puntos_ronda1>mayor_puntaje1)
            {
                mayor_puntaje1=puntos_ronda1;
            }
            if(duplicador==2)
            {
                rlutil::locate(50, 18);
                cout<<"Tuviste suerte, duplicaste los puntos de la ronda!!"<<endl;
            }
             //----------------------------PANTALLA INFO DE SISTEMA----------------------------
            rlutil::setColor(rlutil::GREY);
            rlutil::locate(108, 12);
            cout<<"  RESULTADOA DE LA BATALLA";
            rlutil::locate(108, 14);
            cout<<"Dados perdidos en batalla: "<<cont_dado_eliminado1;

            rlutil::setColor(rlutil::BLUE);
            rlutil::locate(108, 3);
             //------------------FUNCION ANIMO (VER SI VALE LA PENA PONERLO)------------------
            animo_vs (cont_dado_eliminado1, cont_rondas, dados_restantes1, puntos_totales1, puntos_totales2, nombre1);
             //----------------------------PANTALLA INFO DE SISTEMA----------------------------
            rlutil::setColor(rlutil::GREY);
            rlutil::locate(108, 16);
            cout<< "Puntos de ronda : " <<puntos_ronda1;
            rlutil::locate(108, 18);
            cout<< "Puntos totales "<<puntos_totales1;
            rlutil::locate(108, 20);
            cout<<"Dados restantes: "<<dados_restantes1;
            cout<<endl;
            if (dados_restantes1>0)
            {
                if(duplicador==2)
                {
                    rlutil::locate(108, 26);
                    rlutil::setColor(rlutil::BLUE);
                    cout<<"Duplicaste tus puntos.";
                    rlutil::locate(108, 28);
                    cout<< "y tenes un tiro extra!";
                    rlutil::locate(108, 30);
                    cout<< "Presiona una tecla y lanza" <<endl;
                    continuar1=1;

                    rlutil::setColor(rlutil::BLACK);
                    rlutil::anykey();
                    system("cls");
                }
                else
                {
                    rlutil::locate(108, 26);
                    cout<<"Deseas seguir?";
                    rlutil::locate(108, 28);
                    cout<<"1-Seguir otra ronda";
                    rlutil::locate(108, 30);
                    cout<<"0-Abandonar!"<<endl;
                    cin>>continuar1;
                    if(continuar1==0){
                        cont_tirada1=0;
                    }
                    rlutil::setColor(rlutil::BLACK);
                    system("cls");
                }
            }
            else
            {
                continuar1=0;
                system("pause");
                system("cls");
            }
        }
        while((duplicador==2) || ((continuar1==1) && (dados_restantes1>0)));
/////////////////////////////////////////////////////////////////////////////////
//-------------------------------------ETAPA DE ELIMINACION DE DADOS JUGADOR DOS---------------------------------
        do //para jugador 2
        {
            cont_tirada2++;

            plantilla (cont_rondas, nombre2, cont_tirada2, dados_restantes2, dados_defensores);
            tirar_dados_sin_sombra(5, 26, dados_defensores, vdefensa2);
            int vataque2[dados_restantes2];
            lanzar_Dados_Atacantes(vataque2, dados_restantes2, nombre2,40, 15); //borra la pantalla
         //---------------------(CADA VEZ QUE LANZO LOS DADOS LIMPIO LA PANTALLA)----------------
            plantilla (cont_rondas, nombre2, cont_tirada2, dados_restantes2, dados_defensores);
            tirar_dados_sin_sombra(40, 13, dados_restantes2, vataque2);

            int cont_dado_eliminado2=0;
            int puntos_ronda2=0;
            int vdados_vivos2[dados_restantes2] {};

            eliminar_dado(dados_defensores, dados_restantes2, vdefensa2, vataque2, vdados_vivos2);

            for(int i=0; i<dados_restantes2; i++)
            {
                if(vdados_vivos2[i]==0)
                {
                    cont_dado_eliminado2++;
                }
                else
                {
                    duplicador=doble_puntos(vdados_vivos2, cont_dado_eliminado2, dados_restantes2);
                    puntos_ronda2+=(vdados_vivos2[i]*duplicador);
                }
            }
              //-----------------------------BATALLA GRAFICA DE DADOS-----------------------------
            espadas_restantes(46, 9 , dados_restantes2);
            tirar_dados_sin_sombra(56, 25, dados_defensores, vdefensa2);
            escudos_restantes(60, 24, dados_defensores);
            tirar_dados_sin_sombra(40, 33, dados_restantes2, vdados_vivos2);

             //-----------------------PANTALLA DE MENSAJE DE SISTEMA--------------------------
            borrar_mensajes_sistemas();

            dados_restantes2-=cont_dado_eliminado2;
            if(dados_restantes2>0)
            {
                puntos_totales2+=puntos_ronda2;
            }

            if(puntos_ronda2>mayor_puntaje2)
            {
                mayor_puntaje2=puntos_ronda2;
            }
            if(duplicador==2)
            {
                rlutil::locate(50, 18);
                cout<<"Tuviste suerte, duplicaste los puntos de la ronda!!"<<endl;
            }
             //----------------------------PANTALLA INFO DE SISTEMA----------------------------
            rlutil::setColor(rlutil::GREY);
            rlutil::locate(108, 12);
            cout<<"  RESULTADOA DE LA BATALLA";
            rlutil::locate(108, 14);
            cout<<"Dados perdidos en batalla: "<<cont_dado_eliminado2;

            rlutil::setColor(rlutil::BLUE);
            rlutil::locate(108, 3);
             //------------------FUNCION ANIMO (VER SI VALE LA PENA PONERLO)------------------
            animo_vs (cont_dado_eliminado2, cont_rondas, dados_restantes2, puntos_totales1, puntos_totales2, nombre2);
             //----------------------------PANTALLA INFO DE SISTEMA----------------------------
            rlutil::setColor(rlutil::GREY);
            rlutil::locate(108, 16);
            cout<< "Puntos de ronda: " <<puntos_ronda2;
            rlutil::locate(108, 18);
            cout<< "Puntos totales "<<puntos_totales2;
            rlutil::locate(108, 20);
            cout<<"Dados restantes: "<<dados_restantes2;
            cout<<endl;
            if (dados_restantes2>0)
            {
                if(duplicador==2)
                {
                    rlutil::locate(108, 26);
                    rlutil::setColor(rlutil::BLUE);
                    cout<<"Duplicaste tus puntos.";
                    rlutil::locate(108, 28);
                    cout<< "y tenes un tiro extra!";
                    rlutil::locate(108, 30);
                    cout<< "Presiona una tecla y lanza" <<endl;
                    continuar2=1;
                    rlutil::setColor(rlutil::BLACK);
                    rlutil::anykey();
                    system("cls");
                }
                else
                {
                    rlutil::locate(108, 26);
                    cout<<"Deseas seguir?";
                    rlutil::locate(108, 28);
                    cout<<"1-Seguir otra ronda";
                    rlutil::locate(108, 30);
                    cout<<"0-Abandonar partida!"<<endl;
                    cin>>continuar2;
                    if(continuar2==0){
                        cont_tirada2=0;
                    }
                    rlutil::setColor(rlutil::BLACK);
                    cout<<endl;
                    system("cls");
                }
            }
            else
            {
                continuar2=0;
                system("pause");
                system("cls");
            }
        }
        while((duplicador==2) || ((continuar2==1) && (dados_restantes2>0)));
    }
    while(cont_rondas<2);////////// MODIFICAR ESTO A 5 RONDAS AL FINALIZAR EL TP
    plantilla(0, "RESULTADOS", 0, 7, 3);
    rlutil::setColor(rlutil::GREY);
    rlutil::locate(108, 12);
    texto_letras("LAS BATALLAS HAN FINALIZADO!", 10000);
    if (puntos_totales1==puntos_totales2)
    {
        rlutil::locate(108, 14);
        texto_letras("ES UN EMPATE!!", 10000);
        rlutil::locate(108, 16);
        texto_letras("Veamos sus resultados", 10000);
    }
    else if( puntos_totales1>puntos_totales2)
    {
        rlutil::locate(108, 14);
        texto_letras("tenemos un ganador!", 10000);
        rlutil::locate(108, 16);
        cout<<nombre1;
        texto_letras(" fuiste el vencedor!", 10000);
        rlutil::locate(108, 18);
        texto_letras("veamos los reslutados finales", 10000);
    }
    else
    {
        rlutil::locate(108, 14);
        texto_letras("tenemos un ganador!", 10000);
        rlutil::locate(108, 16);
        cout<<nombre2;
        texto_letras(" fuiste el vencedor!", 10000);
        rlutil::locate(108, 18);
        texto_letras("veamos los reslutados finales", 10000);
    }
    rlutil::setColor(rlutil::BLACK);
    plantilla (0, "Resultados", 0, 7, 3);
    rlutil::locate(54, 15);
    cout<<nombre1<<" y "<<nombre2<<" GRACIAS POR JUGAR!!";
    rlutil::locate(40, 17);
    cout<< "Estas son tus estadisticas de la partida";
    rlutil::locate(40, 19);
    cout<<" Rondas totales "<<cont_rondas;
    rlutil::locate(40, 21);
    cout<<" Los puntos obtenidos por "<<nombre1<<" fueron "<<puntos_totales1;
    rlutil::locate(40, 23);
    cout<<" Mayor puntaje en una ronda "<<mayor_puntaje1;
    rlutil::locate(40, 25);
    cout<<" Los puntos obtenidos por "<<nombre2<<" fueron "<<puntos_totales2;
    rlutil::locate(40, 27);
    cout<<" Mayor puntaje en una ronda "<<mayor_puntaje2;
    rlutil::locate(40, 29);

    rlutil::locate(40, 30);
    cout<<"Regresar al menu principal, "<<endl;
    rlutil::locate(40, 32);
    system("pause");
}

//------------------------------------FUNSION ANIMO VERSUS---------------------------------
// la idea es comentar en funcion de la diferencia de puntos
void animo_vs (int cont_dado_eliminado, int cont_rondas, int dados_restantes, int puntos_totales1, int puntos_totales2, string nombre)
{

    int ganando=0;
    if (puntos_totales1==puntos_totales2)
    {
        //van empatando
    }
    else if(puntos_totales1>puntos_totales2)
    {
        //va ganando el jugador 1
        ganando=1;
    }
    else
    {
        //va ganando el jugador 2
        ganando=2;
    }

    if(dados_restantes>0)
    {
        switch(cont_dado_eliminado)
        {
        case 0:
            switch(cont_rondas)
            {
            case 1:
                cout<<"Execelte comienzo!! "<< nombre;
                break;
            case 2:
                cout<<" ";
                break;
            case 3:
                cout<<" ";
                break;
            case 4:
                cout<<" ";
                break;
            case 7:
                cout<<" ";
                break;
            case 10:
                cout<<" ";
                break;
            default:
                cout<<" ";
                break;
            }
            break;
        case 1:
            switch(cont_rondas)
            {
            case 1:
                switch(ganando)
                {
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
                switch(ganando)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 3:
                switch(ganando)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 5:
                switch(ganando)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 10:
                cout<<"Estas en modo dios?!!";
                break;
            default:
                cout<<"ufff!!";
                break;
            }
            break;
        case 2:
            switch(cont_rondas)
            {
            case 1:
                switch(ganando)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 2:
                switch(ganando)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 3:
                switch(ganando)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 5:
                switch(ganando)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 10:
                switch(ganando)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            default:
                cout<<"........ohhhh!!";
                break;
            }
            break;
        case 3:
            switch(cont_rondas)
            {
            case 1:
                switch(ganando)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 2:
                switch(ganando)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 3:
                switch(ganando)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            default:
                cout<<"lo siento :(";
                break;
            }
            break;
        case 4:
            switch(cont_rondas)
            {
            case 1:
                switch(ganando)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 2:
                switch(ganando)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 3:
                switch(ganando)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            default:
                cout<<"lo siento :(";
                break;
            }
            break;
        case 5:
            switch(cont_rondas)
            {
            case 1:
                switch(ganando)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 2:
                switch(ganando)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            case 3:
                switch(ganando)
                {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    cout<< "  Lo has empatado!!";
                    break;
                }
            default:
                cout<<" recorrimos un largo camino";
                break;
            }
            break;
        default:
            cout<<"ya llegamos muy lejos";
            break;
        }
    }
    else
    {
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
