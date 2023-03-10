/*
Realizar dos funciones para convertir grados celcius a fahrenheit
y viceversa, siguiendo las siguientes fórmulas.
X = Grados celcius
(X °C x 9/5) + 32

Y = Grados fahrenheit
(Y °F - 32)/1.8

Realizar un menú para elegir el tipo de conversión y salir ingresando
el número 0.
*/
#include <stdio.h>
#include <stdlib.h>
int opcion;
float grados;
// Declaración de funciones.
float convertir_a_Fahrenheit(float grados);
float convertir_a_Celcius(float grados);
void consulta();
int main()
{
    printf("Programa que convierte grados de temperatura.\n");
    while (1)
    {
        consulta(opcion);
        do
            scanf("%d", &opcion);
        while (opcion < 0 || opcion > 2);
        if (opcion == 0)
            return 0;
        printf("Ingrese los grados a convertir: ");
        scanf("%f", &grados);
        if (opcion == 1)
            printf("%f", convertir_a_Fahrenheit(grados));
        if (opcion == 2)
            printf("%f", convertir_a_Celcius(grados));
    }
    return 0;
}

void consulta()
{
    printf("\n----- Menu -----\n"
           "0. Cerrar programa\n"
           "1. Convertir Celcius a Fahrenheit\n"
           "2. Convertir Fahrenheit a Celcius\n"
           "Seleccione una opcion: ");
}

float convertir_a_Fahrenheit(float grados)
{
    return (grados * 9 / 5 + 32);
}
float convertir_a_Celcius(float grados)
{
    return ((grados - 32) / 1.8);
}