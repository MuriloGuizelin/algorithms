#include <stdio.h>

int main() {
    char vetor[11] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1'};
    int i, total = 0;

    for (i = 0; i < 11; i++) {
        total = total * 10 + (vetor[i] - '0');
    }

    printf("Total: %d\n", total);

    return 0;
}