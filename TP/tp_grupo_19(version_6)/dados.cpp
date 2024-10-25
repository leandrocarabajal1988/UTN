//aca van las funciones de la/s tirada de dados
#pragma one
#include "dados.h"
#include "rlutil.h"
#include <iostream>
using namespace std;
//-------------------------------------------------------------

int tirar_dado()
{
    int resultado_dado;
    resultado_dado=rand()%6+1;

    return resultado_dado;
}

//-------------------- DIBUJAR LOS DADOS y SOMBRA-----------------------
void tirar_dados_sombra(int posx, int posy, int cantidad_dados, int vcantidad_dados[]){
int cta_vueltas=0;
int x=posx;
int y=posy;
    for (int i=0; i<cantidad_dados; i++){
    cta_vueltas++;
    switch(vcantidad_dados[i]){
        case 1:
            rlutil::msleep(100);
            rlutil::setColor(rlutil::WHITE);
            posx=(rand()%3+1)+x;//le da una posicion random donde cae el dado
            posy=(rand()%5+1)+y;
            for (int x=posx+((cta_vueltas-1)*10); x<=posx+((cta_vueltas-1)*10)+6; x++){

                for (int y=posy; y<=posy+2; y++){

                    rlutil::locate(x, y);
                    cout << (char) 219;
                }
            }
            //sombra del dado
            rlutil::setColor(rlutil::GREY);
            rlutil::setBackgroundColor(rlutil::LIGHTRED);
            rlutil::locate(posx+((cta_vueltas-1)*10)+7, posy);
            cout << (char) 220;
            for (int y=posy+1; y<=posy+2; y++){
                rlutil::locate(posx+((cta_vueltas-1)*10)+7, y);
                cout << (char) 219;
            }
            for (int x=posx+((cta_vueltas-1)*10)+1; x<=(posx+((cta_vueltas-1)*10)+7); x++){
                rlutil::locate(x, posy+3);
                cout << (char) 223;
            }

        rlutil::locate(posx+((cta_vueltas-1)*10)+3, posy+1);
        rlutil::setColor(rlutil::RED);
        rlutil::setBackgroundColor(rlutil::WHITE);
        cout << (char) 254;
            break;
        case 2:
            rlutil::msleep(100);
            rlutil::setColor(rlutil::WHITE);
            posx=(rand()%3+1)+x;//le da una posicion random donde cae el dado
            posy=(rand()%5+1)+y;
            for (int x=posx+((cta_vueltas-1)*10); x<=posx+((cta_vueltas-1)*10)+6; x++){
                for (int y=posy; y<=posy+2; y++){
                    rlutil::locate(x, y);
                    cout << (char) 219;
                }
            }
            //sombra del dado
            rlutil::setColor(rlutil::GREY);
            rlutil::setBackgroundColor(rlutil::LIGHTRED);
            rlutil::locate(posx+((cta_vueltas-1)*10)+7, posy);
            cout << (char) 220;
            for (int y=posy+1; y<=posy+2; y++){
                rlutil::locate(posx+((cta_vueltas-1)*10)+7, y);
                cout << (char) 219;
            }
            for (int x=posx+((cta_vueltas-1)*10)+1; x<=(posx+((cta_vueltas-1)*10)+7); x++){
                rlutil::locate(x, posy+3);
                cout << (char) 223;
            }

            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy);
            rlutil::setColor(rlutil::BLACK);
            rlutil::setBackgroundColor(rlutil::WHITE);
            cout << (char) 220;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy+2);
            cout << (char) 223;

            break;
        case 3:
            rlutil::msleep(100);
            rlutil::setColor(rlutil::WHITE);
            posx=(rand()%3+1)+x;//le da una posicion random donde cae el dado
            posy=(rand()%5+1)+y;
            for (int x=posx+((cta_vueltas-1)*10); x<=posx+((cta_vueltas-1)*10)+6; x++){
                for (int y=posy; y<=posy+2; y++){
                    rlutil::locate(x, y);
                    cout << (char) 219;
                }
            }
            //sombra del dado
            rlutil::setColor(rlutil::GREY);
            rlutil::setBackgroundColor(rlutil::LIGHTRED);
            rlutil::locate(posx+((cta_vueltas-1)*10)+7, posy);
            cout << (char) 220;
            for (int y=posy+1; y<=posy+2; y++){
                rlutil::locate(posx+((cta_vueltas-1)*10)+7, y);
                cout << (char) 219;
            }
            for (int x=posx+((cta_vueltas-1)*10)+1; x<=(posx+((cta_vueltas-1)*10)+7); x++){
                rlutil::locate(x, posy+3);
                cout << (char) 223;
            }

            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy);
            rlutil::setColor(rlutil::BLACK);
            rlutil::setBackgroundColor(rlutil::WHITE);
            cout << (char) 220;
            rlutil::locate(posx+((cta_vueltas-1)*10)+3, posy+1);
            cout << (char) 254;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy+2);
            cout << (char) 223;


            break;
        case 4:
            rlutil::msleep(100);
            rlutil::setColor(rlutil::WHITE);
            posx=(rand()%3+1)+x;//le da una posicion random donde cae el dado
            posy=(rand()%5+1)+y;
            for (int x=posx+((cta_vueltas-1)*10); x<=posx+((cta_vueltas-1)*10)+6; x++){
                for (int y=posy; y<=posy+2; y++){
                    rlutil::locate(x, y);
                    cout << (char) 219;
                }
            }
            //sombra del dado
            rlutil::setColor(rlutil::GREY);
            rlutil::setBackgroundColor(rlutil::LIGHTRED);
            rlutil::locate(posx+((cta_vueltas-1)*10)+7, posy);
            cout << (char) 220;
            for (int y=posy+1; y<=posy+2; y++){
                rlutil::locate(posx+((cta_vueltas-1)*10)+7, y);
                cout << (char) 219;
            }
            for (int x=posx+((cta_vueltas-1)*10)+1; x<=(posx+((cta_vueltas-1)*10)+7); x++){
                rlutil::locate(x, posy+3);
                cout << (char) 223;
            }
            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy);
            rlutil::setColor(rlutil::BLACK);
            rlutil::setBackgroundColor(rlutil::WHITE);
            cout << (char) 220;
            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy+2);
            cout << (char) 223;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy+2);
            cout << (char) 223;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy);
            cout << (char) 220;


            break;
        case 5:
            rlutil::msleep(100);
            rlutil::setColor(rlutil::WHITE);
            posx=(rand()%3+1)+x;//le da una posicion random donde cae el dado
            posy=(rand()%5+1)+y;
            for (int x=posx+((cta_vueltas-1)*10); x<=posx+((cta_vueltas-1)*10)+6; x++){
                for (int y=posy; y<=posy+2; y++){
                    rlutil::locate(x, y);
                    cout << (char) 219;
                }
            }
            //sombra del dado
            rlutil::setColor(rlutil::GREY);
            rlutil::setBackgroundColor(rlutil::LIGHTRED);
            rlutil::locate(posx+((cta_vueltas-1)*10)+7, posy);
            cout << (char) 220;
            for (int y=posy+1; y<=posy+2; y++){
                rlutil::locate(posx+((cta_vueltas-1)*10)+7, y);
                cout << (char) 219;
            }
            for (int x=posx+((cta_vueltas-1)*10)+1; x<=(posx+((cta_vueltas-1)*10)+7); x++){
                rlutil::locate(x, posy+3);
                cout << (char) 223;
            }
            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy);
            rlutil::setColor(rlutil::BLACK);
            rlutil::setBackgroundColor(rlutil::WHITE);
            cout << (char) 220;
            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy+2);
            cout << (char) 223;
            rlutil::locate(posx+((cta_vueltas-1)*10)+3, posy+1);
            cout << (char) 254;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy+2);
            cout << (char) 223;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy);
            cout << (char) 220;

            break;
        case 6:
            rlutil::msleep(200);
            rlutil::setColor(rlutil::WHITE);
            posx=(rand()%3+1)+x;//le da una posicion random donde cae el dado
            posy=(rand()%5+1)+y;
            for (int x=posx+((cta_vueltas-1)*10); x<=posx+((cta_vueltas-1)*10)+6; x++){
                for (int y=posy; y<=posy+2; y++){
                    rlutil::locate(x, y);
                    cout << (char) 219;
                }
            }
            //sombra del dado
            rlutil::setColor(rlutil::GREY);
            rlutil::setBackgroundColor(rlutil::LIGHTRED);
            rlutil::locate(posx+((cta_vueltas-1)*10)+7, posy);
            cout << (char) 220;
            for (int y=posy+1; y<=posy+2; y++){
                rlutil::locate(posx+((cta_vueltas-1)*10)+7, y);
                cout << (char) 219;
            }
            for (int x=posx+((cta_vueltas-1)*10)+1; x<=(posx+((cta_vueltas-1)*10)+7); x++){
                rlutil::locate(x, posy+3);
                cout << (char) 223;
            }
            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy);
            rlutil::setColor(rlutil::BLACK);
            rlutil::setBackgroundColor(rlutil::WHITE);
            cout << (char) 220;
            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy+2);
            cout << (char) 223;
            rlutil::locate(posx+((cta_vueltas-1)*10)+3, posy+2);
            cout << (char) 223;
            rlutil::locate(posx+((cta_vueltas-1)*10)+3, posy);
            cout << (char) 220;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy+2);
            cout << (char) 223;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy);
            cout << (char) 220;

            break;
        default:
            rlutil::setColor(rlutil::BLACK);
            rlutil::setBackgroundColor(rlutil::WHITE);
            posx=(rand()%3+1)+x;//le da una posicion random donde cae el dado
            posy=(rand()%5+1)+y;
            for (int x=posx+((cta_vueltas-1)*10); x<=posx+((cta_vueltas-1)*10)+6; x++){
                for (int y=posy; y<=posy+2; y++){
                    rlutil::locate(x, y);
                    cout << (char) 92;
                }
            }
            rlutil::setColor(rlutil::RED);
            rlutil::locate(posx+((cta_vueltas-1)*10), posy+1);
            cout << (char) 80;
            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy+1);
            cout << (char) 69;
            rlutil::locate(posx+((cta_vueltas-1)*10)+2, posy+1);
            cout << (char) 82;
            rlutil::locate(posx+((cta_vueltas-1)*10)+3, posy+1);
            cout << (char) 68;
            rlutil::locate(posx+((cta_vueltas-1)*10)+4, posy+1);
            cout << (char) 73;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy+1);
            cout << (char) 68;
            rlutil::locate(posx+((cta_vueltas-1)*10)+6, posy+1);
            cout << (char) 79;


            //sombra del dado
            rlutil::setColor(rlutil::GREY);
            rlutil::setBackgroundColor(rlutil::LIGHTRED);
            rlutil::locate(posx+((cta_vueltas-1)*10)+7, posy);
            cout << (char) 220;
            for (int y=posy+1; y<=posy+2; y++){
                rlutil::locate(posx+((cta_vueltas-1)*10)+7, y);
                cout << (char) 219;
            }
            for (int x=posx+((cta_vueltas-1)*10)+1; x<=(posx+((cta_vueltas-1)*10)+7); x++){
                rlutil::locate(x, posy+3);
                cout << (char) 223;
            }

            break;
}
}
rlutil::setColor(rlutil::BLACK);
rlutil::setBackgroundColor(rlutil::LIGHTRED);
rlutil::msleep(2000);
rlutil::cls();
}

