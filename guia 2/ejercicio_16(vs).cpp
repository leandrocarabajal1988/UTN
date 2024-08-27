#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    /*variables:
    nota1, nota2, nota3, nota4*/

///-------------------------------------- CON IF ----------------------------------------------------///
    int nota1, nota2, nota3, nota4;
    int n=0;

    cout<<"ingrese las 4 notas: "<<endl;
    cin>>nota1>>nota2>>nota3>>nota4;

if(nota1>=4){
    n++;
    }
if(nota2>=4){
    n++;
}
if(nota3>=4){
    n++;
}
if(nota4>=4){
    n++;
}

if((nota1>=7) && (nota2>=7) && (nota3>=7) && (nota4>=7)){
    cout<<"el alumno promociona la materia";
}
else if(n==3){
    cout<<"el alumno rinde examen final.";
}
else if((nota1>=4) || (nota2>=4) || (nota3>=4) || (nota4>=4)){
    cout<<"el alumno puede recuperar los parciales";
}
if((nota1<4) && (nota2<4) && (nota3<4) && (nota4<4)){
    cout<<"el alumno debe recursar la materia.";
}

/*
///--------------------------------------- CON FOR -----------------------------------------------------///

int estadopromo=0, estadorecu=0;
int nota;
for(int n=0; n<4; n++){
    
    if(n==0){
    cout<<"ingrese las 4 nota de los examenes: " <<endl;
    }

    cin>>nota;

    if(nota>=7){
        estadopromo++;
    }
    if(nota>=4){
        estadorecu++;
    }
}
if (estadopromo==4){
    cout<<"el alumno promociona la materia.";
}
else if(estadorecu>=3){
    cout<<"el almuno debe rendir final.";
}
else if(estadorecu>=1){
    cout<<"el alumno puede recuperar los parciales.";
}
else {
    cout<<"el alumno debe recursar la materia.";
    }
*/

getch();
return 0;
}