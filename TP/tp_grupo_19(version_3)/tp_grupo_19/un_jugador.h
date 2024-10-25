//aca va la declaracion de funciones de un jugador
#pragma once
#include <string>
using namespace std;

int un_jugador();
void vtirada_defensores(int vtirada_defensores[], int dados_defensores);
void vtirada_atacantes(int vtirada_atacantes[], int dados_restantes);
void eliminar_dado(int dados_defensores, int dados_restantes, int vdefensa[], int vataque[], int vdados_vivos[]);
void animo (int cont_dado_eliminado);
string ingresar_Nombre();
void lanzar_Dados_Defensores(int vdefensa[], int dados_defensores);
void lanzar_Dados_Atacantes(int vataque[], int dados_restantes);
