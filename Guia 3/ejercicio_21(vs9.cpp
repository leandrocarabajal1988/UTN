#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int  numero;
int acudivisores=0;

cout << "ingrese un numero" << endl;
cin >> numero;

for (int i = 1; i <numero; i++)
{
        if(numero % i==0){
            
        acudivisores+=i;
    }
}
if (acudivisores==numero){
    cout << "el numero es perfecto" << endl;
}
else {
    cout << "el numero NO es perfecto" << endl; 
}

getch ();
return 0;

}