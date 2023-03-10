#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
• Los  porcentajes  para  el  cálculo  del  promedio  de  un  alumno  son:  examen  1  35%,
examen 2 50%, promedio tests 15%.
• Debe crear una función para el cálculo del promedio de un alumno.
*/
typedef struct registro_alumnos
{
    char rut[13];
    char nombre[15];
    char apellidoP[15];
    char apellidoM[15];
    float nota1;
    float nota2;
    float prom;
} REGISTRO;

void datos_alumnos(int i, char rut[13]);
int main()
{
    system("cls");

    REGISTRO alumno[10];
    datos_alumnos(0, "21185170");

    printf("RUT: %s\n", alumno[0].rut);
    /*
    // Alumno 1
    strcpy(alumno[0].rut, "21.934.124-0");
    strcpy(alumno[0].nombre, "Cristobal");
    strcpy(alumno[0].apellidoP, "Alarcon");
    strcpy(alumno[0].apellidoM, "Perez");
    // Alumno 2
    strcpy(alumno[0].rut, "21.934.124-0");
    strcpy(alumno[0].nombre, "Cristobal");
    strcpy(alumno[0].apellidoP, "Alarcon");
    strcpy(alumno[0].apellidoM, "Perez");
    // Alumno 3
    strcpy(alumno[0].rut, "21.934.124-0");
    strcpy(alumno[0].nombre, "Cristobal");
    strcpy(alumno[0].apellidoP, "Alarcon");
    strcpy(alumno[0].apellidoM, "Perez");
    // Alumno 4
    strcpy(alumno[0].rut, "21.934.124-0");
    strcpy(alumno[0].nombre, "Cristobal");
    strcpy(alumno[0].apellidoP, "Alarcon");
    strcpy(alumno[0].apellidoM, "Perez");
    // Alumno 5
    strcpy(alumno[0].rut, "21.934.124-0");
    strcpy(alumno[0].nombre, "Cristobal");
    strcpy(alumno[0].apellidoP, "Alarcon");
    strcpy(alumno[0].apellidoM, "Perez");
    // Alumno 6
    strcpy(alumno[0].rut, "21.934.124-0");
    strcpy(alumno[0].nombre, "Cristobal");
    strcpy(alumno[0].apellidoP, "Alarcon");
    strcpy(alumno[0].apellidoM, "Perez");
    // Alumno 7
    strcpy(alumno[0].rut, "21.934.124-0");
    strcpy(alumno[0].nombre, "Cristobal");
    strcpy(alumno[0].apellidoP, "Alarcon");
    strcpy(alumno[0].apellidoM, "Perez");
    // Alumno 8
    strcpy(alumno[0].rut, "21.934.124-0");
    strcpy(alumno[0].nombre, "Cristobal");
    strcpy(alumno[0].apellidoP, "Alarcon");
    strcpy(alumno[0].apellidoM, "Perez");
    // Alumno 9
    strcpy(alumno[0].rut, "21.934.124-0");
    strcpy(alumno[0].nombre, "Cristobal");
    strcpy(alumno[0].apellidoP, "Alarcon");
    strcpy(alumno[0].apellidoM, "Perez");
    // Alumno 10
    strcpy(alumno[0].rut, "21.934.124-0");
    strcpy(alumno[0].nombre, "Cristobal");
    strcpy(alumno[0].apellidoP, "Alarcon");
    strcpy(alumno[0].apellidoM, "Perez");
    */

    int opcion;
    while (1)
    {
        do
        {
            printf("---------- Menu ----------\n"
                   "1. Obtener notas de un alumno.\n"
                   "2. Obtener promedio de notas de un alumno.\n"
                   "3. Obtener promedio general de un alumno.\n"
                   "4. Salir del programa.\n"
                   "Seleccione una opcion: ");
            scanf("%d", &opcion);
            if (opcion < 1 || opcion > 4)
            {
                system("cls");
                printf("La opción ingresada no es válida.\n");
            }
        } while (opcion < 1 || opcion > 4);
    }

    return 0;
}

void datos_alumnos(int i, char rut[13] /*, char nombre[15], char apellidoP[15], char apellidoM[15]*/)
{
    REGISTRO alumno[i];

    strcpy(alumno[i].rut, rut[13]);
}