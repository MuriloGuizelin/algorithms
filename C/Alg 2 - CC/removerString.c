#include <stdio.h>

void removerCaractere(char *str, char c) {
    char *p = str; 
    char *q = str; 

    while (*p) {
        if (*p != c) {
            *q = *p; 
            q++; 
        }
        p++; 
    }

    *q = '\0'; 
}

int main() {
    char str[100];
    char c;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    printf("Digite o caractere a ser removido: ");
    scanf("%c", &c);

    removerCaractere(str, c);

    printf("String resultante: %s\n", str);

    return 0;
}