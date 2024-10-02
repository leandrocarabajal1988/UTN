///-------------------------------------Ejercicio 14--------------------------------------------------
///Hacer una función llamada esNumeroArmstrong que reciba un número entero y devuelva true si el número 
///enviado es un Número Armstrong y false si no lo es.
///NOTA: Un número N es un número Armstrong si la suma de sus cifras elevadas a la cantidad de 
///cifras del número da como resultado N.

///-----------------------------------funcion exponencial------------------------------------------------

int exponencial(int base, int exponente){
    int resultado=1;
    for (int i = 1; i <= exponente; i++)
    {
        resultado=resultado*base;
    }
    return resultado;
}

///funcion de N Armstrong
//ingreso de un nunero entero de x cantidad de numeros
int numeroArmstrong(int numero){
    int suma=0;
    int i=0;///contador de caracteres
    int caracter[10];
///guardo el valor de cada caracter en un espacio del vector caracter
    while (numero>0){
        caracter[i]=(numero%10);
        numero=numero/10;       
        i++;
    }
/// elevar cada caracter a la cantidad de caracteres y sumarlos
    for (int j = 0; j <=i; j++)
    {
        suma+=exponencial(caracter[j], i);
    }
    return suma;
}
/// pregama general 

#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int numero, armstrong;

///ingreso de variables
cout <<"ingresa el numero: "<< endl;
cin>>numero;
armstrong=numeroArmstrong(numero);
if(numero==armstrong){
    cout<<"el numero ingresado SI es un numero armstrong."<<endl;
}
else {
    cout<<"el numero ingresado NO es un numero armstrong."<<endl;
}
getch();
return 0;
}
