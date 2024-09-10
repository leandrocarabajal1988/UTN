#include <iostream>
#include<conio.h>
using namespace std;

int main(){
    int numero1, numero2;

    cout << "ingrese dos números: " <<endl;
    cin>>numero1>>numero2;
    cout<< "los números entre los numeros ingresados son; " << endl <<endl;

    if (numero1<numero2)
    {
        for (int i = numero1+1; i < numero2; i++)
        {
            cout << i <<endl;
        }
        
    }
    else {
        for (int i = numero2+1; i < numero1; i++)
        {
            cout << i <<endl;
        }
        
    }
    
getch();
return 0;
}