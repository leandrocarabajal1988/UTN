#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    //"a,b, c, tipos de alfajores; pa, pb, pc, porcentaje de cada tipo de alfajor, t=total de alfajores"//

    int a, b, c;
    float t, pa, pb, pc;

    cout << "ingese la cantidas de alfajores a vendidos:" << "ingese la cantidas de alfajores b vendidos:" << "ingese la cantidas de alfajores c vendidos:" << endl;
    cin >> a >> b >> c;
    t = a+b+c;
    pa = (a*100)/t, pb=(b*100)/t, pc=(c*100)/t;
    cout << "porcentaje de alfajores tipo a vendidos:" << pa <<"%" << endl;
    cout << "porcentaje de alfajores tipo b vendidos:" << pb <<"%" << endl;
    cout << "porcentaje de alfajores tipo c vendidos:" << pc <<"%" << endl;
      
    getch();

    return 0;
}