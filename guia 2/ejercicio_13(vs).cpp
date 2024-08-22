#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    /*declaro variables
    n1:primer numero, n2:segundo numero, n3:tercer numero
    nnmayor:N° mayor, nmenor:N°menor, nmedio:N° del medio*/

float n1, n2, n3;
float nmayor, nmenor, nmedio;

cout<<"ingrese 3 numeros:"<< endl;
cin>>n1>>n2>>n3;

if (n1>n2){
    if(n1>n3){
        //rama de nmayor=n1//
        if(n2>n3){
            nmayor=n1;
            nmedio=n2;
            nmenor=n3;
        }
        else{
            nmayor=n1;
            nmedio=n3;
            nmenor=n2;
        }
    }   
    //rama de nmayor=n3//
    else {
        nmayor=n3;
        nmedio=n1;
        nmenor=n2;
    }
}
else if(n2>n3){
        //rama nmayor=n2//
    if(n1>n3){
            nmayor=n2;
            nmedio=n1;
            nmenor=n3;
        }
        else{
            nmayor=n2;
            nmedio=n3;
            nmenor=n1;
        }
}
else {
    //rama nmayor=n3//
    nmayor=n3;
    nmedio=n2;
    nmenor=n1;
}    
        

cout<<"el numero mayor es: "<<nmayor<<endl;
cout<<"el numero del medio es: "<<nmedio<<endl;
cout<<"el numero menor es: "<<nmenor<<endl;

getch();
return 0;


}