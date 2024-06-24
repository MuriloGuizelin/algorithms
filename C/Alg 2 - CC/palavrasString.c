#include <stdio.h>

int contarPalavras(char *str) {
    int contador = 0;
    int dentroPalavra = 0;

    while (*str != '\0') {
        if (*str == ' ' || *str == '\t' || *str == '\n') {
            dentroPalavra = 0;
        } else if (dentroPalavra == 0) {
            dentroPalavra = 1;
            contador++;
        }
        str++;
    }

    return contador;
}

int main() {
    char string[] = "Olá professor Willyan de Algoritmos 2";
    int numPalavras = contarPalavras(string);

    printf("O número de palavras na string é: %d\n", numPalavras);

    return 0;
}