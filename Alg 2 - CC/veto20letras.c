#include <stdio.h>

int main(){
    char vetor[1];
    vetor[0] = 'a'; // exemplo de letra minúscula

    vetor[0] = vetor[0] - 32; // transforma a letra minúscula em maiúscula

    printf("%c\n", vetor[0]); // imprime a letra maiúscula
    return 0;
    
}

// transforma minusculo em maiusculo usando ASCII