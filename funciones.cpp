//----------------------------------Funcion BOOL para determinar si es par o inmpar------------------------------- //
bool esPrimo (int numero){
    int divisores=0;
    for (int i = 1; i <=numero; i++)
    {
        if(numero%i==0){
            divisores++;
        }
    }
    if (divisores==2){
        return true;
    }
    else {
        return false;
    }    
}

//----------------------------------Funcion BOOL para determinar si numero primo------------------------------- //
bool esPrimo (int numero){
    int divisores=0;
    for (int i = 1; i <=numero; i++)
    {
        if(numero%i==0){
            divisores++;
        }
    }
    if (divisores==2){
        return true;
    }
    else {
        return false;
    }
    
}
//----------------------------------------------------------//