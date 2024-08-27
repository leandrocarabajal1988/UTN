#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    
    /*declaracion de variables:
    año:año ingresado*/

int año;

    cout<<"ingrese un año: "<< endl;
    cin>>año;

    if(año%100==0){
        if((año%400)==0){
        cout<<"es biciesto";
        }
        else{
            cout<<"no es biciesto.";
        }
    }
    else if((año%4)==0){
        cout<<"es biciesto.";
    }
    else {
        cout<<"no es biciesto.";
    }
getch ();
return 0;

}