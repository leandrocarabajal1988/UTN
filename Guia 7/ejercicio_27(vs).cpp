/*Una empresa de transporte de carga por camión Dispone de un lote de registros con la siguiente información:
●	Número de Tarifa (1 a 20)
●	Importe por KM.*/

/*dispone de un segundo lote de registros con la información de los envíos que se realizaron durante la semana pasada, conteniendo cada uno de ellos los siguientes campos:
●	Número de Camión (1 a 100)
●	Número de Tarifa
●	Kilómetros recorridos*/
/*Este lote finaliza con un registro con número de camión negativo.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int tarifa;
float vTarifa[20]{};///vector donde se guardara el valor de la tarifa del recorrido
float importePorTarifa;
float vTarifaPorKilometro[20]{};///vector de acumuladores donde guardo el total de cada tarifa
int numeroCamion;
int vRecaudacionPorCamion[100]{};///vector acumulador de la ganancia TOTAL de cada camion
int camionMenosRecorrido;
float kilometrosRecorridos;
bool primerCamion=true;///para el primer camion que hace kilometros

///---------------------------------ingreso del lote 1-------------------------------------------
cout<<"DATOS DEL LOTE NUMERO 1 (TARIFAS POR KILOMETROS)"<<endl;

for (int i = 1; i <= 20; i++)
{
    cout<<"ingrese el numero de tarifa a asignar "<<endl;
    cin>>tarifa;
    cout <<"ingrese el valor del importe por kilometro de la tarifa "<<tarifa<<endl;
    cin>> importePorTarifa;

    vTarifa[tarifa-1]=importePorTarifa;

}
cout<<endl<<endl;
///--------------------------------ingreso del lote 2-----------------------------------------------
cout<<"DATOS DEL LOTE NUMERO 2 (CAMIONES Y SUS RECORRIDOS)"<<endl;

cout<<"ingrese el numero del camion (PARA SALIR INGRES UN NUMERO NEGATIVO)"<<endl;
cin>>numeroCamion;

while (numeroCamion>0){
    cout<<"ingrese el numero de tarifa"<<endl;
    cin>>tarifa;
    cout<<"ingrese los kilometros recorridos "<<endl;
    cin>>kilometrosRecorridos;

    vTarifaPorKilometro[tarifa-1]+=vTarifa[tarifa-1]*kilometrosRecorridos;

    vRecaudacionPorCamion[numeroCamion-1]+=vTarifa[tarifa-1]*kilometrosRecorridos;

    if (kilometrosRecorridos>0){
        if (primerCamion){
            camionMenosRecorrido=numeroCamion;
            primerCamion=false;
        }
        else if (vRecaudacionPorCamion[numeroCamion-1]<vRecaudacionPorCamion[camionMenosRecorrido-1]){
            camionMenosRecorrido=numeroCamion;
        }
    }       
    cout<<"ingrese el numero del camion (PARA SALIR INGRESE UN NUMERO NEGATIVO)"<<endl;
    cin>>numeroCamion;    
}

///a) El total recaudado por cada tarifa.
for (int i = 0; i < 20; i++)
{
    cout<<"el total recaudado de la tarifa "<<(i+1)<<" es "<<vTarifaPorKilometro[i]<<endl;
}
cout<<endl;
///b) Un listado como el siguiente:
///Número Camión	Total recaudado (en $)

cout<<"Numero Camion"<<"\t"<<"Total recaudado (en $)"<<endl;
for (int i = 0; i < 100; i++){    
    cout<<"  "<<(i+1)<<"\t"<<"\t"<<"\t"<<vRecaudacionPorCamion[i]<<endl;
}
cout<<endl;

///c) Indicar el número de camión que recorrió la menor cantidad de kilómetros, excluyendo a aquellos camiones que no realizaron ningún viaje.
cout<<"el camion con menor recorrido es el camion numero "<<camionMenosRecorrido<<endl;



getch();
return 0;



}