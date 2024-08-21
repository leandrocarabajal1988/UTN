#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    /*variables:
    n1=primer numero, n2=segundo numero, n3=tercer numero, n4=cuarto numero, n5=quinto numero*/

float n1, n2, n3, n4, n5;
float p1, p0;

cout<<"ingrese 5 numeros: "<< endl;
cin >>n1>>n2>>n3>>n4>>n5;

if(n1>n2){
    if(n1>n3){
        if(n1>n4){
            if(n1>n5){
                p1=n1;
            }
            else{
                p1=n5;
            }
        }
        else if(n4>n5){
             p1=n4;
             }
            else{
                p1=n5;
            }
    }
    else if(n3>n4){
             if(n3>n5){
                p1=n3;
            }
            else{
                p1=n5;
            }
    }
    else if(n4>n5){
        p1=n4;
        }
    else{
            p1=n5;
        }
}
else if(n2>n3){
    if(n2>n4){
        if(n2>n5){
            p1=n2;
        }
        else{
            p1=n5;
        }
    }
    else if(n4>n5){
        p1=n4;
    }
    else{
        p1=n5;
    }
}
else if(n3>n4){
    if(n3>n5){
        p1=n3;
    }
    else{
        p1=n5;
    }
}
else if(n4>n5){
    p1=n4;
}
else{
    p1=n5;
}

if(n1<n2){
    if(n1<n3){
        if(n1<n4){
            if(n1<n5){
                p0=n1;
            }
            else{
                p0=n5;
            }
        }
        else if(n4<n5){
             p0=n4;
             }
            else{
                p0=n5;
            }
    }
    else if(n3<n4){
             if(n3<n5){
                p0=n3;
            }
            else{
                p0=n5;
            }
    }
    else if(n4<n5){
        p0=n4;
        }
    else{
            p0=n5;
        }
}
else if(n2<n3){
    if(n2<n4){
        if(n2<n5){
            p0=n2;
        }
        else{
            p0=n5;
        }
    }
    else if(n4<n5){
        p0=n4;
    }
    else{
        p0=n5;
    }
}
else if(n3<n4){
    if(n3<n5){
        p0=n3;
    }
    else{
        p0=n5;
    }
}
else if(n4<n5){
    p0=n4;
}
else{
    p0=n5;
}

cout<<"el numero mas grande es el: "<<p1<<endl;
cout<<"el numero mas chico es el: "<<p0;

getch ();
return 0;

}

