#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    /*Variables:
    dn=dia de nac, mn=mes de nac, an=año de nac
    da=dia actual, ma=mes actual, aa=año actual, dd=diferencia de dias, dm=diferencia de mes, da=diferencia de años */

    int dn, mn, an, da, ma, aa, dd, dm, a;

    cout<<"ingrese su dia de nacimiento: "<<endl;
    cin>>dn;
    cout<<"ingrese su mes de nacimiento: "<<endl; 
    cin>>mn;
    cout<<"ingrese su año de nacimiento: "<<endl; 
    cin>>an;

    cout<<"ingrese el dia actual: "<<endl;
    cin>>da;
    cout<<"ingrese el mes actual: "<<endl; 
    cin>>ma;
    cout<<"ingrese año actual: "<<endl; 
    cin>>aa;

  
    //calculo de mes//
    if (mn>ma){
        dm=mn-ma;
        a=aa-an-1;
    }
    else {
        dm=ma-mn;
        a=(aa-an);
    }
    //calculo de dias//
    

    //calculo de edad//

    cout<<"tu edad es: " <<a<<"años "<<dm<<" meses ";

getch();
return 0;

}