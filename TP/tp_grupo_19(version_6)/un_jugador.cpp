#include "un_jugador.h"
#include "dados.h"
#include <conio.h>
#include <iostream>
#include <string.h>
#include "funciones_accesorios.h"
#include "rlutil.h"

using namespace std;

int un_jugador(){

system("title GREED: MODO UN JUGADOR");
system("cls");

int dados_defensores=2;
int dados_restantes=5;
int puntos_totales=0;
int cont_rondas=1;
int mayor_puntaje=0;

//----------------------------------------INGRESO DE NOMBRE ----------------------------------------
plantilla (cont_rondas, "jugador misterioso", cont_rondas);

string nombre = ingresar_Nombre();

maestro( dados_restantes, nombre);

borrar_mensajes_sistemas();
rlutil::locate(108, 12);
rlutil::setColor(rlutil::GREY);
cout<<"-cuando estes listo";
rlutil::locate(108, 14);
cout<< "-presiona una tecla";
rlutil::setColor(rlutil::BLACK);
rlutil::anykey();


system("cls");
plantilla (cont_rondas, nombre, cont_rondas);

int vdefensa[dados_defensores];

lanzar_Dados_Defensores(vdefensa, dados_defensores, nombre, 45, 15);//borra pantalla.

plantilla (cont_rondas, nombre, cont_rondas);

    tirar_dados_sin_sombra(10, 25, dados_defensores, vdefensa);

borrar_mensajes_sistemas();
rlutil::locate(108, 12);
rlutil::setColor(rlutil::GREY);
cout<<"Ahora presiona una tecla";
rlutil::locate(108, 14);
cout<< "para lanzar el ataque";
rlutil::anykey();

bool continuar=1;
int duplicador;
do{
cont_rondas++;

do{
    plantilla (cont_rondas, nombre, cont_rondas);
    tirar_dados_sin_sombra(10, 25, dados_defensores, vdefensa);

int vataque[dados_restantes];
lanzar_Dados_Atacantes(vataque, dados_restantes, nombre,40 ,15);

plantilla (cont_rondas, nombre, cont_rondas);

    tirar_dados_sin_sombra(40, 13, dados_restantes, vataque);
    tirar_dados_sin_sombra(10, 25, dados_defensores, vdefensa);

sleep(1);

int cont_dado_eliminado=0;
int puntos_ronda=0;
int vdados_vivos[dados_restantes]{};

eliminar_dado(dados_defensores, dados_restantes, vdefensa, vataque, vdados_vivos);

for(int i=0; i<dados_restantes; i++){
    if(vdados_vivos[i]==0){
        cont_dado_eliminado++;
    }
    else{
        duplicador=doble_puntos(vdados_vivos, cont_dado_eliminado, dados_restantes);
        puntos_ronda+=(vdados_vivos[i]*duplicador);
    }
}

rlutil::setColor(rlutil::GREY);
borrar_mensajes_sistemas();
rlutil::locate(108, 12);
cout<<"Veamos los resultados";
rlutil::locate(108, 14);
cout<<"presiona una tecla";
rlutil::anykey();

borrar_mensajes_sistemas();
tirar_dados_sin_sombra(40, 33, dados_restantes, vdados_vivos);

dados_restantes-=cont_dado_eliminado;
puntos_totales+=puntos_ronda;

if(puntos_ronda>mayor_puntaje){
    mayor_puntaje=puntos_ronda;
}
if(duplicador==2){
        rlutil::locate(15, 13);
        cout<<"Tuvimos suerte, duplicamos los puntos de la ronda!!"<<endl;
}
rlutil::setColor(rlutil::GREY);
rlutil::locate(108, 12);
cout<<"  RESULTADOA DE LA BATALLA";
rlutil::locate(108, 14);
cout<<"Dados perdidos en batalla "<<cont_dado_eliminado;

rlutil::setColor(rlutil::BLUE);
rlutil::locate(108, 3);
animo(cont_dado_eliminado,  cont_rondas, dados_restantes);

rlutil::setColor(rlutil::GREY);
rlutil::locate(108, 16);
cout<< "Puntos de ronda : " <<puntos_ronda;
rlutil::locate(108, 18);
cout<< "Puntos totales "<<puntos_totales;
rlutil::locate(108, 20);
cout<<"Dados restantes: "<<dados_restantes;
cout<<endl;
if (dados_restantes>0){
        if(duplicador==2){
            rlutil::locate(108, 26);
            rlutil::setColor(rlutil::BLUE);
            cout<<"Duplicaste tus puntos.";
            rlutil::locate(108, 28);
            cout<< "y tenes un tiro extra!";
            rlutil::locate(108, 30);
            cout<< "Presiona una tecla y lanza" <<endl;
            continuar=1;
            rlutil::setColor(rlutil::BLACK);
            cout<<endl;
            rlutil::anykey();
            system("cls");

        }
        else{
            rlutil::locate(108, 26);
            cout<<"Deseas seguir?";
            rlutil::locate(108, 28);
            cout<<"1-Seguir otra ronda";
            rlutil::locate(108, 30);
            cout<<"0-Abandonar partida!"<<endl;
            cin>>continuar;
            rlutil::setColor(rlutil::BLACK);
            cout<<endl;
            system("cls");
        }
}
else{
    continuar=0;
}
}
while(duplicador==2);
}
while((dados_restantes>0) && (continuar));

if (dados_restantes>0){
    plantilla (cont_rondas, nombre, cont_rondas);
    rlutil::locate(54, 15);
    cout<<nombre<<" GRACIAS POR JUGAR!!";
    rlutil::locate(40, 17);
    cout<< "Estas son tus estadisticas de la partida"<<endl;
    rlutil::locate(40, 19);
    cout<< "Rondas jugadas "<<cont_rondas<<endl<<endl;
    rlutil::locate(40, 21);
    cout<< "Mayor puntaje en una ronda "<<mayor_puntaje<<endl<<endl;
    rlutil::locate(40, 23);
    cout<< "Puntos totales "<<puntos_totales<<endl;


}
else{
    rlutil::locate(54, 26);
    cout<<"fin del juego";
    rlutil::locate(54, 28);
    cout<<"vulve a intentarlo!";

}
    rlutil::locate(40, 30);
cout<<"Regresar al menu principal, "<<endl;
rlutil::locate(40, 32);
system("pause");
}


