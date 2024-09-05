#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int numero, orden;
    bool desorden=false;
    cout << "ingrese el primer numero" << endl;
    cin >> numero;
    orden=numero;

    for (int i = 2; i <=8; i++)
    {
        cout << "ingrese el siguiente numero" << endl;
        cin >> numero;
        if (orden<=numero){
            orden=numero;
        }
        else{
            desorden=true;
        }
    }
    
if(desorden==false){
    cout << "conjunto ordenado" << endl;
}
else{
    cout << "conjunto NO ordenado" << endl;
}
getch ();
return 0;


}