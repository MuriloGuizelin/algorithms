#include <stdio.h>

int potencia(int base, int expoente) {
    if (expoente == 0)
        return 1;
    else
        return base * potencia(base, expoente - 1);
}

int main() {
    int base = 4;
    int expoente = 3;
    printf("%d elevado a %d é %d\n", base, expoente, potencia(base, expoente));
    return 0;
}