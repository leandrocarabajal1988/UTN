//aca va la declaracion de funciones anexos
#pragma once

#include <unistd.h>


void puntos_suspensivos(string texto, int cantidad, int segundos);
void pensando(int tiempo);
void texto_letras(string text, int delay);
void mover_cursor (int x, int y);
void armar_cuadro (int xinicial, int yinicial, int ancho, int largo, string color, string color_fondo);
void armar_cuadro_doble (int xinicial, int yinicial, int ancho, int largo, string color, string color_fondo);
void plantilla (int ronda_numero, string nombre, int tirada);
