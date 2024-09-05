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
if (contdivisores==2){
    cout << "el numero es primo" << endl;
}
else {
    cout << "el numero NO es primo" << endl; 
}

getch ();
return 0;

}