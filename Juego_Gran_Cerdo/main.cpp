#include <iostream>
#include <locale.h>
#include "rlutil.h"
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <cctype> // Esta librería contiene la función toupper
using namespace std;
#include "prototipo.h"
using namespace rlutil;


int main()
{

    setConsoleTitle("GRAN CERDO"); ///CAMBIA EL NOMBRE DE CONSOLA
    setBackgroundColor(BLACK);     ///CAMBIA EL COLOR DE FONDO DE LA PANTALLA
    srand(time(NULL)); /// EN CADA INICIO DEL PROGRAMA TIRA NUMEROS ALEATORIOS

    msleep(3000);              /// RETIENE LA PANTALLA POR 3 SEGUNDOS
    cls();                     ///LIMPIA LA PANTALLA
    menu_principal();          ///LLAMA AL MENU PRINCIPAL
    return 0;
}








