#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int codigoLibro;
int vendedor;
int vVendedor[10]{};///guardo el total que vende cada vendedor
float vendedorVentasMayor;///el vendedor con mayor recaudacion
int vendedorMax;/// numero del vendedor con mayor recaudacion
int dia;
float vRecaudacioDia[31]{};///guardo la recaudacion de cadad dia
float vPrecio[200]{};///guado el precio del libro
float precio=0;
int tema;
int temaPorCodigo;
int vTemaLibro[200]{};///guardo el tema de cada libro
int vTemacont[20]{};///guardo la cantidad de libros vendidos de ese tema
int vTemaVendidos[20]{};///guardo los temas vendidos
int temaComparador;
int temaMasVendido;

///-------------------------------------------ingreso de lote 1------------------------------------------------

cout<<"Datos del lote 1:"<<endl;
cout<<"ingrese el codigo del libro (1-200/ ingrese 0 para finalizar): "<<endl;
cin>>codigoLibro;
while (codigoLibro!=0)
{
    cout<<"ingrese el tema del libro(1-20): "<<endl;
    cin>>tema;
    vTemaLibro[codigoLibro-1]=tema;
    cout<<"ingrese el precio del libro: "<<endl;
    cin>>precio;
    vPrecio[codigoLibro-1]=precio;

    

    cout<<"ingrese el codigo del libro (1-200/ ingrese 0 para finalizar): "<<endl;
    cin>>codigoLibro;
}
cout<<endl<<endl;

/// ------------------------------------------ingreso de lote 2--------------------------------------------------
cout<<"Datos del lote 2:"<<endl;
cout<<"ingrese el codigo del libro (1-200/ ingrese 0 para finalizar): "<<endl;
cin>>codigoLibro;

while (codigoLibro!=0)
{
    cout<<"ingrese el numero del vendedor (1-10): "<<endl;
    cin>>vendedor;
    cout<<"ingrese el dia de la venta (1-31): "<<endl;
    cin>>dia;
    ///tema mas vendido
    temaPorCodigo=vTemaLibro[codigoLibro-1];
    vTemacont[temaPorCodigo-1]++;
    ///calculo la recaudacion por dia 
    vRecaudacioDia[dia-1]+=vPrecio[codigoLibro-1];

    ///calculo de ventas por vendedor
    vVendedor[vendedor-1]+=vPrecio[codigoLibro-1];

    ///guardo el tema del libro que se vendio
    vTemaVendidos[temaPorCodigo-1]=temaPorCodigo;
   /* cout<<"vtemavendidos "<<vTemaVendidos[vTemaLibro[codigoLibro-1]]<<endl;*/

    cout<<"ingrese el codigo del libro (1-200/ ingrese 0 para finalizar): "<<endl;
    cin>>codigoLibro;
}

///a) Indicar por separado la recaudación total para cada uno de las 31 días.
for (int i = 0; i < 31; i++)
{
    cout<< "recaudacion del dia "<<(i+1)<<" es: "<<vRecaudacioDia[i]<<endl;
}
cout<<endl<<endl;

///b) Cuál es el número de vendedor con mayor recaudación total por ventas.

vendedorVentasMayor=vVendedor[0];
vendedorMax=0;

for (int j = 1; j <10; j++)
{
    if(vendedorVentasMayor<vVendedor[j]){
        vendedorVentasMayor=vVendedor[j];
        vendedorMax=j;
    }
}

cout<<"el vendedor con mayor recaudacion es: "<<(vendedorMax+1);
cout<<endl<<endl;

///c) Cuál es el número de tema más vendido.


for (int k = 0; k <20; k++){
    if(k==0){
        temaComparador=vTemacont[0];
        temaMasVendido=vTemaVendidos[0];
    }
    else if (temaComparador<vTemacont[k]){
        temaComparador=vTemacont[k];
        temaMasVendido=vTemaVendidos[k];
    }
    /*cout<<"vtemavendidos "<<vTemaVendidos[k]<<endl;
    cout<<"temacomparador "<<temaComparador<<endl;
    cout<<"vtemacont "<<vTemacont[k]<<endl;
    cout<<"temamasvendido "<<temaMasVendido<<endl;

    cout<<"temamasvendido despues del if "<<temaMasVendido<<endl;*/
}

cout<<"el tema que mas se vendio fue el tema: "<<(temaMasVendido)<<endl<<endl;



getch();
return 0;
}
