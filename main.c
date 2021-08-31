#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int filasN, columnasN;

int main(int argc, char** argv) {

    pedirMatriz(&filasN, &columnasN); //Obteniendo filas y columnas desde consola

    int matrizN[filasN][columnasN], matrizT[columnasN][filasN], *n[filasN], *t[columnasN]; //Inicializanddo matriz y puntero de la matriz

    for (int i = 0; i < filasN; i++) {
        n[i] = &matrizN[i][0]; //Guardando espacio de memoria de la matriz en el puntero
    }
    for (int i = 0; i < columnasN; i++) {
        t[i] = &matrizT[i][0]; //Guardando espacio de memoria de la matriz en el puntero
    }

    asignarDatos(n, filasN, columnasN);

    mostrarDatos(n, filasN, columnasN);

    generarMatrizTranspuesta(n, t, filasN, columnasN);

    return (EXIT_SUCCESS);
}

