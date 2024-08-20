#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    /*variables:
    n1=numero 1, n2=segundo numero, n3=tercer numero*/

    float n1, n2, n3;

    cout<<"inlgrese tres nuemeros: "<<endl;
    cin>>n1>>n2>>n3;

    if (n1!=n2){
        if(n2!=n3){
            if(n3!=n1){
                cout<<"los tres numeros son distintos entre si";
            }
        }
    }
    getch();
    return 0;
}
