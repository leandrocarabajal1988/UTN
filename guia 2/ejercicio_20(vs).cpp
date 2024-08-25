#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    /*variables:
    mayor a 30 mayor 
    mayor a 1.8m
    personas entre 1.7 a 1.8
    edad 20
    edad 30
    edad 40*/

    int contmas30=0, contmas180=0, contentre=0, cont20=0, cont30=0, cont40=0, edad;
    float altura, prommas30=0, promedioaltura=0;
    
for (int i=0; i<5; i++)
{
   
   cout<<"ingrese la edad de la persona: "<<endl;
    cin>>edad;
    cout<<"ingrese la altuda de la persona (en metros): "<<endl;
    cin>>altura;

if(edad>30){
    contmas30++;
    prommas30=prommas30+altura;
    if(altura>1.8){
    contmas180++;
    }
}
if((altura>=1.7) && (altura<=1.8)){
    contentre++;
}
if(edad==20){
    cont20++;
}
if(edad==30){
    cont30++;
}
if(edad==40){
    cont40++;
}
}

promedioaltura=prommas30/contmas30;
cout<<"cantidad de personas mayores a 30 años y 1.8 metros de altura son: " <<contmas180 <<endl;

promedioaltura=prommas30/contmas30;
cout<<"el promedio de altura de las personas de mas de 30 años es: "<<promedioaltura<<" metros"<<endl;

cout<<"la cantidad de personas entre 1.7m y 1.8m es: "<<contentre<<endl;
cout<<"las personas con 20 años son: "<<cont20<<endl;
cout<<"las personas con 30 años son: "<<cont30<<endl;
cout<<"las personas con 40 años son: "<<cont40<<endl;

    




    
getch();
return 0;

}