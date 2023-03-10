/*
Ejercicio de como repetir una secuencia de números, como por ejemplo
que comience en 4 y termine en 8, por n veces.
*/
#include <stdio.h>
#define INICIO 4
#define FINAL 8
int main()
{
    system("cls");
    int n, contador = 0;

    // Validación de que se ejecute al menos 1 vez.
    do
    {
        printf("Ingrese la cantidad de numeros a imprimir segun la secuencia numerica precargada.\n");
        scanf("%d", &n);
    } while (n < 1);

    // Ciclo de repetición de secuencia numérica.
    while (contador < n)
    {
        int i;
        for (i = INICIO; i <= FINAL; i++)
        {
            printf("[%d] ", i);
            contador++;
            if (contador == n)
                break;
        }
    }
    return 0;
}