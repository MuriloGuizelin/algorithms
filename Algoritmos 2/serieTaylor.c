#include <stdio.h>

// Função para calcular o fatorial de um número
unsigned long long int fatorial(int n) {
    unsigned long long int resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

// Função para calcular a potência de um número
double potencia(double base, int expoente) {
    double resultado = 1.0;
    for (int i = 0; i < expoente; ++i) {
        resultado *= base;
    }
    return resultado;
}

// Função para calcular o seno usando a série de Taylor
double calcularSeno(double x, int n) {
    double seno = 0.0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            seno += potencia(x, 2 * i + 1) / fatorial(2 * i + 1);
        } else {
            seno -= potencia(x, 2 * i + 1) / fatorial(2 * i + 1);
        }
    }
    return seno;
}

int main() {
    double angulo;
    int termos;

    printf("Digite o valor do angulo em radianos: ");
    scanf("%lf", &angulo);

    printf("Digite o numero de termos da serie de Taylor: ");
    scanf("%d", &termos);

    double resultado = calcularSeno(angulo, termos);
    printf("O seno de %lf eh aproximadamente: %lf\n", angulo, resultado);

    return 0;
}
