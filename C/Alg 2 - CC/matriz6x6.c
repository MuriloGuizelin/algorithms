#include <stdio.h>

int main() {
    int matriz[6][6];
    int valor = 0;

    for (int i = 0; i < 6; i++) {
        matriz[i][i] = 0;
    }

    for (int i = 1; i < 6; i++) {
        for (int j = 0; j < i; j++) {
            matriz[i][j] = valor;
            valor += 2;
        }
    }

    valor = 1;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 6; j++) {
            valor += 2;
            matriz[i][j] = valor;
        }
    }

    // Preenche a diagonal secundária com 0
    for (int i = 0; i < 6; i++) {
        matriz[i][5 - i] = 0;
    }

    // Imprime a matriz
    printf("Matriz 6x6:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
