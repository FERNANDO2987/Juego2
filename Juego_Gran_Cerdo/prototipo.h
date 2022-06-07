#ifndef PROTOTIPO_H_INCLUDED
#define PROTOTIPO_H_INCLUDED


///MUESTRA LAS OPCIONES DEL MENU PRINCIPAL
void mostrar_menu();

///OPCIONES DEL MENU PRINCIPAL
void menu_principal();

///MUSTRA LAS ESTADISTICAS
void mostrar_estadisticas();

///MUESTRA LOS CREDITOS
void mostrar_cerditos();

///MOSTRAR PRESENTACION
void mostrar_presentacion();

///PIDE LOS NOMBRES DE LOS JUGADORES
char ingresar_nombre(char *, char *);

///MUESTRA LAS REGLAS DEL JUEGO
void mostrar_reglas_juego();

int lanzarDados(int *v, int cant);

void mostrarDados(int *vec, int cant);


int sumar(int *vec, int cant);

void mostrarNombre(char *,char *);

void compararTiradaDados();
#endif // PROTOTIPO_H_INCLUDED
