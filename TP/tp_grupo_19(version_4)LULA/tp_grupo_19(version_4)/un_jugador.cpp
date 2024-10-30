#include "un_jugador.h"
#include "dados.h"
#include <conio.h>
#include <iostream>
#include <string.h>
#include "rlutil.h"

using namespace std;

int un_jugador(){
system("cls");

int dados_defensores=2;
int dados_restantes=5;
int puntos_totales=0;
int cont_rondas=0;
int mayor_puntaje=0;


//----------------------------------------INGRESO DE NOMBRE ----------------------------------------

string nombre = ingresar_Nombre();

maestro( dados_restantes, nombre);
cout<<endl;
cout<<" cuando estes listo, presiona una tecla";
getch();


//------------------------------------------ETAPA DADOS DEFENSORES-----------------------------------

int vdefensa[dados_defensores];

lanzar_Dados_Defensores(vdefensa, dados_defensores, nombre);

//-----------------------------------------CONTINUACION DE LA RONDA ---------------------------------
cout<<endl;
cout<<" Ahora presiona una tecla para lanzar los dados de ataque.";
getch();
bool continuar=1;
int duplicador;
do{
cont_rondas++;

do{
    system("cls");
    cout<<endl;
    cout<<"========================== RONDA NUMERO "<<cont_rondas<<"======================="<<endl<<endl;

    cout<<endl;
//-----------------------------------------ETAPA DADAOS ATACANTES------------------------------------

int vataque[dados_restantes];
lanzar_Dados_Atacantes(vataque, dados_restantes);

//-------------------------------------ETAPA DE ELIMINACION DE DADOS---------------------------------
cout<<endl;
cout<<"-----------ronda de ataque y defensa!------------"<<endl;
cout<<"DADOS DEFENSORES "<<vdefensa[0]<<"  "<<vdefensa[1]<<endl;
cout<<"DADOS ATACANTES  ";
for (int i=0; i<dados_restantes; i++){
cout<<vataque[i]<<"  ";
}
cout<<endl;

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
dados_restantes-=cont_dado_eliminado;
puntos_totales+=puntos_ronda;

if(puntos_ronda>mayor_puntaje){
    mayor_puntaje=puntos_ronda;
}
if(duplicador==2){
        cout<<"Tuvimos suerte, duplicamos los puntos de la ronda!!"<<endl;
}
cout<<endl;
cout<<"--------------ESTE ES EL RESULTADO DE LA BATALLA--------------"<<endl;
for(int i=0; i<(dados_restantes+cont_dado_eliminado); i++){
cout<<vdados_vivos[i]<<"  ";
}
cout<< endl<<endl;
cout<<"Dados perdidos en la batalla "<<cont_dado_eliminado<<endl;

animo(cont_dado_eliminado,  cont_rondas, dados_restantes);
cout<<endl<<endl;

cout<<"tus puntos en esta ronda son: " <<puntos_ronda<<endl<<"puntos totales "<<puntos_totales<<endl;;
cout<<"te restan "<<dados_restantes<<" dados para seguir jugando...."<<endl<<endl<<"\t \t";
cout<<endl;
if (dados_restantes>0){
        if(duplicador==2){
            cout<<"Como duplicamos estamos obligados a volver a jugar, suerte!" <<endl;
            continuar=1;
            cout<<endl;
            system("pause");
            system("cls");

        }
        else{
            cout<<"\t\t Deseas seguir?"<<endl;
            cout<<" 1-Seguir otra ronda, 0-Abandonar partida!"<<endl;
            cin>>continuar;
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
    system("pause");
    cout<<nombre<<" GRACIAS POR JUGAR!!"<< endl <<endl;
    cout<<"Estas son tus estadisticas de la partida"<<endl;
    cout<<"rondas jugadas "<<cont_rondas<<endl<<endl;
    cout<<" Mayor puntaje en una ronda "<<mayor_puntaje<<endl<<endl;
    cout<<"Puntos totales "<<puntos_totales<<endl;
    cout<<endl;
}
else{
    cout<<"fin del juego"<<endl;
    cout<<"vuelve a intentarlo!"<<endl;
}
cout<<"Regresar al menu principal, ";
system("pause");
}

///////////////////////////////////////////////////////////////////////////////////////////

// ---------------------Funciones -------------------------------------------------------


//-----------------------FUNCION INGRESAR NOMBRE ----------------------------------------
string ingresar_Nombre() {
    string nombre;
    for (int i=0;i<15;i++){

        if(i%2 == 0){
    rlutil::setColor(rlutil:: RED);
    rlutil::setBackgroundColor(rlutil:: BLACK);
    }
        else{
    rlutil::setColor(rlutil:: BLACK);
    rlutil::setBackgroundColor(rlutil:: RED);
    }

    rlutil::locate (40,1);
    cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
    rlutil::locate(40,2);
    cout << "\t" <<"   BIENVENIDO JUGADOR!  " << endl;
    rlutil::locate(40,3);
    cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
    cout<<endl;
    cout << "\t" << "Como debemos llamarte?" << endl << endl;
    rlutil::msleep(460);
    }
    cin.ignore();

    cout<<endl;

    getline(cin, nombre);
     rlutil::locate (35,5);
    cout << "\t\t" << endl << nombre << " TE DESEAMOS MUCHA SUERTE EN TU PARTIDA!!" << endl;

    rlutil:: locate (37,6);
    cout<<endl;
    cout<<"\t \t Sabia eleccion, no por nada usted es el gran maestro!"<<endl;

    return nombre;
}

// --------------------FUNCION LANZAR DADOS DEFENSORES ---------------------------------
void lanzar_Dados_Defensores(int vdefensa[], int dados_defensores,string nombre) {
    system("cls");

    cout << "Lanzando dados defensores..." << endl;

    vtirada_defensores(vdefensa, dados_defensores);

   cout<<"\t \t"<<nombre<<" Estos son tus dados a vencer! "<<endl;
}


// --------------------FUNCION LANZAR DADOS ATACANTES --------------------------------
void lanzar_Dados_Atacantes(int vataque[], int dados_restantes) {

    cout << "Lanzando los dados atacantes..." << endl;
    vtirada_atacantes(vataque, dados_restantes);
}




//-----------------------FUNCION CREAR VECTOR DADOS DEFENSORES----------------------------

void vtirada_defensores(int vtirada_defensores[], int dados_defensores){

for(int i=0; i<dados_defensores; i++){

    vtirada_defensores[i]=tirar_dado();
    cout<<vtirada_defensores[i]<<"\t";
}
}
//------------------------FUNCION CREAR VECTOR DADOS ATACANTES-----------------------------
void vtirada_atacantes(int vtirada_atacantes[], int dados_restantes){

for(int i=0; i<dados_restantes; i++){

    vtirada_atacantes[i]=tirar_dado();
    cout<<vtirada_atacantes[i]<<"\t";
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

    int dado_extra;
    cout<< endl;
    rlutil:: locate (30,5);
    cout<<"\t \t UN MOMENTO!!.....SILENCIO TODOS!!"<< endl;
    rlutil:: locate (30,6);
    cout<<"\t \t OHH estamos en presencia del GRAN MAESTRO,"<< endl;
    rlutil:: locate (30,7);
    cout<<"\t \t ( .....hace un reverencia)"<< endl << endl;
    rlutil:: locate (30,8);
    cout<<"Permitame ofrecerle un trato especial..."<< endl;
    rlutil:: locate (30,9);
    cout<<"si promete ante el universo que dara por aprobado este trabajo practico le dare Un dado extra! :o"<< endl;
    rlutil:: locate (30,10);
    cout<<"pero si solo tendra nueve 0 diez en su teclado a la hora de calificar, le dare DOS dados extras!!  XD"<< endl;
    rlutil:: locate (30,11);
    cout<<".....sin presiones, usted decide..."<< endl << endl << endl;
    rlutil:: locate (30,12);
    cout<<"\t \t Entonces.....cual es tu decision GRAN MAESTRO?"<< endl << endl;
    rlutil:: locate (30,13);
    cout<<"\t 0- jugar como el resto de los mortales/ 1- un dado extra/ 2- dos dados extras ;)"<< endl;
    rlutil:: locate (30,14);
    cin>>dado_extra;
    switch(dado_extra){
    case 1: dados_restantes=6;
        break;
    case 2: dados_restantes=7;
        break;
    default:dados_restantes=5;
        break;
    }

}



cout<<"tus dados para la partida son: "<<dados_restantes<<endl;
}

//-------------------------------------FUNCION VAMOS A DARTE ANIMOS!--------------------------------

void animo (int cont_dado_eliminado, int cont_rondas, int dados_restantes){

if(dados_restantes>0){
    switch(cont_dado_eliminado)
    {
        case 0:
            switch(cont_rondas){
                rlutil:: locate (30,5);
            case 1:cout<<"Execelente jugada!!";
                break;
                rlutil:: locate (30,6);
            case 2:cout<<"Muy bien!!";
                break;
                rlutil:: locate (30,7);
            case 3:cout<<"Aqui no paso nada!!";
                break;
                rlutil:: locate (30,8);
            case 4:cout<<"Vamos una ronda mas!!";
                break;
                rlutil:: locate (30,9);
            case 7:cout<<"WOOOW.....Dime como lo haces!!";
                break;
                rlutil:: locate (30,10);
            case 10:cout<<"ya nadie puede detenerte!!";
                break;
                rlutil:: locate (30,11);
            default:cout<<"todo marcha segun el plan!!";
                break;
            }
            break;
        case 1:
            switch(cont_rondas){
                rlutil:: locate (30,5);
            case 1:cout<<"sigamos!!";
                break;
                rlutil:: locate (30,6);
            case 2:cout<<"Muy bien, seguimos?!";
                break;
                rlutil:: locate (30,7);
            case 3:cout<<"Solo uno, estamos bien, estamos bien!!";
                break;
                rlutil:: locate (30,8);
            case 5:cout<<"Si, tuve un poco de miedo!!";
                break;
                rlutil:: locate (30,9);
            case 10:cout<<"Estas en modo dios?!!";
                break;
                rlutil:: locate (30,10);
            default:cout<<"ufff!!";
                break;
            }
            break;
        case 2:
        switch(cont_rondas){
            rlutil:: locate (30,5);
            case 1:cout<<"No es un buen comienzo, pero podemos seguir!!";
                break;
                rlutil:: locate (30,6);
            case 2:cout<<"Huy........mejor miremos los puntos";
                break;
                rlutil:: locate (30,7);
            case 3:cout<<"Dos soldados han quedado en el camino";
                break;
                rlutil:: locate (30,8);
            case 5:cout<<"Y ese sonido? son tus piernas temblando verdad?";
                break;
                rlutil:: locate (30,9);
            case 10:cout<<"........Tomemoslo con calma";
                break;
                rlutil:: locate (30,10);
            default:cout<<"........ohhhh!!";
            break;
            }
            break;
        case 3:
        switch(cont_rondas){
            rlutil:: locate (30,5);
            case 1:cout<<"No es un buen comienzo, pero podemos seguir........podemos seguir??!";
                break;
                rlutil:: locate (30,6);
            case 2:cout<<"No dire nada........mejor miremos los puntos";
                break;
                rlutil:: locate (30,7);
            case 3:cout<<"Todavia sirve! Todavia sirve!";
                break;
                rlutil:: locate (30,8);
            default:cout<<"lo siento :(";
            break;
            }
            break;
        case 4:
        switch(cont_rondas){
            rlutil:: locate (30,5);
            case 1:cout<<"Enserio??!";
                break;
                rlutil:: locate (30,6);
            case 2:cout<<"Cuatro?...eso no lo veia venir";
                break;
                rlutil:: locate (30,7);
            case 3:cout<<"Oh...no....";
                break;
                rlutil:: locate (30,8);
            default:cout<<"lo siento :(";
            break;
            }
            break;
        case 5:
        switch(cont_rondas){
            rlutil:: locate (30,5);
            case 1:cout<<"Espero que el destino de la humanidad no dependa de tu suerte :(";
                break;
                rlutil:: locate (30,6);
            case 2:cout<<"No entiendo que paso..........";
                break;
                rlutil:: locate (30,7);
            case 3:cout<<"pense que lo lograriamos :(";
                break;
                rlutil:: locate (30,8);
            default:cout<<" recorrimos un largo camino";
            break;
            }
            break;
            rlutil:: locate (30,5);
        default:cout<<"ya llegamos muy lejos";
            break;
}
}
else{
    switch(cont_rondas)
    {
        case 3:
            rlutil:: locate (30,5);
            cout<<endl<<"......."<<endl;
            rlutil:: locate (30,6);
            cout<<" Emm...bueno...quien tiene hambre? :)";
            break;
        case 5:
            rlutil:: locate (30,7);
            cout<<endl<<"......."<<endl;
            rlutil:: locate (30,8);
            cout<<"Como dijo mi ex....hasta aca llegamos :)";
            break;
        case 7:
            rlutil:: locate (30,9);
            cout<<endl<<"......."<<endl;
            rlutil:: locate (30,10);
            cout<<"YOU LOSE!";
            break;
        case 9:
            rlutil:: locate (30,11);
            cout<<endl<<"......."<<endl;
            rlutil:: locate (30,12);
            cout<<" Casi casi, lo siento :(";
            break;
        default:
            rlutil:: locate (30,13);
            cout<<endl<<"......."<<endl;
            rlutil:: locate (30,14);
            cout<<"Uy...perdimos......";
            break;
}
}
}
//-------------------------------------------
