#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Define el maximo numeros de filas y columnas
#define MAX_FILAS 100
#define MAX_COLUMNAS 100

// Funcion para generar e imprimir la matriz
void imprimirMatriz(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

//Funcion para calcular la transpuesta de la matriz generada
void calcularTranspuesta(int matriz[MAX_FILAS][MAX_COLUMNAS], int transpuesta[MAX_COLUMNAS][MAX_FILAS], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}