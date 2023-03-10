#include <stdio.h>

// Declarar la función o el procedimiento.
void imprimir();
void imprimir2(char mensaje[]);
int suma();
float division(float num1, float num2);

// Implementación del procedimiento o de la función.
float division(float num1, float num2)
{
    return (num1 / num2);
}
int suma()
{
    int numero1 = 1;
    int numero2 = 4;
    int resultado = numero1 + numero2;
    return resultado;
}
void imprimir()
{
    printf("Hola mundo\n");
}
void imprimir2(char mensaje[])
{
    printf("%s\n", mensaje);
}

int main()
{
    int resultadoDeUnaSuma;
    float resultadoDeUnaDivision;
    imprimir();
    imprimir2("Hola mundo!");

    resultadoDeUnaSuma = suma();
    resultadoDeUnaDivision = division(2.2, 4.5);

    printf("%d\n", resultadoDeUnaSuma);
    printf("%f", resultadoDeUnaDivision);

    return 0;
}