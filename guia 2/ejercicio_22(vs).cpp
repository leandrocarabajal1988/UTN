#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    /*variables:

    presu: presupuesto                                              
    caramel: cantidad de caramelos a prducir
    mant: consto de mantenimiensto cada 100 caramelos          
    alquiler:valor del alquiler  
    cost: conto total del mantemient
    presu:presupuesto inicial 
    credito: credito a pedir si hace falta  
    produ:costo total de la produccion por mes*/


int caramel;
float produ, presu, credito;

cout<<"ingrese el monto del presupuesto inicial"<<endl;
cin>>presu;
cout<<"ingrese la canidad de caramelos: "<<endl;
cin>>caramel;

produ=10000+(2.5*caramel)+(5000*(caramel/100));

if(produ>presu){
    credito=produ-presu;
    cout<<"el presupuesto no es suficiente, se debe pedir un credito de "<<credito<<endl;

}
else{
    cout<<"el presupuesto es sufiiente para cubrir los  "<<caramel<<" caramelos"<<endl;
}


getch ();
    return 0;

}