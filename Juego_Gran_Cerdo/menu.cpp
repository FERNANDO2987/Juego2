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

void mostrar_menu()
{
    gotoxy(50,9);
    setColor(WHITE);
    cout<<" GRAN CERDO"<<endl;
    gotoxy(50,10);
    cout<<"---------------------"<<endl;
    gotoxy(50,11);
    cout<<"1 - JUGAR"<<endl;
    gotoxy(50,12);
    cout<<"2 - ESTADISTICAS"<<endl;
    gotoxy(50,13);
    cout<<"3 - CERDITOS"<<endl;
    gotoxy(50,14);
    cout<<"---------------------"<<endl;
    gotoxy(50,15);
    setColor(YELLOW);
    cout<<"0 - SALIR"<<endl;



}

void menu_principal()
{

    bool salir=false; ///VARIABLE PARA EL while
    char op;          ///VARIABLE PARA LA OPCION
 char opcion1;
  char n1[30];
    char n2[30];


    while(!salir)            ///MIENTRAS SEA DISTINTO DE SALIR
    {
        cls();                     ///LIMPIA LA PANTALLA
        mostrar_menu(); ///LLAMA A MOSTRAR MENU
        setColor(WHITE);
        gotoxy(50,16);
        cout<<endl;
        gotoxy(50,17);
        cout<<"INGRESE UNA OPCION: ";
        cin.get(op);    ///LEE UN CARACTER POR TECLADO
        cin.ignore();  ///BORRA EL BUFER DEL TECLADO

        switch(op)     ///DEPENDIENDO DE LA OPCION QUE INGRESE EL USUARIO
        {
        case '1':
        {
            cls(); ///LIMPIA LA PANTALLA


           compararTiradaDados();
        }
        case '2':
        {
            void mostrar_estadisticas();

        } break;

        case '3':
        {
            mostrar_cerditos();

        } break;
        case '0':
        {
            salir=true;
        }
        break;

        default:
        {
            gotoxy(50,19);
            cout<<"OPCION INCORRECTA!!!"<<endl;
        }

        }

 cin.get();/// DETIENE LA PANTALLA

    }



    }

