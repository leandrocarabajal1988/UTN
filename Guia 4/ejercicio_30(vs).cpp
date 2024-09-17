#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int sucursal, saldo, cliente;
int saldomayor, clientesaldomayor, sucursalclientesaldomayor; 
int sumasaldo1=0, contcliente1=0, sumasaldomayor1=0;
int sumasaldo2=0, contcliente2=0, sumasaldomayor2=0;
float porcentajesucursal1=0, porcentajesucursal2=0; 

//primer ingreso asigno los valores de partida//
cout <<"para finalizar ingrese 10" <<endl;
cout << "ingrese el numero de sucursal: " << endl;
cin >> sucursal;
cout << "ingrese el numero de cliente; " << endl;
cin >> cliente;
cout << "ingrese el saldo de cliente: " << endl;
cin >> saldo;

saldomayor=saldo;
clientesaldomayor=cliente;
sucursalclientesaldomayor=sucursal;
cout <<endl <<endl;

cout <<"para finalizar ingrese 10" <<endl;
cout << "ingrese el numero de sucursal: " << endl;
cin >> sucursal;

//ingreso del resto de los datos//
while (sucursal!=10)
{
    switch (sucursal)
    {
    
    case 2:
        
        cout << "ingrese el numero de cliente; " << endl;
        cin >> cliente;
        cout << "ingrese el saldo de cliente: " << endl;
        cin >> saldo;
        sumasaldo2=sumasaldo2+saldo;
        
        if(saldo>20000){
            contcliente2++;
            sumasaldomayor2=+saldo;

        }
        if(saldo>saldomayor){
            saldomayor=saldo;
            clientesaldomayor=cliente; 
            sucursalclientesaldomayor=sucursal;
        }

        cout <<endl <<endl;
        cout <<"para finalizar ingrese 10" <<endl;
        cout << "ingrese el numero de sucursal: " << endl;
        cin >> sucursal;

        break;   
    default:
        break;
    }
    
}

cout <<endl <<endl;

//punto a) //
porcentajesucursal1=sumasaldomayor1/contcliente1;
porcentajesucursal2=sumasaldomayor2/contcliente2;
cout <<endl;

//punto b)   //
cout << "el numero de cliente con mayor saldo es: " << clientesaldomayor <<endl;
cout << "este cliente pertenece a la sucursal N: " << sucursalclientesaldomayor << endl;
cout <<endl;
//punto c)    //

cout << "-----------------------------------------------------------------"<<endl;
cout <<"|             |  sucursal 1 | sucursal 2 | sucursal 3 | sucursal 4|" << endl;
cout <<"|-----------------------------------------------------------------|" << endl;
cout <<"|saldo totoal |  "<< sumasaldo1 <<"    |  "<< sumasaldo2 <<"    |            |           |" << endl;




getch();
return 0;



}