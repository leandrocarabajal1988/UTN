#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int base;
int exponente;
int resultado=1;
cout<<"base"<<endl;
cin>>base;
cout<<"exponente"<<endl;
cin>>exponente;

    for (int i = 1; i <= exponente; i++)
    {
        resultado=resultado*base;
    }
    cout<< resultado;




getch ();
return 0;
}