#include<iostream>
#include<conio.h>
using namespace std;

//genero la funcion redondear (float=>int)//
int redondear(float numero){
    int entero;
    float resto;
    
    entero=numero/1;
    resto=numero-entero;
    if(resto<0.5){
        return entero;
    }
    else{
        return (entero+1);
    }
}

//realizo el programa con el ingreso de datos//
int main(){
    float numero;
    int redondeo;
    cout<<"ingrese un numero: "<<endl;
    cin>>numero;
    redondeo=(redondear(numero));
    cout<<"redondear: "<<redondeo<<endl;

    getch();
    return 0;
}
