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

int main() {
    int filas, columnas;

    //Peticion de datos para el programa
    printf("Ingresar el numero de filas de la matriz: ");
    scanf("%d", &filas);

    printf("Ingresar el numero de columnas de la matriz: ");
    scanf("%d", &columnas);

    //Verificacion de que en numero de filas y columnas no exeda a lo pedido
    if (filas > MAX_FILAS || columnas > MAX_COLUMNAS) {
        printf("Error: Las dimensiones de la matriz exceden los limites.\n");
        return 1;
    }

    //Declaracion de las matrices
    int matriz[MAX_FILAS][MAX_COLUMNAS];
    int transpuesta[MAX_COLUMNAS][MAX_FILAS];

    //Inicializa el generador de numeros aleatorios mediante (time.h)
    srand(time(NULL));

    //Llena la matriz con numeros aleatorios entre 0 y 100
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 101;  //Numeros aleatorios entre 0 y 100
        }
    }
    
    //Llamada a las funciones

    // Calcular la matriz transpuesta
    calcularTranspuesta(matriz, transpuesta, filas, columnas);

    // Imprimir la matriz original
    printf("\nMatriz Original:\n");
    imprimirMatriz(matriz, filas, columnas);

    // Imprimir la matriz transpuesta
    printf("\nMatriz Transpuesta:\n");
    imprimirMatriz(transpuesta, columnas, filas);

    return 0;
}