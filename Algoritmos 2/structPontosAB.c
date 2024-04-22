#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

float calcular_distancia(Ponto ponto1, Ponto ponto2) {
    return sqrt(pow(ponto2.x - ponto1.x, 2) + pow(ponto2.y - ponto1.y, 2));
}

int main() {
    Ponto ponto_a, ponto_b;

    printf("Insira as coordenadas do ponto A (x y): ");
    scanf("%f %f", &ponto_a.x, &ponto_a.y);

    printf("Insira as coordenadas do ponto B (x y): ");
    scanf("%f %f", &ponto_b.x, &ponto_b.y);

    float distancia = calcular_distancia(ponto_a, ponto_b);
    printf("A distancia entre os pontos é: %f\n", distancia);

    return 0;
}
