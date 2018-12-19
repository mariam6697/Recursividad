/**
Lenguajes de Programación, segundo semestre 2017
Fecha: 4 de diciembre de 2017
Autora del programa: Mariam Maldonado Marín
Profesor: Héctor Pincheira Conejeros
Sección 411
**/

#include <iostream>
#include <math.h>
#include <sstream>
#include <stdlib.h>
#include "REGISTRO.h"
#include "FUNCIONES.h"
#include "MENU.cpp"
#include "FUNCIONES.cpp"

using namespace std;

int main(){
    string continuar;
    do{
        system("clear");
        menu();
        cout << "¿Desea realizar otra operacion? (Si/No) -> ";
        cin >> continuar;
    }
    while (continuar=="si" || continuar=="SI" || continuar=="Si");
    return 0;
}
