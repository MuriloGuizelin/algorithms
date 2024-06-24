#include <stdio.h>

int main() {
    int num, i, divonico = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            divonico = 0;
            break;
        }
    }

    if (divonico == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
