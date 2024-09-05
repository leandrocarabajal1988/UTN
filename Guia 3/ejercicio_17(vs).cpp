#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int  numero;

cout << "ingrese un numero" << endl;
cin >> numero;
cout << "los divisores de este numero son:" << endl;
for (int i = 1; i <=numero; i++)
{
        if(numero % i==0){
        cout << i << endl;
    }
}
getch ();
return 0;

}