#include <stdio.h>

void main (main)
{
	
	int numero, result;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if (numero < 0)
	{
		printf("Negativo");
	}
	else if(numero == 0)
	{
		printf("Neutro");
	}
	else
	{
		printf("Positivo");
	}
	
	
	
}
