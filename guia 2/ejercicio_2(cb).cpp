
#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
     //n1=numero 1, n2= numero 2//
    int n1, n2;


    cout <<"ingrese el primer numero: " <<endl;
    cin >> n1;
    cout << "ingrese el segundo numero: " << endl;
    cin >> n2;

    if (n1%n2==0) {
            cout << "el primer numero es multiplo del segundo numero";
    }
        else {
            cout <<"el primero n�mero NO es multiplo del segundo numero";
            }

    getch ();

    return 0;
    }
