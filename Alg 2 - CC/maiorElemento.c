#include <stdio.h>

// Função para calcular o maior elemento de um vetor
int maior(int *vetor, int n){
    int maior = *vetor;
    for (int i = 1; i < n; ++i) {
        if (*(vetor + i) > maior) {
            maior = *(vetor + i);
        }
    }
    return maior;
}

int main(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    for (int i = 0; i < n; ++i) {
        printf("Digite o valor do elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }

    int resultado = maior(vetor, n);
    printf("O maior elemento do vetor eh: %d\n", resultado);

    return 0;
}