//aca va la declaracion de funciones anexos
#pragma once



void puntos_suspensivos(std::string texto, int cantidad, int segundos);
void pensando(int tiempo);
void texto_letras(std::string text, int delay);
void mover_cursor (int x, int y);
void armar_cuadro (int xinicial, int yinicial, int ancho, int largo, std:: string color, std:: string color_fondo);
void armar_cuadro_doble (int xinicial, int yinicial, int ancho, int largo, std:: string color, std:: string color_fondo);
void plantilla (int ronda_numero, std:: string nombre, int tirada, int dados_restantes, int dados_defensores);
void armar_cuadro_doble_azul (int xinicial, int yinicial, int ancho, int largo, std:: string color, std:: string color_fondo);
void armar_cuadro_doble_rojo (int xinicial, int yinicial, int ancho, int largo, std:: string color, std:: string color_fondo);
void armar_cuadro_doble_gris (int xinicial, int yinicial, int ancho, int largo, std:: string color, std:: string color_fondo);
void borrar_mensajes_sistemas();
void espada (int x, int y);
void calavera (int x, int y );
void escudo (int x, int y);
void corazon (int x, int y);
void corazon_azul (int x, int y);
void vidas (int cantidad, int posx, int posy);
void escudos_restantes_inanimados(int x, int y, int cantidad_dados);
