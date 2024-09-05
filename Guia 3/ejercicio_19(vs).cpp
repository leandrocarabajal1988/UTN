#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int  numero;
int contdivisores=0;

cout << "ingrese un numero" << endl;
cin >> numero;

for (int i = 1; i <=numero; i++)
{
        if(numero % i==0){
            
        contdivisores++;
    }
}

cout << "la  divisores numero son:" << contdivisores << endl;


getch ();
return 0;

}