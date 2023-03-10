#include <stdio.h>
#include <stdlib.h>

int fibonacci(int numero);

int main()
{
    system("cls");
    int numero, i;

    printf("Ingrese numeros a imprimir: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++)
        printf("[%d] ", fibonacci(i));
    return 0;
}

int fibonacci(int numero)
{
    if (numero == 1)
        return numero;
    else
        return (fibonacci(numero - 1) + fibonacci(numero - 2));
}
