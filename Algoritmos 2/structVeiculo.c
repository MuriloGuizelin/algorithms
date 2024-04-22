#include <stdio.h>
#include <math.h>

typedef struct {
    char modelo[50], marca[50], cor[50]; 
    int ano, valor;
} Veiculo;

int veiculoCaro(Veiculo veiculo[10]) {
    int caro = veiculo[0].valor; 
    for (int i = 1; i < 10; i++) { 
        if (caro < veiculo[i].valor) {
            caro = veiculo[i].valor;
        }
    }
    return caro;
}

int main() {
    Veiculo veiculo[10];
    for (int i = 0; i < 10; i++) {
        printf("Insira o valor do veiculo %d: ", i + 1);
        scanf("%d", &veiculo[i].valor);
    }
    printf("O veiculo mais caro custa: %d\n", veiculoCaro(veiculo));
    return 0;
}
