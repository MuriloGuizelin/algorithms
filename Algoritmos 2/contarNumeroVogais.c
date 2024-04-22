#include <stdio.h>

int contarNumeroVogais(char str[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        if (str[n - 1] == 'a' || str[n - 1] == 'e' || str[n - 1] == 'i' || str[n - 1] == 'o' || str[n - 1] == 'u')
        {
            return 1 + contarNumeroVogais(str, n - 1);
        }
        else
        {
            return contarNumeroVogais(str, n - 1);
        }
    }
}

int main()
{
    char str[100];
    printf("Digite uma string: ");
    scanf("%s", str);
    printf("Numero de vogais: %d\n", contarNumeroVogais(str, strlen(str)));
    return 0;
}