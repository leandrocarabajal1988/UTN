#include "un_jugador.h"
#include "dados.h"
#include <iostream>

using namespace std;

int un_jugador(){
system("cls");

int dados_defensores=2;
int dados_restantes=5;
int puntos_totales=0;
int cont_rondas=0;



//----------------------------------------INGRESO DE NOMBRE ----------------------------------------

string nombre = ingresar_Nombre();



//------------------------------------------ETAPA DADOS DEFENSORES-----------------------------------

int vdefensa[dados_defensores];

lanzar_Dados_Defensores(vdefensa, dados_defensores);




//-----------------------------------------CONTINUACION DE LA RONDA ---------------------------------
bool continuar=1;
while((dados_restantes>0) && (continuar)){
        cont_rondas++;
        cout<<endl;
        cout<<"========================== RONDA NUMERO "<<cont_rondas<<"======================="<<endl<<endl;

        cout<<endl;
//-----------------------------------------ETAPA DADAOS ATACANTES------------------------------------

int vataque[dados_restantes];
lanzar_Dados_Atacantes(vataque, dados_restantes);

//-------------------------------------ETAPA DE ELIMINACION DE DADOS---------------------------------
cout<<endl;
cout<<"-----------ronda de ataque y defensa!------------"<<endl;
cout<<vdefensa[0]<<"  "<<vdefensa[1]<<endl;
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
        puntos_ronda+=vdados_vivos[i];
    }
}
dados_restantes-=cont_dado_eliminado;
puntos_totales+=puntos_ronda;

cout<<endl;
cout<<"Este es el reultado de la ronda"<<endl;
for(int i=0; i<(dados_restantes+cont_dado_eliminado); i++){
cout<<vdados_vivos[i]<<"  ";
}
cout<< endl<<endl;
cout<<"Dados perdidos en la batalla "<<cont_dado_eliminado<<endl;

animo(cont_dado_eliminado);
cout<<endl<<endl;

cout<<"tus puntos en esta ronda son: " <<puntos_ronda<<endl<<"puntos totales "<<puntos_totales<<endl;;
cout<<"te restan "<<dados_restantes<<" dados para seguir jugando...."<<endl<<endl<<"\t \t";
cout<<endl;
if (dados_restantes>0){
cout<<"\t\t Deseas seguir?"<<endl;
cout<<" 1-Seguir otra ronda, 0-Abandonar partida!"<<endl;
cin>>continuar;
cout<<endl;
system("cls");
}
else{
    continuar=0;
}
}
if (dados_restantes>0){
    cout<<nombre<<" GRACIAS POR JUGAR!!"<<endl;
    cout<<"Estas son tus estadisticas de la partida"<<endl;
    cout<<"rondas jugadas "<<cont_rondas<<endl;
    cout<<"Puntos totales "<<puntos_totales<<endl;
    cout<<endl;
}
else{
    cout<<"fin del juego"<<endl;
    cout<<"vulve a intentarlo!"<<endl;
}
cout<<"Regresar al menu principal, ";
system("pause");
}




///////////////////////////////////////////////////////////////////////////////////////////

// ---------------------Funciones -------------------------------------------------------


//-----------------------FUNCION INGRESAR NOMBRE ----------------------------------------
string ingresar_Nombre() {
    string nombre;
    cout << "\t" << "Bienvenido jugador!" << endl;
    cout << "\t" << "Como debemos llamarte?" << endl;
    cin >> nombre;
    cout << "\t\t" << endl << nombre << "!! te deseamos mucha suerte en tu juego!!" << endl;
    return nombre;
}

// --------------------FUNCION LANZAR DADOS DEFENSORES ---------------------------------
void lanzar_Dados_Defensores(int vdefensa[], int dados_defensores) {
    system("cls");
    cout << "Lanzando dados defensores..." << endl;
    vtirada_defensores(vdefensa, dados_defensores);
    cout << "\t \t" << "Estos son los dados a vencer!" << endl;
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
//-------------------------------------FUNCION VAMOS A DARTE ANIMOS!--------------------------------

void animo (int cont_dado_eliminado){

    switch(cont_dado_eliminado)
    {
        case 0:
        cout<<"Execelte jugada!!";
            break;
        case 1:
        cout<<"Muy bien!, seguimos?";
            break;
        case 2:
        cout<<"Mejor......miremos tus puntos!";
            break;
        case 3:
        cout<<"No me esperaba esto :(";
            break;
        case 4:
        cout<<"Cuatro?! oh no!";
            break;
        case 5:
        cout<<"Espero que el destino de la humanidad no dependa de tu suerte :(";
            break;
        default:
            break;
}
}
