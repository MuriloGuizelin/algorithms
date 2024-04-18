#include <stdio.h>

int main() {
    int limite_superior;

    printf("Digite o limite superior para encontrar números primos: ");
    scanf("%d", &limite_superior);

    // Array para marcar os números como primos ou não primos
    int primo[limite_superior + 1];

    // Inicializa todos os números como primos
    for (int i = 2; i <= limite_superior; i++) {
        primo[i] = 1;
    }

    // Marca os múltiplos de números primos como não primos
    for (int p = 2; p * p <= limite_superior; p++) {
        if (primo[p] == 1) {
            // Marca os múltiplos de p como não primos
            for (int i = p * 2; i <= limite_superior; i += p) {
                primo[i] = 0;
            }
        }
    }

    // Imprime os números primos
    printf("Números primos entre 2 e %d:\n", limite_superior);
    for (int p = 2; p <= limite_superior; p++) {
        if (primo[p] == 1) {
            printf("%d ", p);
        }
    }
    printf("\n");

    return 0;
}