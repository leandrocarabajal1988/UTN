//aca van las funciones de la/s tirada de dados

#include "dados.h"
#include <iostream>
using namespace std;
//-------------------------------------------------------------

int tirar_dado(){
    int resultado_dado;
    resultado_dado=rand()%6+1;

    return resultado_dado;
}

//-------------------------------------------------------------



