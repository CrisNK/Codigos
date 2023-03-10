#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct registro_estudiantes
{
    int rut;
    char digitoVerificador;
    char nombre[20];
    char apellido[20];
    int edad;
    char calle[30];
    int numero;
    char departamento[15];
    char deporte[40];
} REGISTRO;

REGISTRO registrarEstudiantes();
void mostrarEstudiantes();

int main()
{
    system("clear");
    int n = 1000;
    REGISTRO estudiante[n];
    int i;
    for (i = 0; i < n; i++)
    {
        estudiante[i] = registrarEstudiantes();
        mostrarEstudiantes(estudiante[i]);
    }
}

REGISTRO registrarEstudiantes()
{
    REGISTRO estudiante;
    printf("Ingrese rut del estudiante (sin puntos ni guión): ");
    scanf("%d", &estudiante.rut);
    fflush(stdin);
    /*
        printf("Ingrese dígito verificador: ");
        scanf("%c", &estudiante.digitoVerificador);
        fflush(stdin);
    */
    printf("Ingrese nombre del estudiante: ");
    fgets(estudiante.nombre, 20, stdin);
    fflush(stdin);
    printf("Ingrese apellido del estudiante: ");
    fgets(estudiante.apellido, 20, stdin);
    fflush(stdin);
    printf("Ingrese la dirección del estudiante.\n"
           "Calle: ");
    fgets(estudiante.calle, 30, stdin);
    fflush(stdin);
    printf("Número: ");
    scanf("%d", &estudiante.numero);
    fflush(stdin);
    printf("Ingrese departamento: ");
    fgets(estudiante.departamento, 15, stdin);
    fflush(stdin);
    printf("Ingrese deporte(s) que practica: ");
    fgets(estudiante.deporte, 40, stdin);
    fflush(stdin);
    return estudiante;
}
void mostrarEstudiantes(REGISTRO estudiante)
{
    printf("\n-------- Datos del estudiante --------\n");
    printf("RUT: %d\n", estudiante.rut);
    printf("Dígito verificador: %c\n", estudiante.digitoVerificador);
    printf("Nombre: %s", estudiante.nombre);
    printf("Apellido: %s", estudiante.apellido);
    printf("Calle: %s", estudiante.calle);
    printf("Número: %d\n", estudiante.numero);
    printf("Departamento: %s", estudiante.departamento);
    printf("Deporte que practica: %s\n", estudiante.deporte);
}
