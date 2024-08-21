#include<iostream>
#include<conio.h>
using namespace std;

 

int main()
{
    /*variables
    numero=los numeros ingresados
    contadores:
    neg=cantidad de numeros negativos
    pos:cantidad de numeros positivos
    cero:cantidad de ceros*/

    int pos=0, neg=0, cero=0;
    float numero;
    
    
    for(int n=0; n<5; n++){
    
        cout<< "ingrese un numero ";
        cin>> numero;
        
        if(numero>0){
            pos++;
            }
        else if(numero<0){
            neg++;
            }
            else{
            cero++;
            }
        
    
    }
   cout<<"cantidad de números positivos: "<<pos<<endl;
   cout<<"cantidad de números negativos: "<<neg<<endl;
   cout<<"cantidad de ceros: "<<cero<<endl;

    getch();
    return 0;
}

   
    