// Falta: Documentar y optimizar el código ()
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #include <conio.h>
#include <ctype.h>

void imprimirMatriz(int columnas, int filas, char matriz[columnas][filas]);
int moverAsterisco(int tamMatriz, char matriz[tamMatriz][tamMatriz], char tecla, int posicionAsterisco[], int contador);

int main()
{
    // Tiempo aleatorio
    srand(time(NULL));

    // Declaraciones
    int tamMatriz = 10;
    int filas, columnas, i, j, aux;
    char letra = 'O', tecla;
    int movimientos = 0, posicionRandomX = 0, posicionRandomY = 0, contador = 0, posicionAsterisco[2], posicionX;
    char matriz[tamMatriz][tamMatriz];

    // Llenado de matriz con espacios.
    for (j = 0; j < tamMatriz; j++)
    {
        for (i = 0; i < tamMatriz; i++)
            matriz[j][i] = ' ';
    }

    // Asignación
    posicionAsterisco[0] = 0; // Eje Y
    posicionAsterisco[1] = 0; // Eje X
    matriz[0][0] = '*';       // Asterisco inicial

    // Asignación de las 'O'
    for (i = 0; i < 5; i++)
    {
        do
        {
            posicionRandomY = rand() % 10;
            posicionRandomX = rand() % 10;
        } while (matriz[posicionRandomY][posicionRandomX] != ' ');
        matriz[posicionRandomY][posicionRandomX] = letra;
    }

    // Asignación de las 'X'
    for (i = 0; i < 10; i++)
    {
        do
        {
            posicionRandomY = rand() % 10;
            posicionRandomX = rand() % 10;
        } while (matriz[posicionRandomY][posicionRandomX] != ' ');
        matriz[posicionRandomY][posicionRandomX] = 'X';
    }

    do
    {
        system("cls");
        printf("Contador: %d\tMovimientos: %d\n", contador, movimientos);
        imprimirMatriz(tamMatriz, tamMatriz, matriz);

        do
        {       
            tecla = getch();
            tecla = toupper(tecla);
        } while (tecla == 'A' && posicionAsterisco[1] == 0 ||
                 tecla == 'D' && posicionAsterisco[1] == 9 ||
                 tecla == 'W' && posicionAsterisco[0] == 0 ||
                 tecla == 'S' && posicionAsterisco[0] == 9);

        contador = moverAsterisco(tamMatriz, matriz, tecla, posicionAsterisco, contador);
        movimientos++;

        if (contador == 5)
        {
            system("clear");
            printf("Contador: %d\tMovimientos: %d\n", contador, movimientos);
            imprimirMatriz(tamMatriz, tamMatriz, matriz);
        }
    } while (contador != 5);

    return 0;
}
void imprimirMatriz(int columnas, int filas, char matriz[columnas][filas])
{
    int i, j;
    for (j = 0; j < columnas; j++)
    {
        for (i = 0; i < filas; i++)
        {
            printf("[%c]", matriz[j][i]);
        }
        printf("\n");
    }
}
int moverAsterisco(int tamMatriz, char matriz[tamMatriz][tamMatriz], char tecla, int posicionAsterisco[], int contador)
{
    int Y, X;
    int aux = 0;
    if (tecla == 'D')
    {
        for (Y = 0; Y < tamMatriz; Y++)
        {
            for (X = 0; X < tamMatriz; X++)
            {
                if (matriz[Y][X] == '*')
                {
                    if (matriz[Y][X + 1] == 'O')
                        contador++;
                    if (matriz[Y][X + 1] == 'X')
                    {
                        posicionAsterisco[0] = 0;
                        posicionAsterisco[1] = 0;
                        aux = 1;
                        matriz[Y][X] = ' ';
                        matriz[Y][X + 1] = ' ';
                        matriz[0][0] = '*';
                        break;
                    }
                    matriz[Y][X] = ' ';
                    matriz[Y][X + 1] = '*';
                    posicionAsterisco[1] += 1;
                    aux = 1;
                    break;
                }
            }
            if (aux == 1)
                break;
        }
    }
    if (tecla == 'A')
    {
        for (Y = 0; Y < tamMatriz; Y++)
        {
            for (X = 0; X < tamMatriz; X++)
            {
                if (matriz[Y][X] == '*')
                {
                    if (matriz[Y][X - 1] == 'O')
                        contador++;
                    if (matriz[Y][X - 1] == 'X')
                    {
                        posicionAsterisco[0] = 0;
                        posicionAsterisco[1] = 0;
                        aux = 1;
                        matriz[Y][X] = ' ';
                        matriz[Y][X - 1] = ' ';
                        matriz[0][0] = '*';
                        break;
                    }
                    matriz[Y][X] = ' ';
                    matriz[Y][X - 1] = '*';
                    posicionAsterisco[1] -= 1;
                    aux = 1;
                    break;
                }
            }
            if (aux == 1)
                break;
        }
    }
    if (tecla == 'W')
    {
        for (Y = 0; Y < tamMatriz; Y++)
        {
            for (X = 0; X < tamMatriz; X++)
            {
                if (matriz[Y][X] == '*')
                {
                    if (matriz[Y - 1][X] == 'O')
                        contador++;
                    if (matriz[Y - 1][X] == 'X')
                    {
                        posicionAsterisco[0] = 0;
                        posicionAsterisco[1] = 0;
                        aux = 1;
                        matriz[Y][X] = ' ';
                        matriz[Y - 1][X] = ' ';
                        matriz[0][0] = '*';
                        break;
                    }
                    matriz[Y][X] = ' ';
                    matriz[Y - 1][X] = '*';
                    posicionAsterisco[0] -= 1;
                    aux = 1;
                    break;
                }
            }
            if (aux == 1)
                break;
        }
    }
    if (tecla == 'S')
    {
        for (Y = 0; Y < tamMatriz; Y++)
        {
            for (X = 0; X < tamMatriz; X++)
            {
                if (matriz[Y][X] == '*')
                {
                    if (matriz[Y + 1][X] == 'O')
                        contador++;
                    if (matriz[Y + 1][X] == 'X')
                    {
                        posicionAsterisco[0] = 0;
                        posicionAsterisco[1] = 0;
                        aux = 1;
                        matriz[Y][X] = ' ';
                        matriz[Y + 1][X] = ' ';
                        matriz[0][0] = '*';
                        break;
                    }
                    matriz[Y][X] = ' ';
                    matriz[Y + 1][X] = '*';
                    posicionAsterisco[0] += 1;
                    aux = 1;
                    break;
                }
            }
            if (aux == 1)
                break;
        }
    }
    return contador;
}