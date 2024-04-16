#include <math.h>

class Solution {
public:
    int pivotInteger(int n) {
        double x = sqrt(n * (n + 1) / 2.0);
        
        if (fmod(x, 1.0) != 0) {
            return -1;
        } else {
            return static_cast<int>(x);
        }
    }
};

// Calcula se é um quadrado perfeito
// COMO? -> Se a raiz quadrada de um número for um número inteiro, então é um quadrado perfeito e é o pivo.
// Exercicio resolvido com matematica pura e logica aplicada