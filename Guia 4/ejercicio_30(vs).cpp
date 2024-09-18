#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int sucursal, saldo, cliente;
float saldomayor, clientesaldomayor, sucursalclientesaldomayor, cuentamayor, numerodecuentamayor; 
float sumasaldo1=0, contcliente1=0, sumasaldomayor1=0;
float sumasaldo2=0, contcliente2=0, sumasaldomayor2=0;
float sumasaldo3=0, contcliente3=0, sumasaldomayor3=0;
float sumasaldo4=0, contcliente4=0, sumasaldomayor4=0;
bool primero=true;
float porcentajesucursal1, porcentajesucursal2, porcentajesucursal3, porcentajesucursal4;

//primer ingreso //
cout << "ingrese el numero de sucursal: " << endl;
cin >> sucursal;

while (sucursal!=10)
{
    switch (sucursal)
    {    
    case 1:
        cout << "ingrese el numero de cliente; " << endl;
        cin >> cliente;
        cout << "ingrese el saldo de cliente: " << endl;
        cin >> saldo;
        //acumulo todos los saldos de la cuenta//
        sumasaldo1+=saldo;
        //acumulo para el promedio de los sueldos mayores a 20000//
        if(saldo>20000){
            contcliente1++;
            sumasaldomayor1+=saldo;
        }
        //aca entro si es el primer numero que ingreso para empezar las comparaciones//
        if(primero){
            saldomayor=saldo;
            clientesaldomayor=cliente;
            sucursalclientesaldomayor=sucursal;
            primero=false;
        } 
        //guardo dtos del cliente con saldo mayor//
        if(saldo>saldomayor){
            saldomayor=saldo;
            clientesaldomayor=cliente; 
            sucursalclientesaldomayor=sucursal;
        }
        //vuelvo a pedir datos de otro cliente//
        cout <<endl <<endl;
        cout <<"para finalizar ingrese 10" <<endl;
        cout << "ingrese el numero de sucursal: " << endl;
        cin >> sucursal;
        break; 
    case 2:
        cout << "ingrese el numero de cliente; " << endl;
        cin >> cliente;
        cout << "ingrese el saldo de cliente: " << endl;
        cin >> saldo;
        //acumulo todos los saldos de la cuenta//
        sumasaldo2+=saldo;
        //acumulo para el promedio de los sueldos mayores a 20000//
        if(saldo>20000){
            contcliente2++;
            sumasaldomayor2+=saldo;
        }
        //aca entro si es el primer numero que ingreso para empezar las comparaciones//
        if(primero){
            saldomayor=saldo;
            clientesaldomayor=cliente;
            sucursalclientesaldomayor=sucursal;
            primero=false;
        } 
        //guardo dtos del cliente con saldo mayor//
        if(saldo>saldomayor){
            saldomayor=saldo;
            clientesaldomayor=cliente; 
            sucursalclientesaldomayor=sucursal;
        }
        //vuelvo a pedir datos de otro cliente//
        cout <<endl <<endl;
        cout <<"para finalizar ingrese 10" <<endl;
        cout << "ingrese el numero de sucursal: " << endl;
        cin >> sucursal;
        break; 
    case 3:
        cout << "ingrese el numero de cliente; " << endl;
        cin >> cliente;
        cout << "ingrese el saldo de cliente: " << endl;
        cin >> saldo;
        //acumulo todos los saldos de la cuenta//
        sumasaldo3+=saldo;
        //acumulo para el promedio de los sueldos mayores a 20000//
        if(saldo>20000){
            contcliente3++;
            sumasaldomayor3+=saldo;
        }
        //aca entro si es el primer numero que ingreso para empezar las comparaciones//
        if(primero){
            saldomayor=saldo;
            clientesaldomayor=cliente;
            sucursalclientesaldomayor=sucursal;
            primero=false;
        } 
        //guardo dtos del cliente con saldo mayor//
        if(saldo>saldomayor){
            saldomayor=saldo;
            clientesaldomayor=cliente; 
            sucursalclientesaldomayor=sucursal;
        }
        //vuelvo a pedir datos de otro cliente//
        cout <<endl <<endl;
        cout <<"para finalizar ingrese 10" <<endl;
        cout << "ingrese el numero de sucursal: " << endl;
        cin >> sucursal;
        break;
    case 4:
        cout << "ingrese el numero de cliente; " << endl;
        cin >> cliente;
        cout << "ingrese el saldo de cliente: " << endl;
        cin >> saldo;
        //acumulo todos los saldos de la cuenta//
        sumasaldo4+=saldo;
        //acumulo para el promedio de los sueldos mayores a 20000//
        if(saldo>20000){
            contcliente4++;
            sumasaldomayor4+=saldo;
        }
        //aca entro si es el primer numero que ingreso para empezar las comparaciones//
        if(primero){
            saldomayor=saldo;
            clientesaldomayor=cliente;
            sucursalclientesaldomayor=sucursal;
            primero=false;
        } 
        //guardo dtos del cliente con saldo mayor//
        if(saldo>saldomayor){
            saldomayor=saldo;
            clientesaldomayor=cliente; 
            sucursalclientesaldomayor=sucursal;
        }
        //vuelvo a pedir datos de otro cliente//
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
if(contcliente1==0){
    porcentajesucursal1=0;
}
else{
    porcentajesucursal1=sumasaldomayor1/contcliente1;
}
if(contcliente2==0){
    porcentajesucursal2=0;
}
else{
    porcentajesucursal2=sumasaldomayor2/contcliente2;
}
if(contcliente3==0){
    porcentajesucursal3=0;
}
else{
    porcentajesucursal3=sumasaldomayor3/contcliente3;
}
if(contcliente4==0){
    porcentajesucursal4=0;
}
else{
    porcentajesucursal4=sumasaldomayor4/contcliente4;
}

/*
cout <<"el porcentaje 1 es " << porcentajesucursal1 << endl <<endl;
cout <<"el porcentaje 2 es " << porcentajesucursal2 << endl <<endl;
cout <<"el porcentaje 3 es " << porcentajesucursal3 << endl <<endl;
cout <<"el porcentaje 4 es " << porcentajesucursal4 << endl <<endl;
*/

if(porcentajesucursal1>porcentajesucursal2){
    cuentamayor=porcentajesucursal1;
    numerodecuentamayor=1;
}
else{
    cuentamayor=porcentajesucursal2;
    numerodecuentamayor=2;
}
if(porcentajesucursal3>cuentamayor){
    cuentamayor=porcentajesucursal3;
    numerodecuentamayor=3;
}
if(porcentajesucursal4>cuentamayor){
    cuentamayor=porcentajesucursal4;
    numerodecuentamayor=4;
}
if(cuentamayor==0){
    cout << "NO hay cuenta con ingresos mayor a 20000" <<endl;
}
else{
    cout <<"la cuenta con mayor promedio mayor a 20000 es la cuenta N   " <<numerodecuentamayor<<" con un promedio de " << cuentamayor <<endl;
}

//punto b)   //
cout << "el numero de cliente con mayor saldo es: " << clientesaldomayor << endl;
cout << "y tiene un saldo de: " << saldomayor << endl;
cout << "este cliente pertenece a la sucursal N: " << sucursalclientesaldomayor << endl;
cout << endl;
//punto c)    //

cout << "-----------------------------------------------------------------"<< endl;
cout <<"|             |  sucursal 1 | sucursal 2 | sucursal 3 | sucursal 4|" << endl;
cout <<"|-----------------------------------------------------------------|" << endl;
cout <<"|saldo totoal |  "<< sumasaldo1 <<"       |  "<< sumasaldo2 <<"    |   "<< sumasaldo3 <<"    |   "<< sumasaldo4 <<"    |   " << endl;

getch();
return 0;
}