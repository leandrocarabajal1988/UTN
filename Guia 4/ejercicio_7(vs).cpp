#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int numero=1, numeromax;    
bool primero=true;

while (numero!=0)
{
    cout << "ingresa un numero " << endl;
    cin >> numero;
    
    if(primero){
        numeromax=numero;
        primero=false;
    }    
    else if ((numero>numeromax) && (numero!=0)){
        numeromax=numero;
    }
    
}
cout << "el numero maximo es: " << numeromax << endl;
getch();
return 0;

}