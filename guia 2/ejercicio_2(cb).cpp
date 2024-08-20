
#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
     //n1=numero 1, n2= numero 2//
    int n1, n2;


    cout <<"ingrese el primer número: " <<endl;
    cin >> n1;
    cout << "ingrese el segundo número: " << endl;
    cin >> n2;

    if (n1%n2==0) {
            cout << "el primer número es multiplo del segundo numero";
    }
        else {
            cout <<"el primero número NO es multiplo del segundo numero";
            }

    getch ();

    return 0;
    }
