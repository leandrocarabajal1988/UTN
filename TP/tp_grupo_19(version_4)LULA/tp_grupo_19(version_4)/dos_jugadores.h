//aca va la declaracion de funciones del menu de dos jugadores
#pragma once
#include <string>

int dos_jugadores();
void vtirada_defensores(int vtirada_defensores[], int dados_defensores);
void vtirada_atacantes(int vtirada_atacantes[], int dados_restantes);
void animo_vs(int cont_dado_eliminado, int cont_rondas, int dados_restantes, int puntos_totales1, int puntos_totales2, string nombre);
int doble_puntos(int vdados_vivos[], int cont_dado_eliminado, int dados_restantes);
void lanzar_Dados_Defensores(int vdefensa[], int dados_defensores, string nombre);
void lanzar_Dados_Atacantes(int vataque[], int dados_restantes);
