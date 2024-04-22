#include <stdio.h>
#include <math.h>

typedef struct {
    char nome[15];
    int matricula;
    float coeficiente;
} Aluno;

// Função para trocar dois elementos
void swap(Aluno *a, Aluno *b) {
    Aluno temp = *a;
    *a = *b;
    *b = temp;
}

// Função para ordenar os alunos em ordem decrescente de coeficiente
void ordenarPorCoeficienteDecrescente(Aluno aluno[3]) {
    for (int i = 0; i < 3 - 1; i++) {
        for (int j = 0; j < 3 - i - 1; j++) {
            if (aluno[j].coeficiente < aluno[j + 1].coeficiente) {
                swap(&aluno[j], &aluno[j + 1]);
            }
        }
    }
}

int main() {
    Aluno aluno[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &aluno[i].matricula);
        printf("Digite o coeficiente do aluno %d: ", i + 1);
        scanf("%f", &aluno[i].coeficiente);
        printf("Digite o nome do aluno %d: ", i + 1);
        getchar(); // Limpar o buffer do teclado antes de chamar fgets()
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
    }

    ordenarPorCoeficienteDecrescente(aluno);

    printf("Alunos ordenados por coeficiente em ordem decrescente:\n");
    for (int i = 0; i < 3; i++) {
        printf("Matricula: %d, Nome: %s, Coeficiente: %.2f\n", aluno[i].matricula, aluno[i].nome, aluno[i].coeficiente);
    }

    return 0;
}
