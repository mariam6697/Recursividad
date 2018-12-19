void menu(){
    string opcion;
    cout << "Escoja una de las siguientes opciones:" << endl;
    cout << "[A] Conversion de entero no negativo a equivalente numerico en base 10" << endl;
    cout << "[B] Determinar cantidad de bolas para formar una piramide de base cuadrada" << endl;
    cout << "[C] Determinar numero de nodos de un bi-arbol binario" << endl;
    cout << "[D] Cantidad total de grupos diferentes que se pueden formar" << endl;
    cout << "[E] Obtener el producto de Wallis de un numero entero" << endl;
    cout << "Ingrese letra -> ";
    cin >> opcion;
    system("clear");
    if (opcion=="A" || opcion=="a"){
        int cont=0, n, b, base_diezresult=0;
        stack_reg(cont, 1);
        cout << "Ingrese un numero entero no negativo: ";
        cin >> n;
        cont++;
        stack_reg(cont, 1);
        cout << "Ingrese base (1 al 9): ";
        cin >> b;
        cont--;
        base_diezresult=base_diez(n, b, cont);
        cout << "Su equivalente numerico en base 10 es: " << base_diezresult << endl;
    }
    else if (opcion=="B" || opcion=="b"){
        int cont=0, n, piramideresult=0;
        stack_reg(cont, 1);
        cout << "Ingrese cantidad de niveles de la piramide: ";
        cin >> n;
        cont++;
        stack_reg(cont, 1);
        cont--;
        piramideresult=piramide(n, cont);
        cout << "La cantidad de bolas necesarias es: " << piramideresult << endl;
    }
    else if (opcion=="C" || opcion=="c"){
        int cont=0, i, j, bi_arbolresult=0;
        stack_reg(cont, 1);
        cout << "Ingrese valor i: ";
        cin >> i;
        cont++;
        stack_reg(cont, 1);
        cout << "Ingrese valor j: ";
        cin >> j;
        stack_reg(cont, 2);
        cont--;
        bi_arbolresult=bi_arbol(i, j, cont);
        cout << "La cantidad de nodos es: " << bi_arbolresult << endl;
    }
    else if (opcion=="D" || opcion=="d"){
        int cont=0, n, k, grupos_difresult=0;
        stack_reg(cont, 1);
        cout << "Ingrese cantidad total de personas: ";
        cin >> n;
        cont++;
        stack_reg(cont, 1);
        cout << "Ingrese cantidad de personas por grupo: ";
        cin >> k;
        stack_reg(cont, 2);
        cont--;
        grupos_difresult=grupos_dif(n, k, cont);
        cout << "La cantidad de grupos diferentes que se pueden formar es: " << grupos_difresult << endl;
    }
    else if (opcion=="E" || opcion=="e"){
        int cont=0, n, wallisresult=0;
        stack_reg(cont, 1);
        cout << "Ingrese un numero entero: ";
        cin >> n;
        wallisresult=wallis(n, cont);
        cout << "El producto de Wallis de dicho numero es: " << wallisresult << endl;
    }
    else{
        cout << "Opcion no valida, intente nuevamente." << endl;
        menu();
    }
}