//-------------------- DIBUJAR LOS DADOS Y SIN SOMBRA-----------------------
void tirar_dados_sin_sombra(int posx, int posy, int cantidad_dados, int vcantidad_dados[]){
int cta_vueltas=0;

    for (int i=0; i<cantidad_dados; i++){
    cta_vueltas++;
    switch(vcantidad_dados[i]){
        case 1:
            rlutil::setColor(rlutil::WHITE);

            for (int x=posx+((cta_vueltas-1)*10); x<=posx+((cta_vueltas-1)*10)+6; x++){

                for (int y=posy; y<=posy+2; y++){

                    rlutil::locate(x, y);
                    cout << (char) 219;
                }
            }


        rlutil::locate(posx+((cta_vueltas-1)*10)+3, posy+1);
        rlutil::setColor(rlutil::RED);
        rlutil::setBackgroundColor(rlutil::WHITE);
        cout << (char) 254;
            break;
        case 2:
            rlutil::msleep(100);
            rlutil::setColor(rlutil::WHITE);

            for (int x=posx+((cta_vueltas-1)*10); x<=posx+((cta_vueltas-1)*10)+6; x++){
                for (int y=posy; y<=posy+2; y++){
                    rlutil::locate(x, y);
                    cout << (char) 219;
                }
            }

            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy);
            rlutil::setColor(rlutil::BLACK);
            rlutil::setBackgroundColor(rlutil::WHITE);
            cout << (char) 220;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy+2);
            cout << (char) 223;

            break;
        case 3:
            rlutil::msleep(100);
            rlutil::setColor(rlutil::WHITE);

            for (int x=posx+((cta_vueltas-1)*10); x<=posx+((cta_vueltas-1)*10)+6; x++){
                for (int y=posy; y<=posy+2; y++){
                    rlutil::locate(x, y);
                    cout << (char) 219;
                }
            }

            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy);
            rlutil::setColor(rlutil::BLACK);
            rlutil::setBackgroundColor(rlutil::WHITE);
            cout << (char) 220;
            rlutil::locate(posx+((cta_vueltas-1)*10)+3, posy+1);
            cout << (char) 254;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy+2);
            cout << (char) 223;


            break;
        case 4:
            rlutil::msleep(50);
            rlutil::setColor(rlutil::WHITE);
            for (int x=posx+((cta_vueltas-1)*10); x<=posx+((cta_vueltas-1)*10)+6; x++){
                for (int y=posy; y<=posy+2; y++){
                    rlutil::locate(x, y);
                    cout << (char) 219;
                }
            }

            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy);
            rlutil::setColor(rlutil::BLACK);
            rlutil::setBackgroundColor(rlutil::WHITE);
            cout << (char) 220;
            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy+2);
            cout << (char) 223;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy+2);
            cout << (char) 223;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy);
            cout << (char) 220;


            break;
        case 5:
            rlutil::msleep(100);
            rlutil::setColor(rlutil::WHITE);

            for (int x=posx+((cta_vueltas-1)*10); x<=posx+((cta_vueltas-1)*10)+6; x++){
                for (int y=posy; y<=posy+2; y++){
                    rlutil::locate(x, y);
                    cout << (char) 219;
                }
            }

            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy);
            rlutil::setColor(rlutil::BLACK);
            rlutil::setBackgroundColor(rlutil::WHITE);
            cout << (char) 220;
            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy+2);
            cout << (char) 223;
            rlutil::locate(posx+((cta_vueltas-1)*10)+3, posy+1);
            cout << (char) 254;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy+2);
            cout << (char) 223;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy);
            cout << (char) 220;

            break;
        case 6:
            rlutil::msleep(200);
            rlutil::setColor(rlutil::WHITE);

            for (int x=posx+((cta_vueltas-1)*10); x<=posx+((cta_vueltas-1)*10)+6; x++){
                for (int y=posy; y<=posy+2; y++){
                    rlutil::locate(x, y);
                    cout << (char) 219;
                }
            }

            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy);
            rlutil::setColor(rlutil::BLACK);
            rlutil::setBackgroundColor(rlutil::WHITE);
            cout << (char) 220;
            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy+2);
            cout << (char) 223;
            rlutil::locate(posx+((cta_vueltas-1)*10)+3, posy+2);
            cout << (char) 223;
            rlutil::locate(posx+((cta_vueltas-1)*10)+3, posy);
            cout << (char) 220;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy+2);
            cout << (char) 223;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy);
            cout << (char) 220;

            break;
        default:
            rlutil::setColor(rlutil::BLACK);
            rlutil::setBackgroundColor(rlutil::WHITE);
            for (int x=posx+((cta_vueltas-1)*10); x<=posx+((cta_vueltas-1)*10)+6; x++){
                for (int y=posy; y<=posy+2; y++){
                    rlutil::locate(x, y);
                    cout << (char) 92;
                }
            }
            rlutil::setColor(rlutil::RED);
            rlutil::locate(posx+((cta_vueltas-1)*10), posy+1);
            cout << (char) 80;
            rlutil::locate(posx+((cta_vueltas-1)*10)+1, posy+1);
            cout << (char) 69;
            rlutil::locate(posx+((cta_vueltas-1)*10)+2, posy+1);
            cout << (char) 82;
            rlutil::locate(posx+((cta_vueltas-1)*10)+3, posy+1);
            cout << (char) 68;
            rlutil::locate(posx+((cta_vueltas-1)*10)+4, posy+1);
            cout << (char) 73;
            rlutil::locate(posx+((cta_vueltas-1)*10)+5, posy+1);
            cout << (char) 68;
            rlutil::locate(posx+((cta_vueltas-1)*10)+6, posy+1);
            cout << (char) 79;

            break;
}
}
rlutil::setColor(rlutil::BLACK);
rlutil::setBackgroundColor(rlutil::LIGHTRED);
}
