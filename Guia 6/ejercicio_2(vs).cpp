#include<iostream>
#include<conio.h>
using namespace std;

int calcularMaximo (int numero1, int numero2){
    
    if(numero1<numero2){
        return numero2;
    }
   return numero1;
}

int main(){
    int numero1, numero2,maximo;

    cout <<"ingresa el primer numero"<<endl;
    cin>>numero1;
    cout<<"ingresa el segundo numero"<<endl;
    cin>>numero2;
    maximo=calcularMaximo(numero1, numero2);
    cout<<"el numero maximo es "<<maximo;

getch();
return 0;
}
