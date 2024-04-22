#include <stdio.h>

int somaArray(int array[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return array[n - 1] + somaArray(array, n - 1);
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);
    printf("Soma do array: %d\n", somaArray(array, n));
    return 0;
}