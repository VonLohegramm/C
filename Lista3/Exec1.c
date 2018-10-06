#include <stdio.h>

void main (main)
{
	float num;
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	if(num > 0)
	{
		printf("Positivo");
	}
	else if(num < 0)
	{
		printf("Negativo");
	}
	else
	{
		printf("Nulo");
	}
}
