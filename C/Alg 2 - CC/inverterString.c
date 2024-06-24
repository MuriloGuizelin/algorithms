#include <stdio.h>
#include <string.h>

void inverterString(char *cadeia) {
    int tamanho = strlen(cadeia);
    char *inicio = cadeia;
    char *fim = cadeia + tamanho - 1;

    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char cadeia[100];
    printf("Digite uma cadeia: ");
    scanf("%s", cadeia);

    inverterString(cadeia);

    printf("Cadeia invertida: %s\n", cadeia);

    return 0;
}