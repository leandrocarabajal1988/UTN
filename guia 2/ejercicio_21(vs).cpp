#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    /*variables:
    acucarterasblancas
    acucarterasnegras
    acucarterasmarron
    acucarterasgris
    tipocartera
    cantidad*/

int tipocartera, cantidad;
int acu1=45, acu2=50, acu3=40, acu4=49,acuventas1=0,acuventas2=0,acuventas3=0,acuventas4=0, total;

    
for (int i = 1; i <= 3; i++)
{
    cout<<"ingrese el tipo de carteras vendida"<<endl;
    cout<<" (1-blanco, 2-negro, 3-marron, 4-gris): "<<endl;
    cin>>tipocartera;
    cout<<"ingrese la cantidad de carteras vendidas: "<<endl;
    cin>>cantidad;

     switch (tipocartera)
    {
    case 1:
        acu1=acu1-cantidad;
        acuventas1=acuventas1+cantidad;
        break;
    case 2:
        acu2=acu2-cantidad;
        acuventas2=acuventas2+cantidad;
        break;
    case 3:
        acu3=acu3-cantidad;
        acuventas3=acuventas3+cantidad;
        break;
    case 4:
        acu4=acu4-cantidad;
        acuventas4=acuventas4+cantidad;
        break;
    default:
        break;
    }
}
total=acuventas1+acuventas2+acuventas3+acuventas4;
cout<<endl<<endl;
cout<<"el total de carteras vendidas es: "<<total<<endl;
cout<<endl;
cout<<"stock de carteras_"<<endl;

cout<<"---------------------------------------------------------------------"<<endl;
cout<<"|    tipo    |   blanco    |    negro    |    marron    |    gris   |"<<endl;
cout<<"---------------------------------------------------------------------"<<endl;
cout<<"| cantidades |     "<<acu1<<"      |      "<<acu2<<"     |     "<<acu3<<"       |     "<<acu4<<"    |"<<endl;
cout<<"---------------------------------------------------------------------"<<endl;

if(acuventas1==0){
cout<<"no se vendieron carteras blancas"<<endl;
}
if(acuventas2==0){
cout<<"no se vendieron carteras negras"<<endl;
}
if(acuventas3==0){
cout<<"no se vendieron carteras marrones"<<endl;
}
if(acuventas4==0){
cout<<"no se vendieron carteras grices";
}

getch();
return 0;


}