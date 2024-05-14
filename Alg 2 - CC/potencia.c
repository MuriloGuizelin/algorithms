#include <stdio.h>

int leonardoPotenciadoForteCounterStrike(int n, int exp){
    int inicial;
    inicial = n;
    for(int i = 1; i < exp; i++){
        n = n * inicial;
    }
    return n;
}


int main(){
    int n, exp;
    printf("Digite o número: ");
    scanf("%d", &n);
    printf("Digite o expoente: ");
    scanf("%d", &exp);
    printf("O número %d elevado a %d é igual a %d\n", n, exp, leonardoPotenciadoForteCounterStrike(n, exp));
    return 0;

}