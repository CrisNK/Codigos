#include <stdio.h>
void transf(int *a, int *b, int dinero);
void transf2(int *a, int *b);
int main()
{
    int cta1 = 200000, cta2 = 200000, monto = 30000;
    printf("cta1 = %d    cta2 = %d\n", cta1, cta2);

    //	transf( &cta1, &cta2, monto );
    transf2(&cta1, &cta2);
    printf("cta1 = %d    cta2 = %d\n", cta1, cta2);
}

void transf2(int *a, int *b)
{
    int montoTransferencia;

    printf("Ingrese monto a transferir: ");
    scanf("%d", &montoTransferencia);

    if (*a > montoTransferencia)
    {
        *a = *a - montoTransferencia;
        *b = *b + montoTransferencia;
    }
    else
    {
        printf("Saldo insuficiente \n");
    }
}

void transf(int *a, int *b, int dinero)
{
    *a = *a - dinero;
    *b = *b + dinero;
}
