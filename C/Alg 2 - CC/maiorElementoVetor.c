#include <stdio.h>

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vetor = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }

    int *maior = &vetor[0];
    for (int i = 1; i < n; i++) {
        if (vetor[i] > *maior) {
            maior = &vetor[i];
        } 
    }

    printf("Maior elemento: %d\n", *maior);

    free(vetor);

    return 0;
}