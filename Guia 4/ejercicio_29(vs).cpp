#include<iostream>
#include<conio.h>
using namespace std;
int main(){

//variables de entrada//
int cliente, localidad, consumo;
//acumuladores //
float consumo1=0, consumo2=0, consumo3=0, facturaciontotal1=0, facturaciontotal2=0, facturaciontotal3=0;
// para calculos //
float facturacion1, consumomax1, consumomin1, clientemax1, clientemin1;
float facturacion2, consumomax2, consumomin2, clientemax2, clientemin2;
float facturacion3, consumomax3, consumomin3, clientemax3, clientemin3;
int cargofijo=100;
//bandera para el primer ingreso de cada localidad//
bool primero1=true, primero2=true, primero3=true;

//comienzo con el ingeso del N del cliente/ el ingreso de cliente 0 da fin al programa//
cout << "ingrese el numero de cliente: " << endl;
cin >> cliente;

while (cliente!=0)
{
    cout << "ingrese la localidad del cliente: " << endl;
    cin >>localidad;

    switch (localidad)
    {
    case 1: //hago el proceso para la localidad 1 //
        cout << "ingrese el consumo del cliente: " << endl;
        cin >> consumo;
        //sumo todos los consumos que entran/7
        consumo1+=consumo;
        if(primero1){  //por aca solo paso en el primer ingreso para asignar valores maximos y minimos//
            consumomax1=consumo;
            consumomin1=consumo;
            clientemax1=cliente;
            clientemin1=cliente;
            primero1=false;
        }   //busco el cliente con el maximo consumo//
        if(consumo>consumomax1){
            consumomax1=consumo;
            clientemax1=cliente;
        }   //busco el cliente con menor consumo//
        if(consumo<consumomin1){
            consumomin1=consumo;
            clientemin1=cliente;
        }   
        //calculo los consumos totales (voy de consumo cero a mas) //
        if(consumo==0){   //cliente sin consumo//
            facturacion1=100;
        }   
        //cliente con consumo menor a 100kw//
        if(consumo<100){
            facturacion1=cargofijo+(consumo*10);            
        }   
        //cliente con consumo menor a 200 kw//
        else if(consumo<200){
            facturacion1=cargofijo+((100)*10)+(((consumo-100)*12));
        }   
        //cliente con consumo mayor a 200 kw//
        else if(consumo>200){
            facturacion1=cargofijo+((100)*10)+(((100)*12)+((consumo-200)*15));
        }
        //sumo todos los consumos//
        facturaciontotal1+=facturacion1;
        cout << endl;
        cout << endl;

        //vuelvo a pedir el numero de cliente para volver a ingresar datos//
        cout << "para finalizar ingrese cliente 0 (cero)" << endl;
        cout << "ingrese el numero de cliente: " << endl;
        cin >> cliente;
        break;
    case 2:
        //hago el proceso para la localidad 2 //
        cout << "ingrese el consumo del cliente: " << endl;
        cin >> consumo;
        //sumo todos los consumos que entran/7
        consumo2+=consumo;
        if(primero2){  //por aca solo paso en el primer ingreso para asignar valores maximos y minimos//
            consumomax2=consumo;
            consumomin2=consumo;
            clientemax2=cliente;
            clientemin2=cliente;
            primero2=false;
        }   //busco el cliente con el maximo consumo//
        if(consumo>consumomax2){
            consumomax2=consumo;
            clientemax2=cliente;
        }   //busco el cliente con menor consumo//
        if(consumo<consumomin2){
            consumomin2=consumo;
            clientemin2=cliente;
        }   
        //calculo los consumos totales (voy de consumo cero a mas) //
        if(consumo==0){   //cliente sin consumo//
            facturacion2=100;
        }   
        //cliente con consumo menor a 100kw//
        if(consumo<100){
            facturacion2=cargofijo+(consumo*10);            
        }   
        //cliente con consumo menor a 200 kw//
        else if(consumo<200){
            facturacion2=cargofijo+((100)*10)+(((consumo-100)*12));
        }   
        //cliente con consumo mayor a 200 kw//
        else if(consumo>200){
            facturacion2=cargofijo+((100)*10)+(((100)*12)+((consumo-200)*15));
        }
        //sumo todos los consumos//
        facturaciontotal2+=facturacion2;
        cout << endl;
        cout << endl;

        //vuelvo a pedir el numero de cliente para volver a ingresar datos//
        cout << "para finalizar ingrese cliente 0 (cero)" << endl;
        cout << "ingrese el numero de cliente: " << endl;
        cin >> cliente;
        break;
    case 3:
        //hago el proceso para la localidad 3 //
        cout << "ingrese el consumo del cliente: " << endl;
        cin >> consumo;
        //sumo todos los consumos que entran/7
        consumo3+=consumo;
        if(primero3){  //por aca solo paso en el primer ingreso para asignar valores maximos y minimos//
            consumomax3=consumo;
            consumomin3=consumo;
            clientemax3=cliente;
            clientemin3=cliente;
            primero3=false;
        }   //busco el cliente con el maximo consumo//
        if(consumo>consumomax3){
            consumomax3=consumo;
            clientemax3=cliente;
        }   //busco el cliente con menor consumo//
        if(consumo<consumomin3){
            consumomin3=consumo;
            clientemin3=cliente;
        }   
        //calculo los consumos totales (voy de consumo cero a mas) //
        if(consumo==0){   //cliente sin consumo//
            facturacion3=100;
        }   
        //cliente con consumo menor a 100kw//
        if(consumo<100){
            facturacion3=cargofijo+(consumo*10);            
        }   
        //cliente con consumo menor a 200 kw//
        else if(consumo<200){
            facturacion3=cargofijo+((100)*10)+(((consumo-100)*12));
        }   
        //cliente con consumo mayor a 200 kw//
        else if(consumo>200){
            facturacion3=cargofijo+((100)*10)+(((100)*12)+((consumo-200)*15));
        }
        //sumo todos los consumos//
        facturaciontotal3+=facturacion3;
        cout << endl;
        cout << endl;

        //vuelvo a pedir el numero de cliente para volver a ingresar datos//
        cout << "para finalizar ingrese cliente 0 (cero)" << endl;
        cout << "ingrese el numero de cliente: " << endl;
        cin >> cliente;
        break;

    default:
        break;
    }
}
cout << endl << endl;

//  respuesta punto a)  //
if(primero1){
    cout << "No se ingresaron clientes de la localidad 1." <<endl;
}
else {
    cout << "el cliente que tuvo la mayor cantidad de Kilovatios consumidos de la localidad 1 fue el clientre numero: " <<clientemax1<< endl;
    cout << "cuyo consumo fue de : " <<consumomax1<< " kilovatios." <<endl;
}
if(primero2){
    cout << "No se ingresaron clientes de la localidad 2." <<endl;
}
else {
    cout << "el cliente que tuvo la mayor cantidad de Kilovatios consumidos de la localidad 2 fue el clientre numero: " <<clientemax2<< endl;
    cout << "cuyo consumo fue de : " <<consumomax2<< " kilovatios." <<endl;
}
if(primero3){
    cout << "No se ingresaron clientes de la localidad 1." <<endl;
}
else {
    cout << "el cliente que tuvo la mayor cantidad de Kilovatios consumidos de la localidad 3 fue el clientre numero: " <<clientemax3<< endl;
    cout << "cuyo consumo fue de : " <<consumomax3<< " kilovatios." <<endl;
}
cout << endl << endl;

//  respuesta punto b)  //
cout <<" El total de recaudacion para la localidad 1 es: "<<facturaciontotal1<< endl;
cout <<" El total de recaudacion para la localidad 2 es: "<<facturaciontotal2<< endl;
cout <<" El total de recaudacion para la localidad 3 es: "<<facturaciontotal3<< endl;
cout << endl << endl;

//  respuesta punto c)  //
if ((consumomin1==0) && (consumomin2==0) && (consumomin3==0)){
    cout <<"no se consumio nada en ninguna localidad." <<endl;
}
else if ((consumomin1<=consumomin2) && (consumomin1<=consumomin3)){
    cout << "el cliente con menor consumo de todas las localidades es el cliente: " <<clientemin1<< endl;
}
else if ((consumomin2<=consumomin1) && (consumomin2<=consumomin3)){
    cout << "el cliente con menor consumo de todas las localidades es el cliente: " <<clientemin2<< endl;
}
else {
    cout << "el cliente con menor consumo de todas las localidades es el cliente: " <<clientemin3<< endl;
}


getch ();
return 0;

}