#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void pedirMatriz(int *f, int *c) {

    int filas, columnas;

    printf("Ingrese el numero de filas\n");
    scanf("%d", &*f);

    printf("\nIngrese el numero de columnas\n");
    scanf("%d", &*c);
}

void asignarDatos(int *p[], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            p[i][j] = j + 1;
        }
    }
}

void mostrarDatos(int *p[], int m, int n) {
    printf("La matriz es: \n\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void generarMatrizTranspuesta(int *p[], int *t[], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            t[j][i] = p[i][j];
        }
    }



    printf("La matriz transpuesta es: \n\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
    printf("\n");



}