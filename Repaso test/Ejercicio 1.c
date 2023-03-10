// Cree una función recursiva que permita sumar los primeros N números pares.
#include <stdio.h>
#include <stdlib.h>

int sumaPares(int n);
int main()
{
    int n;
    printf("Ingrese N: ");
    scanf("%d", &n);

	n = sumaPares(n);
	printf("%d", n);
    return 0;
}
int sumaPares(int n)
{
    if(n == 0)
        return n;
    else
        return sumaPares(n-1);
}
