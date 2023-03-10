#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int i, max, a = 0, b = 1, c;

    printf("Ingrese los numeros a imprimir: ");
    scanf("%d", &max);

    printf("Serie Fibonacci:\n");
    for (i = 0; i < max; i++)
    {
        printf("[%d]", b);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}