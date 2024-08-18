#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //n1=primer numero, n2=segundo numero//
    int n1, n2, r;

    cout<<"ingrese dos nuemeros: "<<endl;
    cin>>n1>>n2;
        if(n1>=n2)
        {
        r=n1-n2;
        }
        else
        {
        r=n2-n1;
        }

    cout<<r;
    getch ();
    return 0;

}
