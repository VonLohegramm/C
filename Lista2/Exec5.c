#include <stdio.h>

void main (main)
{
	float numero1, numero2;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &numero1);
	printf("Digite o segundo valor: ");
	scanf("%f", &numero2);
	
	if(numero1 > numero2)
	{
		printf("O %.2f e maior do que o %.2f", numero1, numero2);
	}
	else
	{
		printf("O %.2f e maior do que o %.2f", numero2, numero1);
	}
	
	
}
