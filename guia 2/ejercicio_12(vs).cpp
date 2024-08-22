#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    /*variables:
    n1: primer numero
    n2:segundo numero
    n3: tercer nuemro*/

float nmedio, n1, n2, n3;

    cout<<"ingrese tres numeros: " <<endl;
    cin>> n1>>n2>>n3;

    if(n1>n2){
        if(n1>n3){
            if(n2>n3){
                nmedio=n2;
            }
            else{
                nmedio=n3;
            }
        }   
        else{
            nmedio=n1;
            } 
    }   
    else if(n2>n3){
            if(n1>n3){
            nmedio=n1;
            }
            else {
                nmedio=n3;
            }
        }
        else{
            nmedio=n2;
        }
    

    cout<<"el numero del medio es: "<<nmedio;

getch();
return 0;

}