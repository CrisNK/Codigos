#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

void llenar_matriz(char matriz[10][10]);
void mostrar_matriz(char matriz[10][10]);
void matriz_o(char matriz[10][10]);
int movimiento(char matriz[10][10], int contador);

int main()
{
    int contador;
    char matriz[10][10];

    srand(time(NULL));
    llenar_matriz(matriz);
    matriz[0][0] = '*';
    // printf("prueba");
    matriz_o(matriz);
    mostrar_matriz(matriz);

    contador = movimiento(matriz, contador);

    system("pause");
    return 0;
}

void llenar_matriz(char matriz[10][10])
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            matriz[i][j] = 32;
        }
    }
}

void mostrar_matriz(char matriz[10][10])
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("[%c]", matriz[i][j]);
        }
        printf("\n");
    }
}

void matriz_o(char matriz[10][10])
{
    srand(time(NULL));
    int i, j, fila, columna;

    for (i = 0; i < 5; i++)
    {
        do
        {
            fila = rand() % 9 + 1;
            columna = rand() % 9 + 1;
            matriz[fila][columna] = 'O';
        } while (matriz[fila][columna] != 'O');
    }
}

int movimiento(char matriz[10][10], int contador)
{
    char tecla;
    int i, j;
    do
    {
        system("cls");
        mostrar_matriz(matriz);
        tecla = getch();
        //tecla = toupper(tecla);
        int flag = 0;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                if (matriz[i][j] == '*')
                {
                    if (tecla == 'd')
                    {
                        matriz[i][j] = ' ';
                        matriz[i][j + 1] = '*';
                        flag = 1;
                        break;
                    }
                    if (tecla == 's')
                    {
                        matriz[i][j] = ' ';
                        matriz[i + 1][j] = '*';
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
    } while (contador != 5);

    return contador;
}