///////////////////////////////////////////////////////////////////////////////////////////

// ---------------------Funciones -------------------------------------------------------


//-----------------------FUNCION INGRESAR NOMBRE ----------------------------------------
string ingresar_Nombre() {

    string nombre;
    rlutil::setColor(rlutil::GREY);
    rlutil::locate(108, 12);
    texto_letras(" -Bienvenido jugador!", 10000);
    rlutil::locate(108, 13);
    texto_letras(" -Como debemos llamarte?", 10000);

    rlutil::setColor(rlutil::BLUE);
    rlutil::locate(108, 15);
    cout<< " - Mi nombre es ";
    cin.ignore();
    getline(cin, nombre);

    rlutil::setColor(rlutil::GREY);
    rlutil::locate(108, 17);
    cout<< "- "<< nombre;
    texto_letras(" mucha suerte !!", 10000);
    cout<< endl;
    rlutil::setColor(rlutil::BLACK);
    return nombre;
}

// --------------------FUNCION LANZAR DADOS DEFENSORES ---------------------------------
void lanzar_Dados_Defensores(int vdefensa[], int dados_defensores, string nombre, int posx,int posy) {
    borrar_mensajes_sistemas();
    rlutil::locate(108, 12);
    rlutil::setColor(rlutil::GREY);
    cout<<"Lanzando dados defensores...";

    rlutil::locate(posx, posy+3);
    vtirada_defensores(vdefensa, dados_defensores);

    tirar_dados_sombra(posx, posy, dados_defensores, vdefensa);
    rlutil::setColor(rlutil::BLACK);
}


// --------------------FUNCION LANZAR DADOS ATACANTES --------------------------------
void lanzar_Dados_Atacantes(int vataque[], int dados_restantes, string nombre, int posx,int posy) {
    borrar_mensajes_sistemas();
    rlutil::locate(108, 12);
    rlutil::setColor(rlutil::GREY);
    cout << "Lanzando los dados atacantes";
    cout << endl;

    vtirada_atacantes(vataque, dados_restantes);

    tirar_dados_sombra(posx, posy, dados_restantes, vataque);
    rlutil::setColor(rlutil::BLACK);
}

