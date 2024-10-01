#include <iostream>
#include <conio.h>
using namespace std;

bool esPar(int numero){
    if ((numero!=0) && (numero%2==0)){
       return true;
    }
    return false;
}
int main (){

    int numero;

    cout << "ingrese un numero"<< endl;
    cin >>numero;
    if(esPar(numero)){
        cout <<"el numero es par";
    }
    else{
        cout << "el numero NO es par";
    }
    
getch ();
return 0;
}