// Calcular el factorial de un número usando funciones recursivas.
#include <stdio.h>
#include <stdlib.h>
int factorial(int numero);
int main()
{
    system("cls");

    int numero, resultado, i;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    resultado = factorial(numero);

    printf("El resultado es: %d", resultado);

    return 0;
}
int factorial(int numero)
{
    if (numero == 1)
        return 1;
    else
        return (numero * factorial(numero - 1));
}