#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    /*variables:
    n1: primer numero, n2:segundo numero, n3: tercer numero, n4: cuarto numero*/

    float n1, n2, n3, n4;
cout<<"ingrese 4 numeros:"<<endl;
cin>>n1>>n2>>n3>>n4;

    if(n4>=n3){
        if(n3>=n2){
            if(n2>=n1){
                cout<<"los numeros estan ordenados.";
            }
            else{
                cout<<"los numeros estan desordenados.";
            }
        }
        else{
                cout<<"los numeros estan desordenados.";
            }
        }
    else{
        cout<<"los numeros estan desordenados.";
    }

getch();
return 0;
}