//-----------------------FUNCION MOSTRAR VECTOR DADOS DEFENSORES----------------------------
void vtirada_defensores(int vtirada_defensores[], int dados_defensores){

for(int i=0; i<dados_defensores; i++){

    vtirada_defensores[i]=tirar_dado();
    }
}

//------------------------FUNCION MOSTRAR VECTOR DADOS ATACANTES-----------------------------
void vtirada_atacantes(int vtirada_atacantes[], int dados_restantes){

for(int i=0; i<dados_restantes; i++){

    vtirada_atacantes[i]=tirar_dado();

}
}

//--------------------------------FUNCION ELIMINAR DADOS------------------------------
void eliminar_dado(int dados_defensores, int dados_restantes, int vdefensa[], int vataque[], int vdados_vivos[]){

int vdados_vivos1[dados_restantes];
int vdados_vivos2[dados_restantes];

if (vdefensa[0]==vdefensa[1]){
        for (int i=0; i<dados_restantes; i++){
                if(vdefensa[0]==vataque[i]){
                          vdados_vivos[i]=0;
                    }
                    else{
                        vdados_vivos[i]=vataque[i];
                    }
        }
}
else{
    for (int i=0; i<dados_restantes; i++){
                if(vdefensa[0]==vataque[i]){
                    vdados_vivos1[i]=0;
                }
                else{
                    vdados_vivos1[i]=vataque[i];
                }
            }
    for (int i=0; i<dados_restantes; i++){
                if(vdefensa[1]==vataque[i]){
                    vdados_vivos2[i]=0;
                }
                else{
                    vdados_vivos2[i]=vataque[i];
                }
            }
    for (int j=0; j<dados_restantes; j++){
    if((vdados_vivos1[j]!=0) && (vdados_vivos2[j]!=0)){
       vdados_vivos[j]=vataque[j];
    }
    else{
        vdados_vivos[j]=0;
    }
    }
}
}

//--------------------------------------FUNCION PUNTOS DOBLES-----------------------------------------
int doble_puntos(int vdados_vivos[], int cont_dado_eliminado, int dados_restantes){
int valordado=vdados_vivos[0];
int duplicador=1;

if((cont_dado_eliminado==0) &&(dados_restantes>1)){
    for(int i=1; i<dados_restantes; i++){
        if(vdados_vivos[i]!=valordado){
                duplicador=0;
        }
    }
}
else{
    duplicador=0;
}
if(duplicador){
        duplicador=2;
}
else{
    duplicador=1;
}
return duplicador;
}

//------------------------------------- TRUCO PARA MAESTROS--------------------------
void maestro( int &dados_restantes, string nombre){
    std::string maestro = "braian lara";
    std::string maestro1 = "BRAIAN LARA";
    std::string maestro2 = "Braian Lara";
    std::string maestro3 = "Ariel Tapia";
    std::string maestro4 = "ARIEL TAPIA";
    std::string maestro5 = "ariel tapia";
    std::string maestro6 = "Angel Simon";
    std::string maestro7 = "ANGEL SIMON";
    std::string maestro8 = "angel simon";

    if ((maestro == nombre) || (maestro1 == nombre) || (maestro2 == nombre) || (maestro3 == nombre ) ||(maestro4 == nombre ) || (maestro5 == nombre ) || (maestro6 == nombre ) || (maestro7 == nombre ) || (maestro8 == nombre )){
    system("color 47");// le cambia el color de fondo y el de la letra
    system("title GREED: MODO GRAN MAESTRO!");
    int dado_extra;
    system("cls");
    cout<< endl;

    texto_letras("UN MOMENTO!!.....SILENCIO TODOS!!", 50000);

    cout<< endl<<endl;

    texto_letras("OHH estamos en presencia del GRAN MAESTRO,", 50000);

    cout<< endl<<endl;
    cout<<"\t \t  .....(hace un reverencia)"<< endl << endl;

    texto_letras("Permitame ofrecerle un trato especial", 50000);

    cout<< endl<<endl;

    texto_letras("si promete ante el universo que dara por aprobado este trabajo practico le dare Un dado extra! :o", 50000);

    cout<< endl<<endl;

    texto_letras("pero si solo tendra nueve o diez en su teclado a la hora de calificar, le dare DOS dados extras!!  XD", 50000);

    cout<< endl<<endl;

    texto_letras(".....sin presiones, usted decide...", 50000);
    puntos_suspensivos(".", 2, 1);

    cout<< endl<<endl<<endl;
    cout<<"\t \t Entonces.....cual es tu decision GRAN MAESTRO?"<< endl << endl;
    cout<<"\t 0- jugar como el resto de los mortales, 1- un dado extra, 2- dos dados extras ;)"<< endl;
    cin>>dado_extra;
    switch(dado_extra){
    case 1: dados_restantes=6;
        break;
    case 2: dados_restantes=7;
        break;
    default:dados_restantes=5;
        break;
    }
    cout<<endl;
cout<<"\t \t Sabia eleccion, no por nada usted es el gran maestro!";
puntos_suspensivos(".", 2, 1);
    cout<< endl<<endl;
cout<<"tus dados para la partida son: "<<dados_restantes<<endl;
}
rlutil::setColor(rlutil::BLACK);
rlutil::setBackgroundColor(rlutil::LIGHTRED);
}

