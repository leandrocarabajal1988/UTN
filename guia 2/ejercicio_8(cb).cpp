#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    /*variables:
    l1=lado 1, l2=lado 2, l3=lado 3*/

    float l1, l2, l3;

    cout<<"ingrese los tres lados de un triangulo: "<<endl;
    cin>>l1>>l2>>l3;

     if(l1==l2){
        if(l2==l3){
            cout<<"el triangulo es equilatero";
        }
            else if(l1==l3){
                cout<<"el triangulo es isoceles";
        }
        else if(l2=l3){
        cout<<"el triangulo es isoceles";
     }
     else {
         cout<<"el triangulo es isoceles";
     }
     }
    getch();
    return 0;
}