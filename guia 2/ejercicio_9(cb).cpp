#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    /*variables:
    n1=primer numero, n2=segundo numero, n3=tercer numero
    p1=mayor, p2=numero del medio, p3=menor*/

    float n1, n2, n3;
    float p1, p2, p3;

    cout<<"ingrese tres numeros: "<<endl;
    cin>>n1>>n2>>n3;

    if(n1<n3){
        if(n2<n3){
            p1=n3, p2=n2, p3;
        }
        else if(n1<n3){
            p1=n2, p2=n3, p3=n1;
        }
        else {
            p1=n2, p2=n1, p3=n3;
    }}
    else if(n1<n3){
        p1=n3, p2=n3, p3=n2;
    }
    else if(n2<n3){
        p1=n1, p2=n3, p3=n2;
    }
    else {
        p1=n1, p2=n2, p3=n3;
    }

    cout << "el numero mayor es: "<<p1;

    getch();
    return 0;

}
