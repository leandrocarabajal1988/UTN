case 1: //hago el proceso para la localidad 1 //
        cout << "ingrese el consumo del cliente: " << endl;
        cin >> consumo;
        //sumo todos los consumos que entran/7
        consumo1+=consumo;
        if(primero1){  //por aca solo paso en el primer ingreso para asignar valores maximos y minimos//
            consumomax1=consumo;
            consumomin1=consumo;
            clientemax1=cliente;
            clientemin1=cliente;
            primero1=false;
        }   //busco el cliente con el maximo consumo//
        if(consumo>consumomax1){
            consumomax1=consumo;
            clientemax1=cliente;
        }   //busco el cliente con menor consumo//
        if(consumo<consumomin1){
            consumomin1=consumo;
            clientemin1=cliente;
        }   
        //calculo los consumos totales (voy de consumo cero a mas) //
        if(consumo==0){   //cliente sin consumo//
            facturacion1=100;
        }   
        //cliente con consumo menor a 100kw//
        if(consumo<100){
            facturacion1=cargofijo+(consumo*10);            
        }   
        //cliente con consumo menor a 200 kw//
        else if(consumo<200){
            facturacion1=cargofijo+((100)*10)+(((consumo-100)*12));
        }   
        //cliente con consumo mayor a 200 kw//
        else if(consumo>200){
            facturacion1=cargofijo+((100)*10)+(((100)*12)+((consumo-200)*15));
        }
        //sumo todos los consumos//
        facturaciontotal1+=facturacion1;

        //vuelvo a pedir el numero de cliente para volver a ingresar datos//
        cout << "para finalizar ingrese cliente 0 (cero)" << endl;
        cout << "ingrese el numero de cliente: " << endl;
        cin >> cliente;
        cout << endl;
