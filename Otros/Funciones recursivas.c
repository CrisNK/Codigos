#include <stdio.h>
long factorial(long numero);
int main(){
	int numero;
	printf("Ingrese un número: ");
	scanf("%d", &numero);
	int i;
	for(i=0;i<=numero;i++){
		printf("%ld\n", factorial(i));
	}
	return 0;
}
long factorial(long numero){
	if (numero <= 1){
		return 1;
	}else{
		return (numero*factorial(numero-1));
	}
}
