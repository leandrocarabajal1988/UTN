#include "conio.h"
#include <iostream>
#include <string.h>
#include <unistd.h>
using namespace std;
int main(){

string texto=texto;

puntos_suspensivos(texto, 3, 1);


}

void puntos_suspensivos(string texto, int cantidad, int segundos){

    for(int i=1; i<=cantidad; i++){
        cout<<texto;
        sleep(segundos);
    }
}