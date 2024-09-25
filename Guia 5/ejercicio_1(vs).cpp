#include <iostream>
using namespace std;
int main (){

int x = 15;
int y = 10;
int z = 0;

if (x > y)
{
    z = y;
}
else if (y > 10)
{
    z = y + x;
}
else
{
    z = x - y;
}

cout << "z es igual a: " << z;

    return 0;
}

