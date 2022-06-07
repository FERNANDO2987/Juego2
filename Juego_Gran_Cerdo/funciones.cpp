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

char ingresar_nombre(char nombre1[30], char nombre2[30])
{
    int i=0;
    gotoxy(40,5);
    setColor(YELLOW);
    cout<<"NOTA: LOS CAMPOS DE LOS NOMBRES DEBEN ESTAR COMPLETOS"<<endl;
    setColor(WHITE);
    gotoxy(50,9);
    cout<<endl;
    gotoxy(50,10);
    cout<<"JUGADOR 1: ";
    cin.getline(nombre1,30);
    gotoxy(50,11);
    cout<<"JUGADOR 2: ";
    cin.getline(nombre2,30);

    while(nombre1[i]==0 || nombre2[i]==0)
    {

        i++;


        cls();
        gotoxy(40,5);
        setColor(YELLOW);
        cout<<"NOTA: LOS CAMPOS DE LOS NOMBRES DEBEN ESTAR COMPLETOS"<<endl;
        setColor(WHITE);
        cout<<endl;
        gotoxy(50,10);
        cout<<"JUGADOR 1: ";
        cin.getline(nombre1,30);
        gotoxy(50,11);
        cout<<"JUGADOR 2: ";
        cin.getline(nombre2,30);

    }


    setColor(MAGENTA);
    cout<<endl;
    gotoxy(50,13);
    cout<<"NOMBRES COMPLETOS!!!!"<<endl;
    setColor(WHITE);


}



int lanzarDados(int *v, int cant)
{

    int i;

    for(i=0; i<cant; i++)
    {

        v[i]= 1 +rand() % 6;

    }


}

void mostrarDados(int *vec, int cant)
{


    int i;

    for(i=0; i<cant; i++)
    {

        cout<<"DADO"<<i+1<<":"<<vec[i]<<"  ";



    }
    cout<<endl;
    cout<<endl;

}

int sumar(int *vec, int cant)
{

    int i;
    int total=0;

    for(i=0; i<cant; i++)
    {

        total+=vec[i];
    }

    return total;

}


void compararTiradaDados()
{


    char jugador1[30]; ///VARIABLE PARA GUARDAR LOS NOMBRES
    char jugador2[30]; ///VARIABLE PARA GUARDAR LOS NOMBRES

    int vec1[3]= {};
    int acu1=0; ///VARIABLE PARA ACUMULAR LOS DADOS TIRADOS
    int vec2[3]= {};
    int acu2=0;

    cls(); ///LIMPIA LA PANTALLA
    ingresar_nombre(jugador1,jugador2); ///LLAMA A LA FUNCION NOMBRE
    gotoxy(50,14);
    system("pause");        ///HACE UNA PAUSA HASTA QUE EL USUARIO INGRESE ENTER
    cls();                  ///LIMPIA LA PANTALLA
    mostrar_reglas_juego(); ///MUSTRA LAS REGLAS DEL JUEGO
    cls();
    cout<<"JUGADOR: "<<jugador1<<endl;
    cout<<endl;
    system("pause");
    lanzarDados(vec1,3);
    cout<<endl;
    mostrarDados(vec1,3);
    acu1=sumar(vec1,3);
    cout<<endl;
    cout<<"TOTAL : "<<acu1<<endl;
    cout<<endl;
    msleep(6000);
    cls();

    cout<<"JUGADOR: "<<jugador2<<endl;
    cout<<endl;
    system("pause");
    lanzarDados(vec2,3);
    cout<<endl;
    mostrarDados(vec2,3);
    acu2=sumar(vec2,3);
    cout<<endl;
    cout<<"TOTAL : "<<acu2<<endl;
    cout<<endl;


while(acu1==acu2){

      cout<<"JUGADOR: "<<jugador1<<endl;
    cout<<endl;
    system("pause");
    lanzarDados(vec1,3);
    cout<<endl;
    mostrarDados(vec1,3);
    acu1=sumar(vec1,3);
    cout<<endl;
    cout<<"TOTAL : "<<acu1<<endl;
    cout<<endl;
    cout<<"JUGADOR: "<<jugador2<<endl;
    cout<<endl;
    system("pause");
    lanzarDados(vec2,3);
    cout<<endl;
    mostrarDados(vec2,3);
    acu2=sumar(vec2,3);
    cout<<endl;
    cout<<"TOTAL : "<<acu2<<endl;
    cout<<endl;

}



}