//-------------------------------------FUNCION VAMOS A DARTE ANIMOS!--------------------------------
void animo (int cont_dado_eliminado, int cont_rondas, int dados_restantes){

if(dados_restantes>0){
    switch(cont_dado_eliminado)
    {
        case 0:
            switch(cont_rondas){
            case 1:cout<<"Execelte jugada!!";
                break;
            case 2:cout<<"Muy bien!!";
                break;
            case 3:cout<<"Aqui no paso nada!!";
                break;
            case 4:cout<<"Vamos una ronda mas!!";
                break;
            case 7:cout<<"WOOOW.....Dime como lo haces!!";
                break;
            case 10:cout<<"ya nadie puede detenerte!!";
                break;
            default:cout<<"todo marcha segun el plan!!";
                break;
            }
            break;
        case 1:
            switch(cont_rondas){
            case 1:cout<<"sigamos!!";
                break;
            case 2:cout<<"Muy bien, seguimos?!";
                break;
            case 3:cout<<"Solo uno, estamos bien, estamos bien!!";
                break;
            case 5:cout<<"Si, tuve un poco de miedo!!";
                break;
            case 10:cout<<"Estas en modo dios?!!";
                break;
            default:cout<<"ufff!!";
                break;
            }
            break;
        case 2:
        switch(cont_rondas){
            case 1:cout<<"No es un buen comienzo, pero podemos seguir!!";
                break;
            case 2:cout<<"Huy........mejor miremos los puntos";
                break;
            case 3:cout<<"Dos soldados han quedado en el camino";
                break;
            case 5:cout<<"Y ese sonido? son tus piernas temblando verdad?";
                break;
            case 10:cout<<"........Tomemoslo con calma";
                break;
            default:cout<<"........ohhhh!!";
            break;
            }
            break;
        case 3:
        switch(cont_rondas){
            case 1:cout<<"No es un buen comienzo, pero podemos seguir........podemos seguir??!";
                break;
            case 2:cout<<"No dire nada........mejor miremos los puntos";
                break;
            case 3:cout<<"Todavia sirve! Todavia sirve!";
                break;
            default:cout<<"lo siento :(";
            break;
            }
            break;
        case 4:
        switch(cont_rondas){
            case 1:cout<<"Enserio??!";
                break;
            case 2:cout<<"Cuatro?...eso no lo veia venir";
                break;
            case 3:cout<<"Oh...no....";
                break;
            default:cout<<"lo siento :(";
            break;
            }
            break;
        case 5:
        switch(cont_rondas){
            case 1:cout<<"Espero que el destino de la humanidad no dependa de tu suerte :(";
                break;
            case 2:cout<<"No entiendo que paso..........";
                break;
            case 3:cout<<"pense que lo lograriamos :(";
                break;
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
//-------------------------------------------
