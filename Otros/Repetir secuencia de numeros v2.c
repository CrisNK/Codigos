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
    int n, contador = 1;

    // Validación de que se ejecute al menos 1 vez.
    do
    {
        printf("Ingrese el numero de veces a repetir la secuencia.\n");
        scanf("%d", &n);
    } while (n < 1);

    // Ciclo de repetición de secuencia numérica.
    int i;
    for (i = INICIO; i <= FINAL; i++)
    {
        printf("[%d] ", i);
        if (i == FINAL && contador < n)
        {
            i = INICIO - 1;
            contador++;
            printf("\n");
        }
    }

    return 0;
}